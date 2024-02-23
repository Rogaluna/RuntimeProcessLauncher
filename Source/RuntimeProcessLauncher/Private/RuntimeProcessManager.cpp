// Fill out your copyright notice in the Description page of Project Settings.


#include "RuntimeProcessManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Sockets.h"
#include "SocketListener.h"

URuntimeProcessManager::URuntimeProcessManager() :
    SocketListener(nullptr),
    SocketListenerThread(nullptr),
    ServerSocket(nullptr),
	ClientSocket(nullptr),
	SocketPort(0),
    Url(L""),
    Params(L""),
    bReceive(false)
{
	
}

URuntimeProcessManager::~URuntimeProcessManager()
{
	DestorySocketServer();
	DestoryProcess();
}

bool URuntimeProcessManager::CreateSocketServer()
{
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem)
    {
        return false;
    }

    FIPv4Address Address;
    FIPv4Address::Parse(TEXT("127.0.0.1"), Address);

    FIPv4Endpoint Endpoint(Address, SocketPort);

    ServerSocket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("RuntimeProcessServer"), false);
    if (!ServerSocket)
    {
        return false;
    }

    if (!ServerSocket->Bind(*Endpoint.ToInternetAddr()))
    {
        return false;
    }

    if (!ServerSocket->Listen(1)) // 只监听一个连接
    {
        return false;
    }

    // 启动一个线程来接受连接
    SocketListener = new FSocketListener(this);
    SocketListenerThread = FRunnableThread::Create(SocketListener, TEXT("SocketListenerThread"));

    return SocketListenerThread != nullptr;
}

bool URuntimeProcessManager::CreateProcess()
{
    FProcHandle NewProcessHandle = FPlatformProcess::CreateProc(*Url, *Params, true, false, false, nullptr, 0, nullptr, nullptr);
    if (!NewProcessHandle.IsValid())
    {
        return false;
    }

    this->ProcessHandle = NewProcessHandle;
    return true;
}

bool URuntimeProcessManager::SendMessageToClient_String(const FString& Message)
{
    if (ClientSocket == nullptr)
    {
        return false;
    }

    // 将FString转换为UTF-8编码的字节
    FTCHARToUTF8 UTF8Converter(*Message);
    TArray<uint8> DataToSend;
    DataToSend.Append((uint8*)UTF8Converter.Get(), UTF8Converter.Length());

    int32 BytesSent = 0;
    return ClientSocket->Send(DataToSend.GetData(), DataToSend.Num(), BytesSent);
}

bool URuntimeProcessManager::SendMessageToClient_Byte(TArray<uint8> Message)
{
    if (ClientSocket == nullptr)
    {
        return false;
    }

    int32 BytesSent = 0;
    return ClientSocket->Send(Message.GetData(), Message.Num(), BytesSent);
}

void URuntimeProcessManager::ReceiveMessageFromClient()
{
    while (bReceive) // 确保循环条件正确
    {
        TArray<uint8> ReceivedData;
        uint32 Size;
        if (ClientSocket->HasPendingData(Size))
        {
            ReceivedData.SetNumUninitialized(FMath::Min(Size, 65507u));

            int32 Read = 0;
            if (ClientSocket->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read))
            {
                // 确保只转换接收到的字节
                FString ReceivedMessage = FString(UTF8_TO_TCHAR(ReceivedData.GetData()), Read);
                OnMessageReceived.Broadcast(ReceivedMessage);
            }
        }

        FPlatformProcess::Sleep(0.01f);
    }
}

void URuntimeProcessManager::DestorySocketServer()
{
    // 停止监听连接线程
    if (SocketListener)
    {
        bReceive = false;
        SocketListener->Stop();
    }

    if (SocketListenerThread)
    {
        SocketListenerThread->WaitForCompletion();
        delete SocketListenerThread;
        SocketListenerThread = nullptr;
    }

    if (ServerSocket)
    {
        ServerSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ServerSocket);
        ServerSocket = nullptr;
    }

    if (ClientSocket)
    {
        ClientSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ClientSocket);
        ClientSocket = nullptr;
    }
}

void URuntimeProcessManager::DestoryProcess()
{
    if (ProcessHandle.IsValid())
    {
        FPlatformProcess::TerminateProc(ProcessHandle);
        ProcessHandle.Reset();
    }
}

void URuntimeProcessManager::Init(int32 _SocketPort, bool _IsIndependentProcess, const FString& _Url, const FString& _Params, const FString& _SocketName)
{
    SocketPort = _SocketPort;

    Url = _Url;
    Params = _Params;

    SocketName = _SocketName;

    if (!_IsIndependentProcess)
    {
        CreateSocketServer();
    }
    else
    {
        CreateProcess();
    }
}

void URuntimeProcessManager::AcceptConnection()
{
    bool bHasPendingConnection = false;
    while (ServerSocket)
    {
        if (ServerSocket->HasPendingConnection(bHasPendingConnection) && bHasPendingConnection)
        {
            TSharedRef<FInternetAddr> ClientAddress = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
            ClientSocket = ServerSocket->Accept(*ClientAddress, TEXT("RuntimeProcessClient"));
            if (ClientSocket)
            {
                ServerSocket->Close();
                ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ServerSocket);
                ServerSocket = nullptr;

                bReceive = true;

                OnProcessConnected.Broadcast(); // 通知进程已连接
                
                break; // 只接受一个连接
            }
        }

        FPlatformProcess::Sleep(0.01f); // 避免繁忙等待
    }
}
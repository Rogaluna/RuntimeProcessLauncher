// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RuntimeProcessManager.generated.h"

class FSocket;
class FSocketListener;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnProcessConnected);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageReceived, const FString&, Message);

/**
 * 
 */
UCLASS(BlueprintType)
class RUNTIMEPROCESSLAUNCHER_API URuntimeProcessManager : public UObject
{
	GENERATED_BODY()
	
    // Delegate
public:
    UPROPERTY(BlueprintAssignable, Category = "委托")
    FOnProcessConnected OnProcessConnected;

    UPROPERTY(BlueprintAssignable, Category = "委托")
    FOnMessageReceived OnMessageReceived;

    // 构造函数
public:
    URuntimeProcessManager();
    virtual ~URuntimeProcessManager();

    // 属性
protected:
    FProcHandle ProcessHandle;

    FSocketListener* SocketListener;
    FRunnableThread* SocketListenerThread;

    FSocket* ServerSocket;
    FSocket* ClientSocket;

    FString SocketName;
    int32 SocketPort;

    FString Url;
    FString Params;

    uint8 bReceive : 1;

    // operate
public:
    bool CreateSocketServer();
    bool CreateProcess();
    
public:
    UFUNCTION(BlueprintCallable, DisplayName="发送消息（字符串）")
    bool SendMessageToClient_String(const FString& Message);

    UFUNCTION(BlueprintCallable, DisplayName="发送消息（字节）")
    bool SendMessageToClient_Byte(TArray<uint8> Message);

    UFUNCTION(BlueprintCallable, DisplayName="接受消息")
    void ReceiveMessageFromClient();

public:
    void DestorySocketServer();
    void DestoryProcess();

    // 辅助函数
public:

    void Init(int32 _SocketPort, bool _IsIndependentProcess, const FString& _Url, const FString& _Params, const FString& _SocketName);

    void AcceptConnection();
};
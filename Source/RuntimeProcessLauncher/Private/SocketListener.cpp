// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketListener.h"
#include "SocketSubsystem.h"
#include "RuntimeProcessManager.h"

FSocketListener::FSocketListener(URuntimeProcessManager* InProcManager) :
    ProcManager(InProcManager)
{
}

FSocketListener::~FSocketListener()
{
}

uint32 FSocketListener::Run()
{
	ProcManager->CreateProcess();
	ProcManager->AcceptConnection();
	ProcManager->ReceiveMessageFromClient();
    return 0;
}
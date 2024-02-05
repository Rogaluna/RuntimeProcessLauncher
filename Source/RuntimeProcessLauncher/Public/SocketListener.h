// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FSocket;

class FSocketListener : public FRunnable
{
public:
    FSocketListener(URuntimeProcessManager*InProcManager);
    virtual ~FSocketListener();

    virtual uint32 Run() override;

private:
    URuntimeProcessManager* ProcManager;
};

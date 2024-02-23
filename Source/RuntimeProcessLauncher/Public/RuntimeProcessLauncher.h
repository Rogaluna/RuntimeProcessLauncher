// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeProcessLauncher.generated.h"

class URuntimeProcessManager;

class FRuntimeProcessLauncherModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

UCLASS()
class RUNTIMEPROCESSLAUNCHER_API URuntimeProcessLauncher : public UObject
{
    GENERATED_BODY()

public:
    static URuntimeProcessLauncher& Get();

protected:
    static URuntimeProcessLauncher* Instance;
    static FCriticalSection InstanceLock;

    // 构造函数
protected:
    URuntimeProcessLauncher();
    ~URuntimeProcessLauncher();

public:
    URuntimeProcessManager* CreateProcessManager(int32 Port, bool IsIndependent, const FString& Url, const FString& Params);
    void DestroyProcessManager(URuntimeProcessManager* ProcessManager);

protected:
    TArray<URuntimeProcessManager*> ProcessManagers;
};

UCLASS()
class RUNTIMEPROCESSLAUNCHER_API URuntimeProcessBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "运行时进程构造器", DisplayName = "创建进程")
    static URuntimeProcessManager* CreateProcessManager(int32 Port, bool IsIndependent, FString Url, FString Params);

    UFUNCTION(BlueprintCallable, Category = "运行时进程构造器", DisplayName = "销毁进程")
    static void DestroyProcessManager(URuntimeProcessManager* ProcessManager);
};
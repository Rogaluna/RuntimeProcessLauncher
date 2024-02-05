// Copyright Epic Games, Inc. All Rights Reserved.

#include "RuntimeProcessLauncher.h"
#include "RuntimeProcessManager.h"

#define LOCTEXT_NAMESPACE "FRuntimeProcessLauncherModule"

void FRuntimeProcessLauncherModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FRuntimeProcessLauncherModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRuntimeProcessLauncherModule, RuntimeProcessLauncher)

URuntimeProcessLauncher* URuntimeProcessLauncher::Instance = nullptr;
FCriticalSection URuntimeProcessLauncher::InstanceLock;

URuntimeProcessLauncher& URuntimeProcessLauncher::Get()
{
    FScopeLock Lock(&InstanceLock);

    if (!Instance)
    {
        Instance = NewObject<URuntimeProcessLauncher>();
        Instance->AddToRoot(); // 防止被垃圾回收
    }

    return *Instance;
}

URuntimeProcessLauncher::URuntimeProcessLauncher()
{

}

URuntimeProcessManager* URuntimeProcessLauncher::CreateProcessManager(int32 Port, bool IsIndependent, const FString& Url, const FString& Params)
{
    FScopeLock Lock(&ProcessManagersLock);

    URuntimeProcessManager* NewManager = NewObject<URuntimeProcessManager>();
    NewManager->Init(Port, IsIndependent, Url, Params, L"NewSocketServer");
    ProcessManagers.Add(NewManager);
    return NewManager;
}

void URuntimeProcessLauncher::DestroyProcessManager(URuntimeProcessManager* ProcessManager)
{
    FScopeLock Lock(&ProcessManagersLock);

    if (ProcessManager && ProcessManagers.Contains(ProcessManager))
    {
        ProcessManagers.Remove(ProcessManager);
        ProcessManager->ConditionalBeginDestroy();
    }
}

URuntimeProcessManager* URuntimeProcessBlueprintFunctionLibrary::CreateProcessManager(int32 Port, bool IsIndependent, FString Url, FString Params)
{
    return URuntimeProcessLauncher::Get().CreateProcessManager(Port, IsIndependent, Url, Params);
}

void URuntimeProcessBlueprintFunctionLibrary::DestroyProcessManager(URuntimeProcessManager* ProcessManager)
{
    URuntimeProcessLauncher::Get().DestroyProcessManager(ProcessManager);
}
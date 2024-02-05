// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeProcessLauncher/Public/RuntimeProcessManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeProcessManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RUNTIMEPROCESSLAUNCHER_API UClass* Z_Construct_UClass_URuntimeProcessManager();
	RUNTIMEPROCESSLAUNCHER_API UClass* Z_Construct_UClass_URuntimeProcessManager_NoRegister();
	RUNTIMEPROCESSLAUNCHER_API UFunction* Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature();
	RUNTIMEPROCESSLAUNCHER_API UFunction* Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeProcessLauncher();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeProcessLauncher, nullptr, "OnProcessConnected__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProcessConnected_DelegateWrapper(const FMulticastScriptDelegate& OnProcessConnected)
{
	OnProcessConnected.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics
	{
		struct _Script_RuntimeProcessLauncher_eventOnMessageReceived_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RuntimeProcessLauncher_eventOnMessageReceived_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeProcessLauncher, nullptr, "OnMessageReceived__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::_Script_RuntimeProcessLauncher_eventOnMessageReceived_Parms), Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMessageReceived, const FString& Message)
{
	struct _Script_RuntimeProcessLauncher_eventOnMessageReceived_Parms
	{
		FString Message;
	};
	_Script_RuntimeProcessLauncher_eventOnMessageReceived_Parms Parms;
	Parms.Message=Message;
	OnMessageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URuntimeProcessManager::execReceiveMessageFromClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveMessageFromClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeProcessManager::execSendMessageToClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessageToClient(Z_Param_Message);
		P_NATIVE_END;
	}
	void URuntimeProcessManager::StaticRegisterNativesURuntimeProcessManager()
	{
		UClass* Class = URuntimeProcessManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveMessageFromClient", &URuntimeProcessManager::execReceiveMessageFromClient },
			{ "SendMessageToClient", &URuntimeProcessManager::execSendMessageToClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe6\x8e\xa5\xe5\x8f\x97\xe6\xb6\x88\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeProcessManager, nullptr, "ReceiveMessageFromClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics
	{
		struct RuntimeProcessManager_eventSendMessageToClient_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeProcessManager_eventSendMessageToClient_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeProcessManager_eventSendMessageToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeProcessManager_eventSendMessageToClient_Parms), &Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x8f\x91\xe9\x80\x81\xe6\xb6\x88\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeProcessManager, nullptr, "SendMessageToClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::RuntimeProcessManager_eventSendMessageToClient_Parms), Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeProcessManager);
	UClass* Z_Construct_UClass_URuntimeProcessManager_NoRegister()
	{
		return URuntimeProcessManager::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeProcessManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProcessConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeProcessManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeProcessLauncher,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeProcessManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeProcessManager_ReceiveMessageFromClient, "ReceiveMessageFromClient" }, // 1916583315
		{ &Z_Construct_UFunction_URuntimeProcessManager_SendMessageToClient, "SendMessageToClient" }, // 36605555
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeProcessManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RuntimeProcessManager.h" },
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnProcessConnected_MetaData[] = {
		{ "Category", "\xe5\xa7\x94\xe6\x89\x98" },
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnProcessConnected = { "OnProcessConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeProcessManager, OnProcessConnected), Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnProcessConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnProcessConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnProcessConnected_MetaData)) }; // 21813245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "Category", "\xe5\xa7\x94\xe6\x89\x98" },
		{ "ModuleRelativePath", "Public/RuntimeProcessManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeProcessManager, OnMessageReceived), Z_Construct_UDelegateFunction_RuntimeProcessLauncher_OnMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnMessageReceived_MetaData)) }; // 2212280580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeProcessManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnProcessConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeProcessManager_Statics::NewProp_OnMessageReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeProcessManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeProcessManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeProcessManager_Statics::ClassParams = {
		&URuntimeProcessManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeProcessManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeProcessManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeProcessManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeProcessManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeProcessManager()
	{
		if (!Z_Registration_Info_UClass_URuntimeProcessManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeProcessManager.OuterSingleton, Z_Construct_UClass_URuntimeProcessManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeProcessManager.OuterSingleton;
	}
	template<> RUNTIMEPROCESSLAUNCHER_API UClass* StaticClass<URuntimeProcessManager>()
	{
		return URuntimeProcessManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeProcessManager);
	struct Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_RuntimeProcessLauncher_Source_RuntimeProcessLauncher_Public_RuntimeProcessManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_RuntimeProcessLauncher_Source_RuntimeProcessLauncher_Public_RuntimeProcessManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeProcessManager, URuntimeProcessManager::StaticClass, TEXT("URuntimeProcessManager"), &Z_Registration_Info_UClass_URuntimeProcessManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeProcessManager), 1529426940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_RuntimeProcessLauncher_Source_RuntimeProcessLauncher_Public_RuntimeProcessManager_h_4178743580(TEXT("/Script/RuntimeProcessLauncher"),
		Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_RuntimeProcessLauncher_Source_RuntimeProcessLauncher_Public_RuntimeProcessManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_XediaDocument_Project_Unreal_5_2_PluginDev_Plugins_RuntimeProcessLauncher_Source_RuntimeProcessLauncher_Public_RuntimeProcessManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

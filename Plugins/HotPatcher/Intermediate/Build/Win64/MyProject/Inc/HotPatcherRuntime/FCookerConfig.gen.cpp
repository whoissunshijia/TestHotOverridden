// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FCookerConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCookerConfig() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCookerConfig();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
// End Cross Module References
class UScriptStruct* FCookerConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FCookerConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCookerConfig, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("CookerConfig"), sizeof(FCookerConfig), Get_Z_Construct_UScriptStruct_FCookerConfig_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FCookerConfig>()
{
	return FCookerConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCookerConfig(FCookerConfig::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("CookerConfig"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFCookerConfig
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFCookerConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CookerConfig")),new UScriptStruct::TCppStructOps<FCookerConfig>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFCookerConfig;
	struct Z_Construct_UScriptStruct_FCookerConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCookerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCookerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCookerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCookerConfig>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCookerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"CookerConfig",
		sizeof(FCookerConfig),
		alignof(FCookerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCookerConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCookerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCookerConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCookerConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CookerConfig"), sizeof(FCookerConfig), Get_Z_Construct_UScriptStruct_FCookerConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCookerConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCookerConfig_Hash() { return 1332795778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

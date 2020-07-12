// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FPakVersion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPakVersion() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPakVersion();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
// End Cross Module References
class UScriptStruct* FPakVersion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPakVersion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPakVersion, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("PakVersion"), sizeof(FPakVersion), Get_Z_Construct_UScriptStruct_FPakVersion_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FPakVersion>()
{
	return FPakVersion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPakVersion(FPakVersion::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("PakVersion"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakVersion
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakVersion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PakVersion")),new UScriptStruct::TCppStructOps<FPakVersion>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakVersion;
	struct Z_Construct_UScriptStruct_FPakVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheckCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Date;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseVersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseVersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakVersion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPakVersion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPakVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPakVersion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_CheckCode_MetaData[] = {
		{ "Category", "PakVersion" },
		{ "ModuleRelativePath", "Public/FPakVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_CheckCode = { "CheckCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakVersion, CheckCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_CheckCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_CheckCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "PakVersion" },
		{ "ModuleRelativePath", "Public/FPakVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakVersion, Date), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_Date_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_Date_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_BaseVersionId_MetaData[] = {
		{ "Category", "PakVersion" },
		{ "ModuleRelativePath", "Public/FPakVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_BaseVersionId = { "BaseVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakVersion, BaseVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_BaseVersionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_BaseVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_VersionId_MetaData[] = {
		{ "Category", "PakVersion" },
		{ "ModuleRelativePath", "Public/FPakVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_VersionId = { "VersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakVersion, VersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_VersionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_VersionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPakVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_CheckCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_Date,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_BaseVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakVersion_Statics::NewProp_VersionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPakVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"PakVersion",
		sizeof(FPakVersion),
		alignof(FPakVersion),
		Z_Construct_UScriptStruct_FPakVersion_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPakVersion_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPakVersion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPakVersion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PakVersion"), sizeof(FPakVersion), Get_Z_Construct_UScriptStruct_FPakVersion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPakVersion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPakVersion_Hash() { return 1877332439U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

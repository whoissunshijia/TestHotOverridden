// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FPakFileInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPakFileInfo() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPakFileInfo();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
// End Cross Module References
class UScriptStruct* FPakFileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPakFileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPakFileInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("PakFileInfo"), sizeof(FPakFileInfo), Get_Z_Construct_UScriptStruct_FPakFileInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FPakFileInfo>()
{
	return FPakFileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPakFileInfo(FPakFileInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("PakFileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakFileInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakFileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PakFileInfo")),new UScriptStruct::TCppStructOps<FPakFileInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakFileInfo;
	struct Z_Construct_UScriptStruct_FPakFileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakFileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPakFileInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPakFileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileSize_MetaData[] = {
		{ "Category", "PakFileInfo" },
		{ "ModuleRelativePath", "Public/FPakFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakFileInfo, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_Hash_MetaData[] = {
		{ "Category", "PakFileInfo" },
		{ "ModuleRelativePath", "Public/FPakFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakFileInfo, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_Hash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "PakFileInfo" },
		{ "ModuleRelativePath", "Public/FPakFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakFileInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPakFileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakFileInfo_Statics::NewProp_FileName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPakFileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"PakFileInfo",
		sizeof(FPakFileInfo),
		alignof(FPakFileInfo),
		Z_Construct_UScriptStruct_FPakFileInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPakFileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPakFileInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakFileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPakFileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPakFileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PakFileInfo"), sizeof(FPakFileInfo), Get_Z_Construct_UScriptStruct_FPakFileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPakFileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPakFileInfo_Hash() { return 715423460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

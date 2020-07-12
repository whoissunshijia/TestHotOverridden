// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FExternAssetFileInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFExternAssetFileInfo() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
class UScriptStruct* FExternAssetFileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FExternAssetFileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternAssetFileInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ExternAssetFileInfo"), sizeof(FExternAssetFileInfo), Get_Z_Construct_UScriptStruct_FExternAssetFileInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FExternAssetFileInfo>()
{
	return FExternAssetFileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternAssetFileInfo(FExternAssetFileInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ExternAssetFileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternAssetFileInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternAssetFileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternAssetFileInfo")),new UScriptStruct::TCppStructOps<FExternAssetFileInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternAssetFileInfo;
	struct Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FExternAssetFileInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternAssetFileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FileHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/FExternAssetFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FileHash = { "FileHash", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternAssetFileInfo, FileHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FileHash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FileHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_MountPath_MetaData[] = {
		{ "Category", "ExternAssetFileInfo" },
		{ "ModuleRelativePath", "Public/FExternAssetFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_MountPath = { "MountPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternAssetFileInfo, MountPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_MountPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_MountPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "BaseVersion" },
		{ "ModuleRelativePath", "Public/FExternAssetFileInfo.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternAssetFileInfo, FilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FileHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_MountPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::NewProp_FilePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ExternAssetFileInfo",
		sizeof(FExternAssetFileInfo),
		alignof(FExternAssetFileInfo),
		Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternAssetFileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternAssetFileInfo"), sizeof(FExternAssetFileInfo), Get_Z_Construct_UScriptStruct_FExternAssetFileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternAssetFileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternAssetFileInfo_Hash() { return 43523815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FExternDirectoryInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFExternDirectoryInfo() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternDirectoryInfo();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
class UScriptStruct* FExternDirectoryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FExternDirectoryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternDirectoryInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ExternDirectoryInfo"), sizeof(FExternDirectoryInfo), Get_Z_Construct_UScriptStruct_FExternDirectoryInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FExternDirectoryInfo>()
{
	return FExternDirectoryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternDirectoryInfo(FExternDirectoryInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ExternDirectoryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternDirectoryInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternDirectoryInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternDirectoryInfo")),new UScriptStruct::TCppStructOps<FExternDirectoryInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFExternDirectoryInfo;
	struct Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FExternDirectoryInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternDirectoryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_MountPoint_MetaData[] = {
		{ "Category", "ExternDirectoryInfo" },
		{ "ModuleRelativePath", "Public/FExternDirectoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternDirectoryInfo, MountPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_MountPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_MountPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_DirectoryPath_MetaData[] = {
		{ "Category", "BaseVersion" },
		{ "ModuleRelativePath", "Public/FExternDirectoryInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExternDirectoryInfo, DirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_DirectoryPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_DirectoryPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_MountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::NewProp_DirectoryPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ExternDirectoryInfo",
		sizeof(FExternDirectoryInfo),
		alignof(FExternDirectoryInfo),
		Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternDirectoryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternDirectoryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternDirectoryInfo"), sizeof(FExternDirectoryInfo), Get_Z_Construct_UScriptStruct_FExternDirectoryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternDirectoryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternDirectoryInfo_Hash() { return 3602417757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

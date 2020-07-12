// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FAssetRelatedInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAssetRelatedInfo() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRelatedInfo();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDetail();
// End Cross Module References
class UScriptStruct* FAssetRelatedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAssetRelatedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetRelatedInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("AssetRelatedInfo"), sizeof(FAssetRelatedInfo), Get_Z_Construct_UScriptStruct_FAssetRelatedInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FAssetRelatedInfo>()
{
	return FAssetRelatedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetRelatedInfo(FAssetRelatedInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("AssetRelatedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFAssetRelatedInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFAssetRelatedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetRelatedInfo")),new UScriptStruct::TCppStructOps<FAssetRelatedInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFAssetRelatedInfo;
	struct Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDependency_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetDependency;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetDependency_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetReference;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetReference_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FAssetRelatedInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetRelatedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency_MetaData[] = {
		{ "Category", "AssetRelatedInfo" },
		{ "ModuleRelativePath", "Public/FAssetRelatedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency = { "AssetDependency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRelatedInfo, AssetDependency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency_Inner = { "AssetDependency", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference_MetaData[] = {
		{ "Category", "AssetRelatedInfo" },
		{ "ModuleRelativePath", "Public/FAssetRelatedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference = { "AssetReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRelatedInfo, AssetReference), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference_Inner = { "AssetReference", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "AssetRelatedInfo" },
		{ "ModuleRelativePath", "Public/FAssetRelatedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetRelatedInfo, Asset), Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_Asset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetDependency_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_AssetReference_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"AssetRelatedInfo",
		sizeof(FAssetRelatedInfo),
		alignof(FAssetRelatedInfo),
		Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetRelatedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetRelatedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetRelatedInfo"), sizeof(FAssetRelatedInfo), Get_Z_Construct_UScriptStruct_FAssetRelatedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetRelatedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetRelatedInfo_Hash() { return 3683797145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

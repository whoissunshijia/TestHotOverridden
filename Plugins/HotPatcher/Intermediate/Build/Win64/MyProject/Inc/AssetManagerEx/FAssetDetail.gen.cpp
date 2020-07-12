// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetManagerEx/Public/Struct/AssetManager/FAssetDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAssetDetail() {}
// Cross Module References
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDetail();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEx();
// End Cross Module References
class UScriptStruct* FAssetDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETMANAGEREX_API uint32 Get_Z_Construct_UScriptStruct_FAssetDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetDetail, Z_Construct_UPackage__Script_AssetManagerEx(), TEXT("AssetDetail"), sizeof(FAssetDetail), Get_Z_Construct_UScriptStruct_FAssetDetail_Hash());
	}
	return Singleton;
}
template<> ASSETMANAGEREX_API UScriptStruct* StaticStruct<FAssetDetail>()
{
	return FAssetDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetDetail(FAssetDetail::StaticStruct, TEXT("/Script/AssetManagerEx"), TEXT("AssetDetail"), false, nullptr, nullptr);
static struct FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDetail
{
	FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDetail()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetDetail")),new UScriptStruct::TCppStructOps<FAssetDetail>);
	}
} ScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDetail;
	struct Z_Construct_UScriptStruct_FAssetDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAssetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mAssetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDetail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mGuid_MetaData[] = {
		{ "Category", "AssetDetail" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mGuid = { "mGuid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDetail, mGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mAssetType_MetaData[] = {
		{ "Category", "AssetDetail" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mAssetType = { "mAssetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDetail, mAssetType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mAssetType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mAssetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mPackagePath_MetaData[] = {
		{ "Category", "AssetDetail" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mPackagePath = { "mPackagePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDetail, mPackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mAssetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDetail_Statics::NewProp_mPackagePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEx,
		nullptr,
		&NewStructOps,
		"AssetDetail",
		sizeof(FAssetDetail),
		alignof(FAssetDetail),
		Z_Construct_UScriptStruct_FAssetDetail_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDetail_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetManagerEx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetDetail"), sizeof(FAssetDetail), Get_Z_Construct_UScriptStruct_FAssetDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetDetail_Hash() { return 418978378U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

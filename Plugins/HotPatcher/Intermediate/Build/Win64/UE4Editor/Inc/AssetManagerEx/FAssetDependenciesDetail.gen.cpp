// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetManagerEx/Public/Struct/AssetManager/FAssetDependenciesDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAssetDependenciesDetail() {}
// Cross Module References
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesDetail();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEx();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDetail();
// End Cross Module References
class UScriptStruct* FAssetDependenciesDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETMANAGEREX_API uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetDependenciesDetail, Z_Construct_UPackage__Script_AssetManagerEx(), TEXT("AssetDependenciesDetail"), sizeof(FAssetDependenciesDetail), Get_Z_Construct_UScriptStruct_FAssetDependenciesDetail_Hash());
	}
	return Singleton;
}
template<> ASSETMANAGEREX_API UScriptStruct* StaticStruct<FAssetDependenciesDetail>()
{
	return FAssetDependenciesDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetDependenciesDetail(FAssetDependenciesDetail::StaticStruct, TEXT("/Script/AssetManagerEx"), TEXT("AssetDependenciesDetail"), false, nullptr, nullptr);
static struct FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesDetail
{
	FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesDetail()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetDependenciesDetail")),new UScriptStruct::TCppStructOps<FAssetDependenciesDetail>);
	}
} ScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesDetail;
	struct Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDependAssetDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mDependAssetDetails;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mDependAssetDetails_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDependAssetDetails_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mModuleCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mModuleCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDependenciesDetail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetDependenciesDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_MetaData[] = {
		{ "Category", "AssetDependenciesDetail" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDependenciesDetail.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       TArray<FString> mDependAsset;" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails = { "mDependAssetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDependenciesDetail, mDependAssetDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_Key_KeyProp = { "mDependAssetDetails_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_ValueProp = { "mDependAssetDetails", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mModuleCategory_MetaData[] = {
		{ "Category", "AssetDependenciesDetail" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDependenciesDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mModuleCategory = { "mModuleCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDependenciesDetail, mModuleCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mModuleCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mModuleCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mDependAssetDetails_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::NewProp_mModuleCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEx,
		nullptr,
		&NewStructOps,
		"AssetDependenciesDetail",
		sizeof(FAssetDependenciesDetail),
		alignof(FAssetDependenciesDetail),
		Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetManagerEx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetDependenciesDetail"), sizeof(FAssetDependenciesDetail), Get_Z_Construct_UScriptStruct_FAssetDependenciesDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetDependenciesDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesDetail_Hash() { return 3147497471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetManagerEx/Public/Struct/AssetManager/FAssetDependenciesInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAssetDependenciesInfo() {}
// Cross Module References
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesInfo();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEx();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesDetail();
// End Cross Module References
class UScriptStruct* FAssetDependenciesInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETMANAGEREX_API uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetDependenciesInfo, Z_Construct_UPackage__Script_AssetManagerEx(), TEXT("AssetDependenciesInfo"), sizeof(FAssetDependenciesInfo), Get_Z_Construct_UScriptStruct_FAssetDependenciesInfo_Hash());
	}
	return Singleton;
}
template<> ASSETMANAGEREX_API UScriptStruct* StaticStruct<FAssetDependenciesInfo>()
{
	return FAssetDependenciesInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetDependenciesInfo(FAssetDependenciesInfo::StaticStruct, TEXT("/Script/AssetManagerEx"), TEXT("AssetDependenciesInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesInfo
{
	FScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetDependenciesInfo")),new UScriptStruct::TCppStructOps<FAssetDependenciesInfo>);
	}
} ScriptStruct_AssetManagerEx_StaticRegisterNativesFAssetDependenciesInfo;
	struct Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mDependencies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mDependencies_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDependencies_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDependenciesInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetDependenciesInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_MetaData[] = {
		{ "Category", "AssetDependenciesInfo" },
		{ "ModuleRelativePath", "Public/Struct/AssetManager/FAssetDependenciesInfo.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nFString mAssetRef;" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies = { "mDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetDependenciesInfo, mDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_Key_KeyProp = { "mDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_ValueProp = { "mDependencies", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAssetDependenciesDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::NewProp_mDependencies_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEx,
		nullptr,
		&NewStructOps,
		"AssetDependenciesInfo",
		sizeof(FAssetDependenciesInfo),
		alignof(FAssetDependenciesInfo),
		Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetManagerEx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetDependenciesInfo"), sizeof(FAssetDependenciesInfo), Get_Z_Construct_UScriptStruct_FAssetDependenciesInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetDependenciesInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetDependenciesInfo_Hash() { return 740148975U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FPatcherSpecifyAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPatcherSpecifyAsset() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FPatcherSpecifyAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatcherSpecifyAsset, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("PatcherSpecifyAsset"), sizeof(FPatcherSpecifyAsset), Get_Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FPatcherSpecifyAsset>()
{
	return FPatcherSpecifyAsset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatcherSpecifyAsset(FPatcherSpecifyAsset::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("PatcherSpecifyAsset"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatcherSpecifyAsset
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatcherSpecifyAsset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatcherSpecifyAsset")),new UScriptStruct::TCppStructOps<FPatcherSpecifyAsset>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatcherSpecifyAsset;
	struct Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalysisAssetDependencies_MetaData[];
#endif
		static void NewProp_bAnalysisAssetDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalysisAssetDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPatcherSpecifyAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatcherSpecifyAsset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "Category", "PatcherSpecifyAsset" },
		{ "EditCondition", "bAnalysisAssetDependencies" },
		{ "ModuleRelativePath", "Public/FPatcherSpecifyAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatcherSpecifyAsset, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies_MetaData[] = {
		{ "Category", "PatcherSpecifyAsset" },
		{ "ModuleRelativePath", "Public/FPatcherSpecifyAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies_SetBit(void* Obj)
	{
		((FPatcherSpecifyAsset*)Obj)->bAnalysisAssetDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies = { "bAnalysisAssetDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPatcherSpecifyAsset), &Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "PatcherSpecifyAsset" },
		{ "ModuleRelativePath", "Public/FPatcherSpecifyAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPatcherSpecifyAsset, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_Asset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_bAnalysisAssetDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"PatcherSpecifyAsset",
		sizeof(FPatcherSpecifyAsset),
		alignof(FPatcherSpecifyAsset),
		Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatcherSpecifyAsset"), sizeof(FPatcherSpecifyAsset), Get_Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatcherSpecifyAsset_Hash() { return 154447317U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

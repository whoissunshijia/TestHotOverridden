// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FHotPatcherVersion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFHotPatcherVersion() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHotPatcherVersion();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset();
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
// End Cross Module References
class UScriptStruct* FHotPatcherVersion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHotPatcherVersion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHotPatcherVersion, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("HotPatcherVersion"), sizeof(FHotPatcherVersion), Get_Z_Construct_UScriptStruct_FHotPatcherVersion_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FHotPatcherVersion>()
{
	return FHotPatcherVersion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHotPatcherVersion(FHotPatcherVersion::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("HotPatcherVersion"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFHotPatcherVersion
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFHotPatcherVersion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HotPatcherVersion")),new UScriptStruct::TCppStructOps<FHotPatcherVersion>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFHotPatcherVersion;
	struct Z_Construct_UScriptStruct_FHotPatcherVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExternalFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalFiles_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalFiles_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSpecifyAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeSpecifyAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeSpecifyAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeHasRefAssetsOnly_MetaData[];
#endif
		static void NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeHasRefAssetsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreFilter;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IgnoreFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeFilter;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncludeFilter_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHotPatcherVersion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles = { "ExternalFiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, ExternalFiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_Key_KeyProp = { "ExternalFiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_ValueProp = { "ExternalFiles", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetInfo_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, AssetInfo), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, IncludeSpecifyAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets_Inner = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatcherSpecifyAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj)
	{
		((FHotPatcherVersion*)Obj)->bIncludeHasRefAssetsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly = { "bIncludeHasRefAssetsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHotPatcherVersion), &Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter = { "IgnoreFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, IgnoreFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter_Inner = { "IgnoreFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter = { "IncludeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, IncludeFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter_Inner = { "IncludeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, Date), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_Date_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_Date_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_BaseVersionId_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_BaseVersionId = { "BaseVersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, BaseVersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_BaseVersionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_BaseVersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_VersionId_MetaData[] = {
		{ "Category", "HotPatcherVersion" },
		{ "ModuleRelativePath", "Public/FHotPatcherVersion.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_VersionId = { "VersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotPatcherVersion, VersionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_VersionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_VersionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_ExternalFiles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeSpecifyAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_bIncludeHasRefAssetsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IgnoreFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_IncludeFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_Date,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_BaseVersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::NewProp_VersionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"HotPatcherVersion",
		sizeof(FHotPatcherVersion),
		alignof(FHotPatcherVersion),
		Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHotPatcherVersion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHotPatcherVersion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HotPatcherVersion"), sizeof(FHotPatcherVersion), Get_Z_Construct_UScriptStruct_FHotPatcherVersion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHotPatcherVersion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHotPatcherVersion_Hash() { return 1153668940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherEditor/Public/CreatePatch/ExportReleaseSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportReleaseSettings() {}
// Cross Module References
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UExportReleaseSettings_NoRegister();
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UExportReleaseSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HotPatcherEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternDirectoryInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset();
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	void UExportReleaseSettings::StaticRegisterNativesUExportReleaseSettings()
	{
	}
	UClass* Z_Construct_UClass_UExportReleaseSettings_NoRegister()
	{
		return UExportReleaseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UExportReleaseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveReleaseConfig_MetaData[];
#endif
		static void NewProp_bSaveReleaseConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveReleaseConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveAssetRelatedInfo_MetaData[];
#endif
		static void NewProp_bSaveAssetRelatedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveAssetRelatedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddExternDirectoryToPak_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddExternDirectoryToPak;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddExternDirectoryToPak_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddExternFileToPak_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddExternFileToPak;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddExternFileToPak_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSpecifyAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeSpecifyAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeSpecifyAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeHasRefAssetsOnly_MetaData[];
#endif
		static void NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeHasRefAssetsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalysisFilterDependencies_MetaData[];
#endif
		static void NewProp_bAnalysisFilterDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalysisFilterDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetIgnoreFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetIgnoreFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetIgnoreFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetIncludeFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetIncludeFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetIncludeFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakListFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PakListFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByPakList_MetaData[];
#endif
		static void NewProp_ByPakList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ByPakList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportReleaseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreatePatch/ExportReleaseSettings.h" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_SavePath_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, SavePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_SavePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_SavePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig_SetBit(void* Obj)
	{
		((UExportReleaseSettings*)Obj)->bSaveReleaseConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig = { "bSaveReleaseConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportReleaseSettings), &Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo_SetBit(void* Obj)
	{
		((UExportReleaseSettings*)Obj)->bSaveAssetRelatedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo = { "bSaveAssetRelatedInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportReleaseSettings), &Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData[] = {
		{ "Category", "ReleaseSetting|Extern Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, AddExternDirectoryToPak), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak_Inner = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternDirectoryInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak_MetaData[] = {
		{ "Category", "ReleaseSetting|Extern Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, AddExternFileToPak), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak_Inner = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData[] = {
		{ "Category", "ReleaseSetting|Specify Assets" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, IncludeSpecifyAssets), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets_Inner = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatcherSpecifyAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData[] = {
		{ "Category", "ReleaseSetting|Asset Filters" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj)
	{
		((UExportReleaseSettings*)Obj)->bIncludeHasRefAssetsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly = { "bIncludeHasRefAssetsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportReleaseSettings), &Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "Category", "ReleaseSetting|Asset Filters" },
		{ "EditCondition", "bAnalysisFilterDependencies" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData[] = {
		{ "Category", "ReleaseSetting|Asset Filters" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies_SetBit(void* Obj)
	{
		((UExportReleaseSettings*)Obj)->bAnalysisFilterDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies = { "bAnalysisFilterDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportReleaseSettings), &Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters_MetaData[] = {
		{ "Category", "ReleaseSetting|Asset Filters" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, AssetIgnoreFilters), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters_Inner = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters_MetaData[] = {
		{ "Category", "ReleaseSetting|Asset Filters" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "You can use copied asset string reference here, e.g. World'/Game/NewMap.NewMap'" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, AssetIncludeFilters), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters_Inner = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_PakListFile_MetaData[] = {
		{ "Category", "Version" },
		{ "EditCondition", "ByPakList" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_PakListFile = { "PakListFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, PakListFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_PakListFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_PakListFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList_SetBit(void* Obj)
	{
		((UExportReleaseSettings*)Obj)->ByPakList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList = { "ByPakList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportReleaseSettings), &Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_VersionId_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportReleaseSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_VersionId = { "VersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportReleaseSettings, VersionId), METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_VersionId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_VersionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportReleaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveReleaseConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bSaveAssetRelatedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternDirectoryToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AddExternFileToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_IncludeSpecifyAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bIncludeHasRefAssetsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_bAnalysisFilterDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIgnoreFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_AssetIncludeFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_PakListFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_ByPakList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportReleaseSettings_Statics::NewProp_VersionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportReleaseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportReleaseSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExportReleaseSettings_Statics::ClassParams = {
		&UExportReleaseSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExportReleaseSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportReleaseSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExportReleaseSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportReleaseSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExportReleaseSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExportReleaseSettings, 1508502619);
	template<> HOTPATCHEREDITOR_API UClass* StaticClass<UExportReleaseSettings>()
	{
		return UExportReleaseSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExportReleaseSettings(Z_Construct_UClass_UExportReleaseSettings, &UExportReleaseSettings::StaticClass, TEXT("/Script/HotPatcherEditor"), TEXT("UExportReleaseSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportReleaseSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

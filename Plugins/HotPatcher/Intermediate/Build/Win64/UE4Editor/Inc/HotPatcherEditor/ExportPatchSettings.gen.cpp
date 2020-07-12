// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherEditor/Public/CreatePatch/ExportPatchSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportPatchSettings() {}
// Cross Module References
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UExportPatchSettings_NoRegister();
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UExportPatchSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HotPatcherEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOTPATCHERRUNTIME_API UEnum* Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FReplaceText();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternDirectoryInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset();
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	void UExportPatchSettings::StaticRegisterNativesUExportPatchSettings()
	{
	}
	UClass* Z_Construct_UClass_UExportPatchSettings_NoRegister()
	{
		return UExportPatchSettings::StaticClass();
	}
	struct Z_Construct_UClass_UExportPatchSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavePatchConfig_MetaData[];
#endif
		static void NewProp_bSavePatchConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavePatchConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveAssetRelatedInfo_MetaData[];
#endif
		static void NewProp_bSaveAssetRelatedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveAssetRelatedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSaveDiffAnalysis_MetaData[];
#endif
		static void NewProp_bSaveDiffAnalysis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveDiffAnalysis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavePakList_MetaData[];
#endif
		static void NewProp_bSavePakList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavePakList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakTargetPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PakTargetPlatforms;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PakTargetPlatforms_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PakTargetPlatforms_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealPakOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnrealPakOptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealPakOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacePakCommandTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplacePakCommandTexts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplacePakCommandTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakCommandOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PakCommandOptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakCommandOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChunkInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableChunk_MetaData[];
#endif
		static void NewProp_bEnableChunk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableChunk;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableExternFilesDiff_MetaData[];
#endif
		static void NewProp_bEnableExternFilesDiff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableExternFilesDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeProjectIni_MetaData[];
#endif
		static void NewProp_bIncludeProjectIni_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeProjectIni;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludePluginIni_MetaData[];
#endif
		static void NewProp_bIncludePluginIni_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludePluginIni;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeEngineIni_MetaData[];
#endif
		static void NewProp_bIncludeEngineIni_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeEngineIni;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeShaderBytecode_MetaData[];
#endif
		static void NewProp_bIncludeShaderBytecode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeShaderBytecode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeGlobalShaderCache_MetaData[];
#endif
		static void NewProp_bIncludeGlobalShaderCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeGlobalShaderCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeAssetRegistry_MetaData[];
#endif
		static void NewProp_bIncludeAssetRegistry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAssetRegistry;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalysisFilterDependencies_MetaData[];
#endif
		static void NewProp_bAnalysisFilterDependencies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalysisFilterDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeHasRefAssetsOnly_MetaData[];
#endif
		static void NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeHasRefAssetsOnly;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bByBaseVersion_MetaData[];
#endif
		static void NewProp_bByBaseVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bByBaseVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportPatchSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreatePatch/ExportPatchSettings.h" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_SavePath_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, SavePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_SavePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_SavePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SaveTo\", meta = (EditCondition = \"bIncludePakVersion\"))\n       bool bSavePakVersion;" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bSavePatchConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig = { "bSavePatchConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bSaveAssetRelatedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo = { "bSaveAssetRelatedInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "EditCondition", "bByBaseVersion" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bSaveDiffAnalysis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis = { "bSaveDiffAnalysis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList_MetaData[] = {
		{ "Category", "SaveTo" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bSavePakList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList = { "bSavePakList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_MetaData[] = {
		{ "Category", "Pak Options" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms = { "PakTargetPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, PakTargetPlatforms), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_Inner = { "PakTargetPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions_MetaData[] = {
		{ "Category", "Pak Options" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions = { "UnrealPakOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, UnrealPakOptions), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions_Inner = { "UnrealPakOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts_MetaData[] = {
		{ "Category", "Pak Options" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts = { "ReplacePakCommandTexts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, ReplacePakCommandTexts), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts_Inner = { "ReplacePakCommandTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReplaceText, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions_MetaData[] = {
		{ "Category", "Pak Options" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions = { "PakCommandOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, PakCommandOptions), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions_Inner = { "PakCommandOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos_MetaData[] = {
		{ "Category", "Chunk Options" },
		{ "EditCondition", "bEnableChunk" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos = { "ChunkInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, ChunkInfos), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos_Inner = { "ChunkInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChunkInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk_MetaData[] = {
		{ "Category", "Chunk Options" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bEnableChunk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk = { "bEnableChunk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData[] = {
		{ "Category", "PatchSettings|Extern Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, AddExternDirectoryToPak), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak_Inner = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternDirectoryInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak_MetaData[] = {
		{ "Category", "PatchSettings|Extern Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, AddExternFileToPak), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak_Inner = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff_MetaData[] = {
		{ "Category", "PatchSettings|Extern Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bEnableExternFilesDiff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff = { "bEnableExternFilesDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni_MetaData[] = {
		{ "Category", "PatchSettings|Ini Config Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeProjectIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni = { "bIncludeProjectIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni_MetaData[] = {
		{ "Category", "PatchSettings|Ini Config Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludePluginIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni = { "bIncludePluginIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni_MetaData[] = {
		{ "Category", "PatchSettings|Ini Config Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeEngineIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni = { "bIncludeEngineIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode_MetaData[] = {
		{ "Category", "PatchSettings|Cooked Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeShaderBytecode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode = { "bIncludeShaderBytecode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache_MetaData[] = {
		{ "Category", "PatchSettings|Cooked Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeGlobalShaderCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache = { "bIncludeGlobalShaderCache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry_MetaData[] = {
		{ "Category", "PatchSettings|Cooked Files" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeAssetRegistry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry = { "bIncludeAssetRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData[] = {
		{ "Category", "PatchSettings|Specify Assets" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, IncludeSpecifyAssets), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets_Inner = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatcherSpecifyAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "Category", "PatchSettings|Asset Filter" },
		{ "EditCondition", "bAnalysisFilterDependencies" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData[] = {
		{ "Category", "PatchSettings|Asset Filter" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bAnalysisFilterDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies = { "bAnalysisFilterDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData[] = {
		{ "Category", "PatchSettings|Asset Filter" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bIncludeHasRefAssetsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly = { "bIncludeHasRefAssetsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters_MetaData[] = {
		{ "Category", "PatchSettings|Asset Filter" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, AssetIgnoreFilters), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters_Inner = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters_MetaData[] = {
		{ "Category", "PatchSettings|Asset Filter" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, AssetIncludeFilters), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters_Inner = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_VersionId_MetaData[] = {
		{ "Category", "PatchSettings" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_VersionId = { "VersionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, VersionId), METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_VersionId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_VersionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_BaseVersion_MetaData[] = {
		{ "Category", "BaseVersion" },
		{ "EditCondition", "bByBaseVersion" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_BaseVersion = { "BaseVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportPatchSettings, BaseVersion), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_BaseVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_BaseVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion_MetaData[] = {
		{ "Category", "BaseVersion" },
		{ "ModuleRelativePath", "Public/CreatePatch/ExportPatchSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion_SetBit(void* Obj)
	{
		((UExportPatchSettings*)Obj)->bByBaseVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion = { "bByBaseVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExportPatchSettings), &Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportPatchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePatchConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveAssetRelatedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSaveDiffAnalysis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bSavePakList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakTargetPlatforms_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_UnrealPakOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ReplacePakCommandTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_PakCommandOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_ChunkInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableChunk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternDirectoryToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AddExternFileToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bEnableExternFilesDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeProjectIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludePluginIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeEngineIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeShaderBytecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeGlobalShaderCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeAssetRegistry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_IncludeSpecifyAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bAnalysisFilterDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bIncludeHasRefAssetsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIgnoreFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_AssetIncludeFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_VersionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_BaseVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportPatchSettings_Statics::NewProp_bByBaseVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportPatchSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportPatchSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExportPatchSettings_Statics::ClassParams = {
		&UExportPatchSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExportPatchSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportPatchSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExportPatchSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportPatchSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExportPatchSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExportPatchSettings, 1437004566);
	template<> HOTPATCHEREDITOR_API UClass* StaticClass<UExportPatchSettings>()
	{
		return UExportPatchSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExportPatchSettings(Z_Construct_UClass_UExportPatchSettings, &UExportPatchSettings::StaticClass, TEXT("/Script/HotPatcherEditor"), TEXT("UExportPatchSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportPatchSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

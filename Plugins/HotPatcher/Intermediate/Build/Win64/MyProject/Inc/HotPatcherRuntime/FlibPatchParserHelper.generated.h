// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPakFileInfo;
struct FExternAssetFileInfo;
struct FAssetDependenciesInfo;
struct FHotPatcherVersion;
#ifdef HOTPATCHERRUNTIME_FlibPatchParserHelper_generated_h
#error "FlibPatchParserHelper.generated.h already included, missing '#pragma once' in FlibPatchParserHelper.h"
#endif
#define HOTPATCHERRUNTIME_FlibPatchParserHelper_generated_h

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReloadShaderbytecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFlibPatchParserHelper::ReloadShaderbytecode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnabledPluginConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetEnabledPluginConfigs(Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetEngineConfigs(Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectIniFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetProjectIniFiles(Z_Param_InProjectDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIniConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSearchDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetIniConfigs(Z_Param_InSearchDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHashStringWithSHA1) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::HashStringWithSHA1(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedShaderBytecodeFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_UBOOL(Z_Param_InGalobalBytecode); \
		P_GET_UBOOL(Z_Param_InProjectBytecode); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetCookedShaderBytecodeFiles(Z_Param_InProjectAbsDir,Z_Param_InProjectName,Z_Param_InPlatformName,Z_Param_InGalobalBytecode,Z_Param_InProjectBytecode,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedAssetRegistryFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetCookedAssetRegistryFiles(Z_Param_InProjectAbsDir,Z_Param_InProjectName,Z_Param_InPlatformName,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedGlobalShaderCacheFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetCookedGlobalShaderCacheFiles(Z_Param_InProjectDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPakFileInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_STRUCT_REF(FPakFileInfo,Z_Param_Out_OutFileInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetPakFileInfo(Z_Param_InFile,Z_Param_Out_OutFileInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeDiffExternalFilesInfomationToString) \
	{ \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InAddFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InModifyFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InDeleteFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::SerializeDiffExternalFilesInfomationToString(Z_Param_Out_InAddFiles,Z_Param_Out_InModifyFiles,Z_Param_Out_InDeleteFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeDiffAssetsInfomationToString) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InAddAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InModifyAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InDeleteAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::SerializeDiffAssetsInfomationToString(Z_Param_Out_InAddAsset,Z_Param_Out_InModifyAsset,Z_Param_Out_InDeleteAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializePakFileInfoToJsonString) \
	{ \
		P_GET_STRUCT_REF(FPakFileInfo,Z_Param_Out_InFileInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutJson); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::SerializePakFileInfoToJsonString(Z_Param_Out_InFileInfo,Z_Param_Out_OutJson); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffVersionExFiles) \
	{ \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InNewVersion); \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InBaseVersion); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutAddFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutModifyFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutDeleteFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DiffVersionExFiles(Z_Param_Out_InNewVersion,Z_Param_Out_InBaseVersion,Z_Param_Out_OutAddFiles,Z_Param_Out_OutModifyFiles,Z_Param_Out_OutDeleteFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffVersionAssets) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InNewVersion); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InBaseVersion); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAddAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutModifyAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDeleteAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DiffVersionAssets(Z_Param_Out_InNewVersion,Z_Param_Out_InBaseVersion,Z_Param_Out_OutAddAsset,Z_Param_Out_OutModifyAsset,Z_Param_Out_OutDeleteAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeHotPatcherVersionFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStringContent); \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_OutVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DeserializeHotPatcherVersionFromString(Z_Param_InStringContent,Z_Param_Out_OutVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeHotPatcherVersionToString) \
	{ \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutResault); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::SerializeHotPatcherVersionToString(Z_Param_Out_InVersion,Z_Param_Out_OutResault); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUE4CmdBinary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetUE4CmdBinary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnrealPakBinary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetUnrealPakBinary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableMaps) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameName); \
		P_GET_UBOOL(Z_Param_IncludeEngineMaps); \
		P_GET_UBOOL(Z_Param_IncludePluginMaps); \
		P_GET_UBOOL(Z_Param_Sorted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetAvailableMaps(Z_Param_GameName,Z_Param_IncludeEngineMaps,Z_Param_IncludePluginMaps,Z_Param_Sorted); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadShaderbytecode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFlibPatchParserHelper::ReloadShaderbytecode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnabledPluginConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetEnabledPluginConfigs(Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetEngineConfigs(Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectIniFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetProjectIniFiles(Z_Param_InProjectDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIniConfigs) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSearchDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetIniConfigs(Z_Param_InSearchDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHashStringWithSHA1) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::HashStringWithSHA1(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedShaderBytecodeFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_UBOOL(Z_Param_InGalobalBytecode); \
		P_GET_UBOOL(Z_Param_InProjectBytecode); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetCookedShaderBytecodeFiles(Z_Param_InProjectAbsDir,Z_Param_InProjectName,Z_Param_InPlatformName,Z_Param_InGalobalBytecode,Z_Param_InProjectBytecode,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedAssetRegistryFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetCookedAssetRegistryFiles(Z_Param_InProjectAbsDir,Z_Param_InProjectName,Z_Param_InPlatformName,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCookedGlobalShaderCacheFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetCookedGlobalShaderCacheFiles(Z_Param_InProjectDir,Z_Param_InPlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPakFileInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_STRUCT_REF(FPakFileInfo,Z_Param_Out_OutFileInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::GetPakFileInfo(Z_Param_InFile,Z_Param_Out_OutFileInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeDiffExternalFilesInfomationToString) \
	{ \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InAddFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InModifyFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_InDeleteFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::SerializeDiffExternalFilesInfomationToString(Z_Param_Out_InAddFiles,Z_Param_Out_InModifyFiles,Z_Param_Out_InDeleteFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeDiffAssetsInfomationToString) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InAddAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InModifyAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InDeleteAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::SerializeDiffAssetsInfomationToString(Z_Param_Out_InAddAsset,Z_Param_Out_InModifyAsset,Z_Param_Out_InDeleteAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializePakFileInfoToJsonString) \
	{ \
		P_GET_STRUCT_REF(FPakFileInfo,Z_Param_Out_InFileInfo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutJson); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::SerializePakFileInfoToJsonString(Z_Param_Out_InFileInfo,Z_Param_Out_OutJson); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffVersionExFiles) \
	{ \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InNewVersion); \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InBaseVersion); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutAddFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutModifyFiles); \
		P_GET_TARRAY_REF(FExternAssetFileInfo,Z_Param_Out_OutDeleteFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DiffVersionExFiles(Z_Param_Out_InNewVersion,Z_Param_Out_InBaseVersion,Z_Param_Out_OutAddFiles,Z_Param_Out_OutModifyFiles,Z_Param_Out_OutDeleteFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffVersionAssets) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InNewVersion); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InBaseVersion); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAddAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutModifyAsset); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDeleteAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DiffVersionAssets(Z_Param_Out_InNewVersion,Z_Param_Out_InBaseVersion,Z_Param_Out_OutAddAsset,Z_Param_Out_OutModifyAsset,Z_Param_Out_OutDeleteAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeHotPatcherVersionFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStringContent); \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_OutVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::DeserializeHotPatcherVersionFromString(Z_Param_InStringContent,Z_Param_Out_OutVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeHotPatcherVersionToString) \
	{ \
		P_GET_STRUCT_REF(FHotPatcherVersion,Z_Param_Out_InVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutResault); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPatchParserHelper::SerializeHotPatcherVersionToString(Z_Param_Out_InVersion,Z_Param_Out_OutResault); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUE4CmdBinary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetUE4CmdBinary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnrealPakBinary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetUnrealPakBinary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibPatchParserHelper::GetProjectName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableMaps) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameName); \
		P_GET_UBOOL(Z_Param_IncludeEngineMaps); \
		P_GET_UBOOL(Z_Param_IncludePluginMaps); \
		P_GET_UBOOL(Z_Param_Sorted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPatchParserHelper::GetAvailableMaps(Z_Param_GameName,Z_Param_IncludeEngineMaps,Z_Param_IncludePluginMaps,Z_Param_Sorted); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlibPatchParserHelper(); \
	friend struct Z_Construct_UClass_UFlibPatchParserHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibPatchParserHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibPatchParserHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFlibPatchParserHelper(); \
	friend struct Z_Construct_UClass_UFlibPatchParserHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibPatchParserHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibPatchParserHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibPatchParserHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibPatchParserHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibPatchParserHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibPatchParserHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibPatchParserHelper(UFlibPatchParserHelper&&); \
	NO_API UFlibPatchParserHelper(const UFlibPatchParserHelper&); \
public:


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibPatchParserHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibPatchParserHelper(UFlibPatchParserHelper&&); \
	NO_API UFlibPatchParserHelper(const UFlibPatchParserHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibPatchParserHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibPatchParserHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibPatchParserHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_30_PROLOG
#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_RPC_WRAPPERS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_INCLASS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTPATCHERRUNTIME_API UClass* StaticClass<class UFlibPatchParserHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPatchParserHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

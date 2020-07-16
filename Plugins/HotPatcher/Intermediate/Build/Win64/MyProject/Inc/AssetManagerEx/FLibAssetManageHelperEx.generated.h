// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
struct FAssetDetail;
struct FAssetDependenciesInfo;
enum class EAssetRegistryDependencyTypeEx : uint8;
#ifdef ASSETMANAGEREX_FLibAssetManageHelperEx_generated_h
#error "FLibAssetManageHelperEx.generated.h already included, missing '#pragma once' in FLibAssetManageHelperEx.h"
#endif
#define ASSETMANAGEREX_FLibAssetManageHelperEx_generated_h

#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPackageInfo_Statics; \
	ASSETMANAGEREX_API static class UScriptStruct* StaticStruct();


template<> ASSETMANAGEREX_API UScriptStruct* StaticStruct<struct FPackageInfo>();

#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFilesRecursive) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStartDir); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileList); \
		P_GET_UBOOL(Z_Param_InRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::FindFilesRecursive(Z_Param_InStartDir,Z_Param_Out_OutFileList,Z_Param_InRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTargetPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFLibAssetManageHelperEx::GetAllTargetPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPlatform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::IsValidPlatform(Z_Param_PlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginModuleAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPluginModuleName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetPluginModuleAbsDir(Z_Param_InPluginModuleName,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnableModuleAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetEnableModuleAbsDir(Z_Param_InModuleName,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModuleIsEnabled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ModuleIsEnabled(Z_Param_InModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleNameByRelativePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetModuleNameByRelativePath(Z_Param_InRelativePath,Z_Param_Out_OutModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllEnabledModuleName) \
	{ \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutModules); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAllEnabledModuleName(Z_Param_Out_OutModules); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvRelativeDirToAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAbsPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvRelativeDirToAbsDir(Z_Param_InRelativePath,Z_Param_Out_OutAbsPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::LoadFileToString(Z_Param_InFile,Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveStringToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::SaveStringToFile(Z_Param_InFile,Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeAssetDetialArrayToString) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetDetialList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::SerializeAssetDetialArrayToString(Z_Param_Out_InAssetDetialList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeAssetDependencies) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStream); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAssetDependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::DeserializeAssetDependencies(Z_Param_InStream,Z_Param_Out_OutAssetDependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeAssetDependenciesToJson) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InAssetDependencies); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutJsonStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::SerializeAssetDependenciesToJson(Z_Param_Out_InAssetDependencies,Z_Param_Out_OutJsonStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportCookPakCommandToFile) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InCommand); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ExportCookPakCommandToFile(Z_Param_Out_InCommand,Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineCookedAssetCommand) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InAbsPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InRelativePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InParams); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::CombineCookedAssetCommand(Z_Param_Out_InAbsPath,Z_Param_Out_InRelativePath,Z_Param_Out_InParams,Z_Param_Out_OutCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvLongPackageNameToCookedPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCookedAssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCookedAssetRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvLongPackageNameToCookedPath(Z_Param_InProjectAbsDir,Z_Param_InPlatformName,Z_Param_InLongPackageName,Z_Param_Out_OutCookedAssetPath,Z_Param_Out_OutCookedAssetRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineAssetsDetailAsFAssetDepenInfo) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetailList); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAssetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::CombineAssetsDetailAsFAssetDepenInfo(Z_Param_Out_InAssetsDetailList,Z_Param_Out_OutAssetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterNoRefAssetsWithIgnoreFilter) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetail); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InIgnoreFilters); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutHasRefAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::FilterNoRefAssetsWithIgnoreFilter(Z_Param_Out_InAssetsDetail,Z_Param_Out_InIgnoreFilters,Z_Param_Out_OutHasRefAssetsDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterNoRefAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutHasRefAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::FilterNoRefAssets(Z_Param_Out_InAssetsDetail,Z_Param_Out_OutHasRefAssetsDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpecifyAssetDetail) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_OutAssetDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetSpecifyAssetDetail(Z_Param_InLongPackageName,Z_Param_Out_OutAssetDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRedirectorList) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilterPackagePaths); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRedirector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetRedirectorList(Z_Param_Out_InFilterPackagePaths,Z_Param_Out_OutRedirector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsList) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilterPackagePaths); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutAssetList); \
		P_GET_UBOOL(Z_Param_bReTargetRedirector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetsList(Z_Param_Out_InFilterPackagePaths,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutAssetList,Z_Param_bReTargetRedirector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleAssetsList) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InExFilterPackagePaths); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutAssetList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetModuleAssetsList(Z_Param_InModuleName,Z_Param_Out_InExFilterPackagePaths,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutAssetList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetListDependenciesForAssetDetail) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetailList); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetListDependenciesForAssetDetail(Z_Param_Out_InAssetsDetailList,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesForAssetDetail) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAssetDetail); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetDependenciesForAssetDetail(Z_Param_Out_InAssetDetail,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferenceEx) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAsset); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_SearchAssetDepTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetReferenceEx(Z_Param_Out_InAsset,Z_Param_Out_SearchAssetDepTypes,Z_Param_Out_OutRefAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencyByDetail) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAsset); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetDependencyByDetail(Z_Param_Out_InAsset,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutRefAsset,Z_Param_bRecursively); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependency) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetDependency(Z_Param_InLongPackageName,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutRefAsset,Z_Param_bRecursively); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetListDependencies) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InLongPackageNameList); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetListDependencies(Z_Param_Out_InLongPackageNameList,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencies) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetDependencies(Z_Param_InLongPackageName,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineAssetDependencies) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetDependenciesInfo*)Z_Param__Result=UFLibAssetManageHelperEx::CombineAssetDependencies(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetPackageGUID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetPackageGUID(Z_Param_InPackagePath,Z_Param_Out_OutGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvPackagePathToLongPackageName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutLongPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvPackagePathToLongPackageName(Z_Param_InPackagePath,Z_Param_Out_OutLongPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvLongPackageNameToPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvLongPackageNameToPackagePath(Z_Param_InLongPackageName,Z_Param_Out_OutPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetNameFromPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetNameFromPackagePath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLongPackageNameFromPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::GetLongPackageNameFromPackagePath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvAbsToVirtualPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InAbsPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvAbsToVirtualPath(Z_Param_InAbsPath,Z_Param_Out_OutPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvVirtualToAbsPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::ConvVirtualToAbsPath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	}


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFilesRecursive) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStartDir); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileList); \
		P_GET_UBOOL(Z_Param_InRecursive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::FindFilesRecursive(Z_Param_InStartDir,Z_Param_Out_OutFileList,Z_Param_InRecursive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllTargetPlatform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFLibAssetManageHelperEx::GetAllTargetPlatform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPlatform) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlatformName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::IsValidPlatform(Z_Param_PlatformName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginModuleAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPluginModuleName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetPluginModuleAbsDir(Z_Param_InPluginModuleName,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnableModuleAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetEnableModuleAbsDir(Z_Param_InModuleName,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModuleIsEnabled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ModuleIsEnabled(Z_Param_InModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleNameByRelativePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetModuleNameByRelativePath(Z_Param_InRelativePath,Z_Param_Out_OutModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllEnabledModuleName) \
	{ \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutModules); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAllEnabledModuleName(Z_Param_Out_OutModules); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvRelativeDirToAbsDir) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAbsPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvRelativeDirToAbsDir(Z_Param_InRelativePath,Z_Param_Out_OutAbsPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::LoadFileToString(Z_Param_InFile,Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveStringToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::SaveStringToFile(Z_Param_InFile,Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeAssetDetialArrayToString) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetDetialList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::SerializeAssetDetialArrayToString(Z_Param_Out_InAssetDetialList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeAssetDependencies) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InStream); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAssetDependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::DeserializeAssetDependencies(Z_Param_InStream,Z_Param_Out_OutAssetDependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeAssetDependenciesToJson) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_InAssetDependencies); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutJsonStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::SerializeAssetDependenciesToJson(Z_Param_Out_InAssetDependencies,Z_Param_Out_OutJsonStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportCookPakCommandToFile) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InCommand); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ExportCookPakCommandToFile(Z_Param_Out_InCommand,Z_Param_InFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineCookedAssetCommand) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InAbsPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InRelativePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InParams); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::CombineCookedAssetCommand(Z_Param_Out_InAbsPath,Z_Param_Out_InRelativePath,Z_Param_Out_InParams,Z_Param_Out_OutCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvLongPackageNameToCookedPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InProjectAbsDir); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPlatformName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCookedAssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutCookedAssetRelativePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvLongPackageNameToCookedPath(Z_Param_InProjectAbsDir,Z_Param_InPlatformName,Z_Param_InLongPackageName,Z_Param_Out_OutCookedAssetPath,Z_Param_Out_OutCookedAssetRelativePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineAssetsDetailAsFAssetDepenInfo) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetailList); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutAssetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::CombineAssetsDetailAsFAssetDepenInfo(Z_Param_Out_InAssetsDetailList,Z_Param_Out_OutAssetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterNoRefAssetsWithIgnoreFilter) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetail); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InIgnoreFilters); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutHasRefAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::FilterNoRefAssetsWithIgnoreFilter(Z_Param_Out_InAssetsDetail,Z_Param_Out_InIgnoreFilters,Z_Param_Out_OutHasRefAssetsDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterNoRefAssets) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutHasRefAssetsDetail); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::FilterNoRefAssets(Z_Param_Out_InAssetsDetail,Z_Param_Out_OutHasRefAssetsDetail,Z_Param_Out_OutDontHasRefAssetsDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpecifyAssetDetail) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_OutAssetDetail); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetSpecifyAssetDetail(Z_Param_InLongPackageName,Z_Param_Out_OutAssetDetail); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRedirectorList) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilterPackagePaths); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRedirector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetRedirectorList(Z_Param_Out_InFilterPackagePaths,Z_Param_Out_OutRedirector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetsList) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InFilterPackagePaths); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutAssetList); \
		P_GET_UBOOL(Z_Param_bReTargetRedirector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetsList(Z_Param_Out_InFilterPackagePaths,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutAssetList,Z_Param_bReTargetRedirector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleAssetsList) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InModuleName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InExFilterPackagePaths); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutAssetList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetModuleAssetsList(Z_Param_InModuleName,Z_Param_Out_InExFilterPackagePaths,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutAssetList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetListDependenciesForAssetDetail) \
	{ \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_InAssetsDetailList); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetListDependenciesForAssetDetail(Z_Param_Out_InAssetsDetailList,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesForAssetDetail) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAssetDetail); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetDependenciesForAssetDetail(Z_Param_Out_InAssetDetail,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferenceEx) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAsset); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_SearchAssetDepTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetReferenceEx(Z_Param_Out_InAsset,Z_Param_Out_SearchAssetDepTypes,Z_Param_Out_OutRefAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencyByDetail) \
	{ \
		P_GET_STRUCT_REF(FAssetDetail,Z_Param_Out_InAsset); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetDependencyByDetail(Z_Param_Out_InAsset,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutRefAsset,Z_Param_bRecursively); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependency) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_TARRAY_REF(FAssetDetail,Z_Param_Out_OutRefAsset); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetDependency(Z_Param_InLongPackageName,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutRefAsset,Z_Param_bRecursively); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetListDependencies) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InLongPackageNameList); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetListDependencies(Z_Param_Out_InLongPackageNameList,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencies) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_TARRAY_REF(EAssetRegistryDependencyTypeEx,Z_Param_Out_AssetRegistryDependencyTypes); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_OutDependices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFLibAssetManageHelperEx::GetAssetDependencies(Z_Param_InLongPackageName,Z_Param_Out_AssetRegistryDependencyTypes,Z_Param_Out_OutDependices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCombineAssetDependencies) \
	{ \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FAssetDependenciesInfo,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetDependenciesInfo*)Z_Param__Result=UFLibAssetManageHelperEx::CombineAssetDependencies(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetPackageGUID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetPackageGUID(Z_Param_InPackagePath,Z_Param_Out_OutGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvPackagePathToLongPackageName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutLongPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvPackagePathToLongPackageName(Z_Param_InPackagePath,Z_Param_Out_OutLongPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvLongPackageNameToPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvLongPackageNameToPackagePath(Z_Param_InLongPackageName,Z_Param_Out_OutPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetNameFromPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::GetAssetNameFromPackagePath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLongPackageNameFromPackagePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::GetLongPackageNameFromPackagePath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvAbsToVirtualPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InAbsPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFLibAssetManageHelperEx::ConvAbsToVirtualPath(Z_Param_InAbsPath,Z_Param_Out_OutPackagePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvVirtualToAbsPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackagePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFLibAssetManageHelperEx::ConvVirtualToAbsPath(Z_Param_InPackagePath); \
		P_NATIVE_END; \
	}


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFLibAssetManageHelperEx(); \
	friend struct Z_Construct_UClass_UFLibAssetManageHelperEx_Statics; \
public: \
	DECLARE_CLASS(UFLibAssetManageHelperEx, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEx"), NO_API) \
	DECLARE_SERIALIZER(UFLibAssetManageHelperEx)


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUFLibAssetManageHelperEx(); \
	friend struct Z_Construct_UClass_UFLibAssetManageHelperEx_Statics; \
public: \
	DECLARE_CLASS(UFLibAssetManageHelperEx, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AssetManagerEx"), NO_API) \
	DECLARE_SERIALIZER(UFLibAssetManageHelperEx)


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFLibAssetManageHelperEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFLibAssetManageHelperEx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFLibAssetManageHelperEx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFLibAssetManageHelperEx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFLibAssetManageHelperEx(UFLibAssetManageHelperEx&&); \
	NO_API UFLibAssetManageHelperEx(const UFLibAssetManageHelperEx&); \
public:


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFLibAssetManageHelperEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFLibAssetManageHelperEx(UFLibAssetManageHelperEx&&); \
	NO_API UFLibAssetManageHelperEx(const UFLibAssetManageHelperEx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFLibAssetManageHelperEx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFLibAssetManageHelperEx); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFLibAssetManageHelperEx)


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_PRIVATE_PROPERTY_OFFSET
#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_59_PROLOG
#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_PRIVATE_PROPERTY_OFFSET \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_RPC_WRAPPERS \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_INCLASS \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_PRIVATE_PROPERTY_OFFSET \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_INCLASS_NO_PURE_DECLS \
	TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETMANAGEREX_API UClass* StaticClass<class UFLibAssetManageHelperEx>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestHotOverridden_Plugins_HotPatcher_Source_AssetManagerEx_Public_Flib_FLibAssetManageHelperEx_h


#define FOREACH_ENUM_EASSETREGISTRYDEPENDENCYTYPEEX(op) \
	op(EAssetRegistryDependencyTypeEx::None) \
	op(EAssetRegistryDependencyTypeEx::Soft) \
	op(EAssetRegistryDependencyTypeEx::Hard) \
	op(EAssetRegistryDependencyTypeEx::SearchableName) \
	op(EAssetRegistryDependencyTypeEx::SoftManage) \
	op(EAssetRegistryDependencyTypeEx::HardManage) \
	op(EAssetRegistryDependencyTypeEx::Packages) \
	op(EAssetRegistryDependencyTypeEx::Manage) \
	op(EAssetRegistryDependencyTypeEx::All) 

enum class EAssetRegistryDependencyTypeEx : uint8;
template<> ASSETMANAGEREX_API UEnum* StaticEnum<EAssetRegistryDependencyTypeEx>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

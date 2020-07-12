// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetManagerEx/Public/Flib/FLibAssetManageHelperEx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLibAssetManageHelperEx() {}
// Cross Module References
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEx();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FPackageInfo();
	ASSETMANAGEREX_API UClass* Z_Construct_UClass_UFLibAssetManageHelperEx_NoRegister();
	ASSETMANAGEREX_API UClass* Z_Construct_UClass_UFLibAssetManageHelperEx();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesInfo();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDetail();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson();
	ASSETMANAGEREX_API UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString();
// End Cross Module References
	static UEnum* EAssetRegistryDependencyTypeEx_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, Z_Construct_UPackage__Script_AssetManagerEx(), TEXT("EAssetRegistryDependencyTypeEx"));
		}
		return Singleton;
	}
	template<> ASSETMANAGEREX_API UEnum* StaticEnum<EAssetRegistryDependencyTypeEx>()
	{
		return EAssetRegistryDependencyTypeEx_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssetRegistryDependencyTypeEx(EAssetRegistryDependencyTypeEx_StaticEnum, TEXT("/Script/AssetManagerEx"), TEXT("EAssetRegistryDependencyTypeEx"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx_Hash() { return 1052380037U; }
	UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetManagerEx();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssetRegistryDependencyTypeEx"), 0, Get_Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAssetRegistryDependencyTypeEx::None", (int64)EAssetRegistryDependencyTypeEx::None },
				{ "EAssetRegistryDependencyTypeEx::Soft", (int64)EAssetRegistryDependencyTypeEx::Soft },
				{ "EAssetRegistryDependencyTypeEx::Hard", (int64)EAssetRegistryDependencyTypeEx::Hard },
				{ "EAssetRegistryDependencyTypeEx::SearchableName", (int64)EAssetRegistryDependencyTypeEx::SearchableName },
				{ "EAssetRegistryDependencyTypeEx::SoftManage", (int64)EAssetRegistryDependencyTypeEx::SoftManage },
				{ "EAssetRegistryDependencyTypeEx::HardManage", (int64)EAssetRegistryDependencyTypeEx::HardManage },
				{ "EAssetRegistryDependencyTypeEx::Packages", (int64)EAssetRegistryDependencyTypeEx::Packages },
				{ "EAssetRegistryDependencyTypeEx::Manage", (int64)EAssetRegistryDependencyTypeEx::Manage },
				{ "EAssetRegistryDependencyTypeEx::All", (int64)EAssetRegistryDependencyTypeEx::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hard.ToolTip", "Dependencies which are required for correct usage of the source asset, and must be loaded at the same time" },
				{ "HardManage.ToolTip", "Reference that says one object directly manages another object, set when Primary Assets manage things explicitly" },
				{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
				{ "SearchableName.ToolTip", "References to specific SearchableNames inside a package" },
				{ "Soft.ToolTip", "Dependencies which don't need to be loaded for the object to be used (i.e. soft object paths)" },
				{ "SoftManage.ToolTip", "Indirect management references, these are set through recursion for Primary Assets that manage packages or other primary assets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetManagerEx,
				nullptr,
				"EAssetRegistryDependencyTypeEx",
				"EAssetRegistryDependencyTypeEx",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPackageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETMANAGEREX_API uint32 Get_Z_Construct_UScriptStruct_FPackageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackageInfo, Z_Construct_UPackage__Script_AssetManagerEx(), TEXT("PackageInfo"), sizeof(FPackageInfo), Get_Z_Construct_UScriptStruct_FPackageInfo_Hash());
	}
	return Singleton;
}
template<> ASSETMANAGEREX_API UScriptStruct* StaticStruct<FPackageInfo>()
{
	return FPackageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPackageInfo(FPackageInfo::StaticStruct, TEXT("/Script/AssetManagerEx"), TEXT("PackageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AssetManagerEx_StaticRegisterNativesFPackageInfo
{
	FScriptStruct_AssetManagerEx_StaticRegisterNativesFPackageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PackageInfo")),new UScriptStruct::TCppStructOps<FPackageInfo>);
	}
} ScriptStruct_AssetManagerEx_StaticRegisterNativesFPackageInfo;
	struct Z_Construct_UScriptStruct_FPackageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "Category", "PackageInfo" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackageInfo, AssetGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "PackageInfo" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPackageInfo, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPackageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPackageInfo_Statics::NewProp_AssetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEx,
		nullptr,
		&NewStructOps,
		"PackageInfo",
		sizeof(FPackageInfo),
		alignof(FPackageInfo),
		Z_Construct_UScriptStruct_FPackageInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackageInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPackageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPackageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetManagerEx();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PackageInfo"), sizeof(FPackageInfo), Get_Z_Construct_UScriptStruct_FPackageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPackageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPackageInfo_Hash() { return 1221732835U; }
	void UFLibAssetManageHelperEx::StaticRegisterNativesUFLibAssetManageHelperEx()
	{
		UClass* Class = UFLibAssetManageHelperEx::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CombineAssetDependencies", &UFLibAssetManageHelperEx::execCombineAssetDependencies },
			{ "CombineAssetsDetailAsFAssetDepenInfo", &UFLibAssetManageHelperEx::execCombineAssetsDetailAsFAssetDepenInfo },
			{ "CombineCookedAssetCommand", &UFLibAssetManageHelperEx::execCombineCookedAssetCommand },
			{ "ConvAbsToVirtualPath", &UFLibAssetManageHelperEx::execConvAbsToVirtualPath },
			{ "ConvLongPackageNameToCookedPath", &UFLibAssetManageHelperEx::execConvLongPackageNameToCookedPath },
			{ "ConvLongPackageNameToPackagePath", &UFLibAssetManageHelperEx::execConvLongPackageNameToPackagePath },
			{ "ConvPackagePathToLongPackageName", &UFLibAssetManageHelperEx::execConvPackagePathToLongPackageName },
			{ "ConvRelativeDirToAbsDir", &UFLibAssetManageHelperEx::execConvRelativeDirToAbsDir },
			{ "ConvVirtualToAbsPath", &UFLibAssetManageHelperEx::execConvVirtualToAbsPath },
			{ "DeserializeAssetDependencies", &UFLibAssetManageHelperEx::execDeserializeAssetDependencies },
			{ "ExportCookPakCommandToFile", &UFLibAssetManageHelperEx::execExportCookPakCommandToFile },
			{ "FilterNoRefAssets", &UFLibAssetManageHelperEx::execFilterNoRefAssets },
			{ "FilterNoRefAssetsWithIgnoreFilter", &UFLibAssetManageHelperEx::execFilterNoRefAssetsWithIgnoreFilter },
			{ "FindFilesRecursive", &UFLibAssetManageHelperEx::execFindFilesRecursive },
			{ "GetAllEnabledModuleName", &UFLibAssetManageHelperEx::execGetAllEnabledModuleName },
			{ "GetAllTargetPlatform", &UFLibAssetManageHelperEx::execGetAllTargetPlatform },
			{ "GetAssetDependencies", &UFLibAssetManageHelperEx::execGetAssetDependencies },
			{ "GetAssetDependenciesForAssetDetail", &UFLibAssetManageHelperEx::execGetAssetDependenciesForAssetDetail },
			{ "GetAssetDependency", &UFLibAssetManageHelperEx::execGetAssetDependency },
			{ "GetAssetDependencyByDetail", &UFLibAssetManageHelperEx::execGetAssetDependencyByDetail },
			{ "GetAssetListDependencies", &UFLibAssetManageHelperEx::execGetAssetListDependencies },
			{ "GetAssetListDependenciesForAssetDetail", &UFLibAssetManageHelperEx::execGetAssetListDependenciesForAssetDetail },
			{ "GetAssetNameFromPackagePath", &UFLibAssetManageHelperEx::execGetAssetNameFromPackagePath },
			{ "GetAssetPackageGUID", &UFLibAssetManageHelperEx::execGetAssetPackageGUID },
			{ "GetAssetReferenceEx", &UFLibAssetManageHelperEx::execGetAssetReferenceEx },
			{ "GetAssetsList", &UFLibAssetManageHelperEx::execGetAssetsList },
			{ "GetEnableModuleAbsDir", &UFLibAssetManageHelperEx::execGetEnableModuleAbsDir },
			{ "GetLongPackageNameFromPackagePath", &UFLibAssetManageHelperEx::execGetLongPackageNameFromPackagePath },
			{ "GetModuleAssetsList", &UFLibAssetManageHelperEx::execGetModuleAssetsList },
			{ "GetModuleNameByRelativePath", &UFLibAssetManageHelperEx::execGetModuleNameByRelativePath },
			{ "GetPluginModuleAbsDir", &UFLibAssetManageHelperEx::execGetPluginModuleAbsDir },
			{ "GetRedirectorList", &UFLibAssetManageHelperEx::execGetRedirectorList },
			{ "GetSpecifyAssetDetail", &UFLibAssetManageHelperEx::execGetSpecifyAssetDetail },
			{ "IsValidPlatform", &UFLibAssetManageHelperEx::execIsValidPlatform },
			{ "LoadFileToString", &UFLibAssetManageHelperEx::execLoadFileToString },
			{ "ModuleIsEnabled", &UFLibAssetManageHelperEx::execModuleIsEnabled },
			{ "SaveStringToFile", &UFLibAssetManageHelperEx::execSaveStringToFile },
			{ "SerializeAssetDependenciesToJson", &UFLibAssetManageHelperEx::execSerializeAssetDependenciesToJson },
			{ "SerializeAssetDetialArrayToString", &UFLibAssetManageHelperEx::execSerializeAssetDetialArrayToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics
	{
		struct FLibAssetManageHelperEx_eventCombineAssetDependencies_Parms
		{
			FAssetDependenciesInfo A;
			FAssetDependenciesInfo B;
			FAssetDependenciesInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineAssetDependencies_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineAssetDependencies_Parms, B), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineAssetDependencies_Parms, A), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "Combine AssetDependencies Filter repeat asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "CombineAssetDependencies", sizeof(FLibAssetManageHelperEx_eventCombineAssetDependencies_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics
	{
		struct FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms
		{
			TArray<FAssetDetail> InAssetsDetailList;
			FAssetDependenciesInfo OutAssetInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetsDetailList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetsDetailList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetsDetailList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_OutAssetInfo = { "OutAssetInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms, OutAssetInfo), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList = { "InAssetsDetailList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms, InAssetsDetailList), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList_Inner = { "InAssetsDetailList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_OutAssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::NewProp_InAssetsDetailList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "CombineAssetsDetailAsFAssetDepenInfo", sizeof(FLibAssetManageHelperEx_eventCombineAssetsDetailAsFAssetDepenInfo_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics
	{
		struct FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms
		{
			TArray<FString> InAbsPath;
			TArray<FString> InRelativePath;
			TArray<FString> InParams;
			TArray<FString> OutCommand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCommand;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutCommand_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InParams;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRelativePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InRelativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRelativePath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAbsPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAbsPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAbsPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_OutCommand = { "OutCommand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms, OutCommand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_OutCommand_Inner = { "OutCommand", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms, InParams), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams_Inner = { "InParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath = { "InRelativePath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms, InRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath_Inner = { "InRelativePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath = { "InAbsPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms, InAbsPath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath_Inner = { "InAbsPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_OutCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_OutCommand_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InRelativePath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::NewProp_InAbsPath_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "CombineCookedAssetCommand", sizeof(FLibAssetManageHelperEx_eventCombineCookedAssetCommand_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics
	{
		struct FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms
		{
			FString InAbsPath;
			FString OutPackagePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAbsPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAbsPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_OutPackagePath = { "OutPackagePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms, OutPackagePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_InAbsPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_InAbsPath = { "InAbsPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms, InAbsPath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_InAbsPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_InAbsPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_OutPackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::NewProp_InAbsPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvAbsToVirtualPath", sizeof(FLibAssetManageHelperEx_eventConvAbsToVirtualPath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics
	{
		struct FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms
		{
			FString InProjectAbsDir;
			FString InPlatformName;
			FString InLongPackageName;
			TArray<FString> OutCookedAssetPath;
			TArray<FString> OutCookedAssetRelativePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCookedAssetRelativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutCookedAssetRelativePath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCookedAssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutCookedAssetPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProjectAbsDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProjectAbsDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetRelativePath = { "OutCookedAssetRelativePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms, OutCookedAssetRelativePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetRelativePath_Inner = { "OutCookedAssetRelativePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetPath = { "OutCookedAssetPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms, OutCookedAssetPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetPath_Inner = { "OutCookedAssetPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InLongPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InLongPackageName = { "InLongPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms, InLongPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InLongPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InLongPackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InProjectAbsDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InProjectAbsDir = { "InProjectAbsDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms, InProjectAbsDir), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InProjectAbsDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InProjectAbsDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetRelativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetRelativePath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_OutCookedAssetPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InLongPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::NewProp_InProjectAbsDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvLongPackageNameToCookedPath", sizeof(FLibAssetManageHelperEx_eventConvLongPackageNameToCookedPath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics
	{
		struct FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms
		{
			FString InLongPackageName;
			FString OutPackagePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_OutPackagePath = { "OutPackagePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms, OutPackagePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_InLongPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_InLongPackageName = { "InLongPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms, InLongPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_InLongPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_InLongPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_OutPackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::NewProp_InLongPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvLongPackageNameToPackagePath", sizeof(FLibAssetManageHelperEx_eventConvLongPackageNameToPackagePath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics
	{
		struct FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms
		{
			FString InPackagePath;
			FString OutLongPackageName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutLongPackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_OutLongPackageName = { "OutLongPackageName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms, OutLongPackageName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_InPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_InPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_OutLongPackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::NewProp_InPackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvPackagePathToLongPackageName", sizeof(FLibAssetManageHelperEx_eventConvPackagePathToLongPackageName_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics
	{
		struct FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms
		{
			FString InRelativePath;
			FString OutAbsPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAbsPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRelativePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRelativePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_OutAbsPath = { "OutAbsPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms, OutAbsPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_InRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_InRelativePath = { "InRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms, InRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_InRelativePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_InRelativePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_OutAbsPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::NewProp_InRelativePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "conv /Game/AAAA/ to /D:/PROJECTNAME/Content/AAAA/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvRelativeDirToAbsDir", sizeof(FLibAssetManageHelperEx_eventConvRelativeDirToAbsDir_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics
	{
		struct FLibAssetManageHelperEx_eventConvVirtualToAbsPath_Parms
		{
			FString InPackagePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvVirtualToAbsPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventConvVirtualToAbsPath_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_InPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_InPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::NewProp_InPackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ConvVirtualToAbsPath", sizeof(FLibAssetManageHelperEx_eventConvVirtualToAbsPath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics
	{
		struct FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms
		{
			FString InStream;
			FAssetDependenciesInfo OutAssetDependencies;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_OutAssetDependencies = { "OutAssetDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms, OutAssetDependencies), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_InStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_InStream = { "InStream", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms, InStream), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_InStream_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_InStream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_OutAssetDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::NewProp_InStream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "deserialize asset dependencies to FAssetDependenciesIndo from string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "DeserializeAssetDependencies", sizeof(FLibAssetManageHelperEx_eventDeserializeAssetDependencies_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics
	{
		struct FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms
		{
			TArray<FString> InCommand;
			FString InFile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCommand;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InCommand_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand = { "InCommand", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms, InCommand), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand_Inner = { "InCommand", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::NewProp_InCommand_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ExportCookPakCommandToFile", sizeof(FLibAssetManageHelperEx_eventExportCookPakCommandToFile_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics
	{
		struct FLibAssetManageHelperEx_eventFilterNoRefAssets_Parms
		{
			TArray<FAssetDetail> InAssetsDetail;
			TArray<FAssetDetail> OutHasRefAssetsDetail;
			TArray<FAssetDetail> OutDontHasRefAssetsDetail;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDontHasRefAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDontHasRefAssetsDetail_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHasRefAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHasRefAssetsDetail_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetsDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetsDetail_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutDontHasRefAssetsDetail = { "OutDontHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssets_Parms, OutDontHasRefAssetsDetail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutDontHasRefAssetsDetail_Inner = { "OutDontHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutHasRefAssetsDetail = { "OutHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssets_Parms, OutHasRefAssetsDetail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutHasRefAssetsDetail_Inner = { "OutHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail = { "InAssetsDetail", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssets_Parms, InAssetsDetail), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail_Inner = { "InAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutDontHasRefAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutDontHasRefAssetsDetail_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutHasRefAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_OutHasRefAssetsDetail_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::NewProp_InAssetsDetail_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "\xe8\xbf\x87\xe6\xbb\xa4\xe6\x8e\x89\xe6\xb2\xa1\xe6\x9c\x89\xe5\xbc\x95\xe7\x94\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "FilterNoRefAssets", sizeof(FLibAssetManageHelperEx_eventFilterNoRefAssets_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics
	{
		struct FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms
		{
			TArray<FAssetDetail> InAssetsDetail;
			TArray<FString> InIgnoreFilters;
			TArray<FAssetDetail> OutHasRefAssetsDetail;
			TArray<FAssetDetail> OutDontHasRefAssetsDetail;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDontHasRefAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDontHasRefAssetsDetail_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHasRefAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHasRefAssetsDetail_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIgnoreFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InIgnoreFilters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InIgnoreFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetsDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetsDetail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetsDetail_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutDontHasRefAssetsDetail = { "OutDontHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms, OutDontHasRefAssetsDetail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutDontHasRefAssetsDetail_Inner = { "OutDontHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutHasRefAssetsDetail = { "OutHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms, OutHasRefAssetsDetail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutHasRefAssetsDetail_Inner = { "OutHasRefAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters = { "InIgnoreFilters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms, InIgnoreFilters), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters_Inner = { "InIgnoreFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail = { "InAssetsDetail", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms, InAssetsDetail), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail_Inner = { "InAssetsDetail", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutDontHasRefAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutDontHasRefAssetsDetail_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutHasRefAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_OutHasRefAssetsDetail_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InIgnoreFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::NewProp_InAssetsDetail_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "FilterNoRefAssetsWithIgnoreFilter", sizeof(FLibAssetManageHelperEx_eventFilterNoRefAssetsWithIgnoreFilter_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics
	{
		struct FLibAssetManageHelperEx_eventFindFilesRecursive_Parms
		{
			FString InStartDir;
			TArray<FString> OutFileList;
			bool InRecursive;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_InRecursive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InRecursive;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFileList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFileList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStartDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventFindFilesRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventFindFilesRecursive_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InRecursive_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventFindFilesRecursive_Parms*)Obj)->InRecursive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InRecursive = { "InRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventFindFilesRecursive_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_OutFileList = { "OutFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFindFilesRecursive_Parms, OutFileList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_OutFileList_Inner = { "OutFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InStartDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InStartDir = { "InStartDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventFindFilesRecursive_Parms, InStartDir), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InStartDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InStartDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InRecursive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_OutFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_OutFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::NewProp_InStartDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "CPP_Default_InRecursive", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "FindFilesRecursive", sizeof(FLibAssetManageHelperEx_eventFindFilesRecursive_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAllEnabledModuleName_Parms
		{
			TMap<FString,FString> OutModules;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutModules;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutModules_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutModules_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules = { "OutModules", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAllEnabledModuleName_Parms, OutModules), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules_Key_KeyProp = { "OutModules_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules_ValueProp = { "OutModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::NewProp_OutModules_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAllEnabledModuleName", sizeof(FLibAssetManageHelperEx_eventGetAllEnabledModuleName_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAllTargetPlatform_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAllTargetPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAllTargetPlatform", sizeof(FLibAssetManageHelperEx_eventGetAllTargetPlatform_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetDependencies_Parms
		{
			FString InLongPackageName;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			FAssetDependenciesInfo OutDependices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDependices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_OutDependices = { "OutDependices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencies_Parms, OutDependices), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencies_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_InLongPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_InLongPackageName = { "InLongPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencies_Parms, InLongPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_InLongPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_InLongPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_OutDependices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::NewProp_InLongPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "@Param InLongPackageName: e.g /Game/TEST/BP_Actor don't pass /Game/TEST/BP_Actor.BP_Actor\n@Param OutDependices: Output Asset Dependencies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetDependencies", sizeof(FLibAssetManageHelperEx_eventGetAssetDependencies_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetDependenciesForAssetDetail_Parms
		{
			FAssetDetail InAssetDetail;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			FAssetDependenciesInfo OutDependices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDependices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetDetail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_OutDependices = { "OutDependices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependenciesForAssetDetail_Parms, OutDependices), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependenciesForAssetDetail_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_InAssetDetail_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_InAssetDetail = { "InAssetDetail", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependenciesForAssetDetail_Parms, InAssetDetail), Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_InAssetDetail_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_InAssetDetail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_OutDependices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::NewProp_InAssetDetail,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetDependenciesForAssetDetail", sizeof(FLibAssetManageHelperEx_eventGetAssetDependenciesForAssetDetail_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetDependency_Parms
		{
			FString InLongPackageName;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			TArray<FAssetDetail> OutRefAsset;
			bool bRecursively;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRecursively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursively;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRefAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRefAsset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetDependency_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetDependency_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_bRecursively_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetDependency_Parms*)Obj)->bRecursively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_bRecursively = { "bRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetDependency_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_bRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_OutRefAsset = { "OutRefAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependency_Parms, OutRefAsset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_OutRefAsset_Inner = { "OutRefAsset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependency_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_InLongPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_InLongPackageName = { "InLongPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependency_Parms, InLongPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_InLongPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_InLongPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_bRecursively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_OutRefAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_OutRefAsset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::NewProp_InLongPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "CPP_Default_bRecursively", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetDependency", sizeof(FLibAssetManageHelperEx_eventGetAssetDependency_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms
		{
			FAssetDetail InAsset;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			TArray<FAssetDetail> OutRefAsset;
			bool bRecursively;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRecursively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursively;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRefAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRefAsset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_bRecursively_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms*)Obj)->bRecursively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_bRecursively = { "bRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_bRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_OutRefAsset = { "OutRefAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms, OutRefAsset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_OutRefAsset_Inner = { "OutRefAsset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms, InAsset), Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_InAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_InAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_bRecursively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_OutRefAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_OutRefAsset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "CPP_Default_bRecursively", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetDependencyByDetail", sizeof(FLibAssetManageHelperEx_eventGetAssetDependencyByDetail_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetListDependencies_Parms
		{
			TArray<FString> InLongPackageNameList;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			FAssetDependenciesInfo OutDependices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDependices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InLongPackageNameList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageNameList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_OutDependices = { "OutDependices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependencies_Parms, OutDependices), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependencies_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList = { "InLongPackageNameList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependencies_Parms, InLongPackageNameList), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList_Inner = { "InLongPackageNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_OutDependices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::NewProp_InLongPackageNameList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetListDependencies", sizeof(FLibAssetManageHelperEx_eventGetAssetListDependencies_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetListDependenciesForAssetDetail_Parms
		{
			TArray<FAssetDetail> InAssetsDetailList;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			FAssetDependenciesInfo OutDependices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDependices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetsDetailList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetsDetailList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetsDetailList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_OutDependices = { "OutDependices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependenciesForAssetDetail_Parms, OutDependices), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependenciesForAssetDetail_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList = { "InAssetsDetailList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetListDependenciesForAssetDetail_Parms, InAssetsDetailList), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList_Inner = { "InAssetsDetailList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_OutDependices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::NewProp_InAssetsDetailList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetListDependenciesForAssetDetail", sizeof(FLibAssetManageHelperEx_eventGetAssetListDependenciesForAssetDetail_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetNameFromPackagePath_Parms
		{
			FString InPackagePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetNameFromPackagePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetNameFromPackagePath_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::NewProp_InPackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetNameFromPackagePath", sizeof(FLibAssetManageHelperEx_eventGetAssetNameFromPackagePath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms
		{
			FString InPackagePath;
			FString OutGUID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_OutGUID = { "OutGUID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms, OutGUID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_InPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_InPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_OutGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::NewProp_InPackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerExEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetPackageGUID", sizeof(FLibAssetManageHelperEx_eventGetAssetPackageGUID_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms
		{
			FAssetDetail InAsset;
			TArray<EAssetRegistryDependencyTypeEx> SearchAssetDepTypes;
			TArray<FAssetDetail> OutRefAsset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRefAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRefAsset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchAssetDepTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchAssetDepTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchAssetDepTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchAssetDepTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_OutRefAsset = { "OutRefAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms, OutRefAsset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_OutRefAsset_Inner = { "OutRefAsset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes = { "SearchAssetDepTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms, SearchAssetDepTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_Inner = { "SearchAssetDepTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms, InAsset), Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_InAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_InAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_OutRefAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_OutRefAsset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_SearchAssetDepTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::NewProp_InAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetReferenceEx", sizeof(FLibAssetManageHelperEx_eventGetAssetReferenceEx_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics
	{
		struct FLibAssetManageHelperEx_eventGetAssetsList_Parms
		{
			TArray<FString> InFilterPackagePaths;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			TArray<FAssetDetail> OutAssetList;
			bool bReTargetRedirector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReTargetRedirector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReTargetRedirector;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilterPackagePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilterPackagePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilterPackagePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetsList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetsList_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_bReTargetRedirector_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetAssetsList_Parms*)Obj)->bReTargetRedirector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_bReTargetRedirector = { "bReTargetRedirector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetAssetsList_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_bReTargetRedirector_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_OutAssetList = { "OutAssetList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetsList_Parms, OutAssetList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_OutAssetList_Inner = { "OutAssetList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetsList_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths = { "InFilterPackagePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetAssetsList_Parms, InFilterPackagePaths), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths_Inner = { "InFilterPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_bReTargetRedirector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_OutAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_OutAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::NewProp_InFilterPackagePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "CPP_Default_bReTargetRedirector", "true" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "* FilterPackageName format is /Game or /Game/TEST" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetAssetsList", sizeof(FLibAssetManageHelperEx_eventGetAssetsList_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics
	{
		struct FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms
		{
			FString InModuleName;
			FString OutPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_InModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_InModuleName = { "InModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms, InModuleName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_InModuleName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_InModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::NewProp_InModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetEnableModuleAbsDir", sizeof(FLibAssetManageHelperEx_eventGetEnableModuleAbsDir_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics
	{
		struct FLibAssetManageHelperEx_eventGetLongPackageNameFromPackagePath_Parms
		{
			FString InPackagePath;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetLongPackageNameFromPackagePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetLongPackageNameFromPackagePath_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_InPackagePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::NewProp_InPackagePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "- AssetPath : /Game/BP/BP_Actor.BP_Actor\n- LongPackageName : /Game/BP/BP_Actor\n- AssetName : BP_Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetLongPackageNameFromPackagePath", sizeof(FLibAssetManageHelperEx_eventGetLongPackageNameFromPackagePath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics
	{
		struct FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms
		{
			FString InModuleName;
			TArray<FString> InExFilterPackagePaths;
			TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;
			TArray<FAssetDetail> OutAssetList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAssetList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRegistryDependencyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetRegistryDependencyTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssetRegistryDependencyTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetRegistryDependencyTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InExFilterPackagePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InExFilterPackagePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InExFilterPackagePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_OutAssetList = { "OutAssetList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms, OutAssetList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_OutAssetList_Inner = { "OutAssetList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths = { "InExFilterPackagePaths", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms, InExFilterPackagePaths), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths_Inner = { "InExFilterPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InModuleName = { "InModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms, InModuleName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InModuleName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_OutAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_OutAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InExFilterPackagePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::NewProp_InModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InExFilterPackagePaths" },
		{ "AutoCreateRefTerm", "InExFilterPackagePaths" },
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetModuleAssetsList", sizeof(FLibAssetManageHelperEx_eventGetModuleAssetsList_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics
	{
		struct FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms
		{
			FString InRelativePath;
			FString OutModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutModuleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRelativePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InRelativePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_OutModuleName = { "OutModuleName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms, OutModuleName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_InRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_InRelativePath = { "InRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms, InRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_InRelativePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_InRelativePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_OutModuleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::NewProp_InRelativePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetModuleNameByRelativePath", sizeof(FLibAssetManageHelperEx_eventGetModuleNameByRelativePath_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics
	{
		struct FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms
		{
			FString InPluginModuleName;
			FString OutPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPluginModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPluginModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms, OutPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_InPluginModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_InPluginModuleName = { "InPluginModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms, InPluginModuleName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_InPluginModuleName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_InPluginModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_OutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::NewProp_InPluginModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetPluginModuleAbsDir", sizeof(FLibAssetManageHelperEx_eventGetPluginModuleAbsDir_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics
	{
		struct FLibAssetManageHelperEx_eventGetRedirectorList_Parms
		{
			TArray<FString> InFilterPackagePaths;
			TArray<FAssetDetail> OutRedirector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRedirector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRedirector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFilterPackagePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFilterPackagePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFilterPackagePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetRedirectorList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetRedirectorList_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_OutRedirector = { "OutRedirector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetRedirectorList_Parms, OutRedirector), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_OutRedirector_Inner = { "OutRedirector", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths = { "InFilterPackagePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetRedirectorList_Parms, InFilterPackagePaths), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths_Inner = { "InFilterPackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_OutRedirector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_OutRedirector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::NewProp_InFilterPackagePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetRedirectorList", sizeof(FLibAssetManageHelperEx_eventGetRedirectorList_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics
	{
		struct FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms
		{
			FString InLongPackageName;
			FAssetDetail OutAssetDetail;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAssetDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLongPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_OutAssetDetail = { "OutAssetDetail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms, OutAssetDetail), Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_InLongPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_InLongPackageName = { "InLongPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms, InLongPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_InLongPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_InLongPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_OutAssetDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::NewProp_InLongPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "GetSpecifyAssetDetail", sizeof(FLibAssetManageHelperEx_eventGetSpecifyAssetDetail_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics
	{
		struct FLibAssetManageHelperEx_eventIsValidPlatform_Parms
		{
			FString PlatformName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventIsValidPlatform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventIsValidPlatform_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_PlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventIsValidPlatform_Parms, PlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_PlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_PlatformName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::NewProp_PlatformName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "IsValidPlatform", sizeof(FLibAssetManageHelperEx_eventIsValidPlatform_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics
	{
		struct FLibAssetManageHelperEx_eventLoadFileToString_Parms
		{
			FString InFile;
			FString OutString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventLoadFileToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventLoadFileToString_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventLoadFileToString_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventLoadFileToString_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_OutString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "LoadFileToString", sizeof(FLibAssetManageHelperEx_eventLoadFileToString_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics
	{
		struct FLibAssetManageHelperEx_eventModuleIsEnabled_Parms
		{
			FString InModuleName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventModuleIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventModuleIsEnabled_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_InModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_InModuleName = { "InModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventModuleIsEnabled_Parms, InModuleName), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_InModuleName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_InModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::NewProp_InModuleName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "ModuleIsEnabled", sizeof(FLibAssetManageHelperEx_eventModuleIsEnabled_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics
	{
		struct FLibAssetManageHelperEx_eventSaveStringToFile_Parms
		{
			FString InFile;
			FString InString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventSaveStringToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventSaveStringToFile_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSaveStringToFile_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSaveStringToFile_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManagerEx" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "SaveStringToFile", sizeof(FLibAssetManageHelperEx_eventSaveStringToFile_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics
	{
		struct FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms
		{
			FAssetDependenciesInfo InAssetDependencies;
			FString OutJsonStr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutJsonStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetDependencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms), &Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_OutJsonStr = { "OutJsonStr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms, OutJsonStr), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_InAssetDependencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_InAssetDependencies = { "InAssetDependencies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms, InAssetDependencies), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_InAssetDependencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_InAssetDependencies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_OutJsonStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::NewProp_InAssetDependencies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
		{ "ToolTip", "TOOLs Set\n// serialize asset dependencies to json string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "SerializeAssetDependenciesToJson", sizeof(FLibAssetManageHelperEx_eventSerializeAssetDependenciesToJson_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics
	{
		struct FLibAssetManageHelperEx_eventSerializeAssetDetialArrayToString_Parms
		{
			TArray<FAssetDetail> InAssetDetialList;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetDetialList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAssetDetialList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAssetDetialList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSerializeAssetDetialArrayToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList = { "InAssetDetialList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLibAssetManageHelperEx_eventSerializeAssetDetialArrayToString_Parms, InAssetDetialList), METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList_Inner = { "InAssetDetialList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::NewProp_InAssetDetialList_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|AssetManager" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFLibAssetManageHelperEx, nullptr, "SerializeAssetDetialArrayToString", sizeof(FLibAssetManageHelperEx_eventSerializeAssetDetialArrayToString_Parms), Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFLibAssetManageHelperEx_NoRegister()
	{
		return UFLibAssetManageHelperEx::StaticClass();
	}
	struct Z_Construct_UClass_UFLibAssetManageHelperEx_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEx,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetDependencies, "CombineAssetDependencies" }, // 910809433
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineAssetsDetailAsFAssetDepenInfo, "CombineAssetsDetailAsFAssetDepenInfo" }, // 4019726824
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_CombineCookedAssetCommand, "CombineCookedAssetCommand" }, // 485637442
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvAbsToVirtualPath, "ConvAbsToVirtualPath" }, // 1081068957
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToCookedPath, "ConvLongPackageNameToCookedPath" }, // 484482460
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvLongPackageNameToPackagePath, "ConvLongPackageNameToPackagePath" }, // 193493296
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvPackagePathToLongPackageName, "ConvPackagePathToLongPackageName" }, // 30513296
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvRelativeDirToAbsDir, "ConvRelativeDirToAbsDir" }, // 996381143
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ConvVirtualToAbsPath, "ConvVirtualToAbsPath" }, // 1268419747
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_DeserializeAssetDependencies, "DeserializeAssetDependencies" }, // 1244622635
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ExportCookPakCommandToFile, "ExportCookPakCommandToFile" }, // 4105054384
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssets, "FilterNoRefAssets" }, // 1564138340
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_FilterNoRefAssetsWithIgnoreFilter, "FilterNoRefAssetsWithIgnoreFilter" }, // 3504613812
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_FindFilesRecursive, "FindFilesRecursive" }, // 855668362
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllEnabledModuleName, "GetAllEnabledModuleName" }, // 3388193590
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAllTargetPlatform, "GetAllTargetPlatform" }, // 4151095661
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencies, "GetAssetDependencies" }, // 704411448
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependenciesForAssetDetail, "GetAssetDependenciesForAssetDetail" }, // 3319818061
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependency, "GetAssetDependency" }, // 4197900835
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetDependencyByDetail, "GetAssetDependencyByDetail" }, // 707998175
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependencies, "GetAssetListDependencies" }, // 3983201258
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetListDependenciesForAssetDetail, "GetAssetListDependenciesForAssetDetail" }, // 1331497875
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetNameFromPackagePath, "GetAssetNameFromPackagePath" }, // 806463956
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetPackageGUID, "GetAssetPackageGUID" }, // 1992114367
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetReferenceEx, "GetAssetReferenceEx" }, // 2825870944
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetAssetsList, "GetAssetsList" }, // 1289923041
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetEnableModuleAbsDir, "GetEnableModuleAbsDir" }, // 3060955296
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetLongPackageNameFromPackagePath, "GetLongPackageNameFromPackagePath" }, // 1421604480
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleAssetsList, "GetModuleAssetsList" }, // 1762721179
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetModuleNameByRelativePath, "GetModuleNameByRelativePath" }, // 2247969556
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetPluginModuleAbsDir, "GetPluginModuleAbsDir" }, // 2693267532
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetRedirectorList, "GetRedirectorList" }, // 3839804680
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_GetSpecifyAssetDetail, "GetSpecifyAssetDetail" }, // 3832033117
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_IsValidPlatform, "IsValidPlatform" }, // 3838649372
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_LoadFileToString, "LoadFileToString" }, // 2760435856
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_ModuleIsEnabled, "ModuleIsEnabled" }, // 2685003615
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_SaveStringToFile, "SaveStringToFile" }, // 2478020199
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDependenciesToJson, "SerializeAssetDependenciesToJson" }, // 67157011
		{ &Z_Construct_UFunction_UFLibAssetManageHelperEx_SerializeAssetDetialArrayToString, "SerializeAssetDetialArrayToString" }, // 1953558226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Flib/FLibAssetManageHelperEx.h" },
		{ "ModuleRelativePath", "Public/Flib/FLibAssetManageHelperEx.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFLibAssetManageHelperEx>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::ClassParams = {
		&UFLibAssetManageHelperEx::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFLibAssetManageHelperEx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFLibAssetManageHelperEx_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFLibAssetManageHelperEx, 2712289991);
	template<> ASSETMANAGEREX_API UClass* StaticClass<UFLibAssetManageHelperEx>()
	{
		return UFLibAssetManageHelperEx::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFLibAssetManageHelperEx(Z_Construct_UClass_UFLibAssetManageHelperEx, &UFLibAssetManageHelperEx::StaticClass, TEXT("/Script/AssetManagerEx"), TEXT("UFLibAssetManageHelperEx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFLibAssetManageHelperEx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

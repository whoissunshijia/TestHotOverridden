// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FlibPatchParserHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlibPatchParserHelper() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibPatchParserHelper_NoRegister();
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibPatchParserHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHotPatcherVersion();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets();
	ASSETMANAGEREX_API UScriptStruct* Z_Construct_UScriptStruct_FAssetDependenciesInfo();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPakFileInfo();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString();
// End Cross Module References
	void UFlibPatchParserHelper::StaticRegisterNativesUFlibPatchParserHelper()
	{
		UClass* Class = UFlibPatchParserHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeserializeHotPatcherVersionFromString", &UFlibPatchParserHelper::execDeserializeHotPatcherVersionFromString },
			{ "DiffVersionAssets", &UFlibPatchParserHelper::execDiffVersionAssets },
			{ "DiffVersionExFiles", &UFlibPatchParserHelper::execDiffVersionExFiles },
			{ "GetAvailableMaps", &UFlibPatchParserHelper::execGetAvailableMaps },
			{ "GetCookedAssetRegistryFiles", &UFlibPatchParserHelper::execGetCookedAssetRegistryFiles },
			{ "GetCookedGlobalShaderCacheFiles", &UFlibPatchParserHelper::execGetCookedGlobalShaderCacheFiles },
			{ "GetCookedShaderBytecodeFiles", &UFlibPatchParserHelper::execGetCookedShaderBytecodeFiles },
			{ "GetEnabledPluginConfigs", &UFlibPatchParserHelper::execGetEnabledPluginConfigs },
			{ "GetEngineConfigs", &UFlibPatchParserHelper::execGetEngineConfigs },
			{ "GetIniConfigs", &UFlibPatchParserHelper::execGetIniConfigs },
			{ "GetPakFileInfo", &UFlibPatchParserHelper::execGetPakFileInfo },
			{ "GetProjectIniFiles", &UFlibPatchParserHelper::execGetProjectIniFiles },
			{ "GetProjectName", &UFlibPatchParserHelper::execGetProjectName },
			{ "GetUE4CmdBinary", &UFlibPatchParserHelper::execGetUE4CmdBinary },
			{ "GetUnrealPakBinary", &UFlibPatchParserHelper::execGetUnrealPakBinary },
			{ "HashStringWithSHA1", &UFlibPatchParserHelper::execHashStringWithSHA1 },
			{ "ReloadShaderbytecode", &UFlibPatchParserHelper::execReloadShaderbytecode },
			{ "SerializeDiffAssetsInfomationToString", &UFlibPatchParserHelper::execSerializeDiffAssetsInfomationToString },
			{ "SerializeDiffExternalFilesInfomationToString", &UFlibPatchParserHelper::execSerializeDiffExternalFilesInfomationToString },
			{ "SerializeHotPatcherVersionToString", &UFlibPatchParserHelper::execSerializeHotPatcherVersionToString },
			{ "SerializePakFileInfoToJsonString", &UFlibPatchParserHelper::execSerializePakFileInfoToJsonString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics
	{
		struct FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms
		{
			FString InStringContent;
			FHotPatcherVersion OutVersion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStringContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStringContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_OutVersion = { "OutVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms, OutVersion), Z_Construct_UScriptStruct_FHotPatcherVersion, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_InStringContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_InStringContent = { "InStringContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms, InStringContent), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_InStringContent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_InStringContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_OutVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::NewProp_InStringContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "DeserializeHotPatcherVersionFromString", sizeof(FlibPatchParserHelper_eventDeserializeHotPatcherVersionFromString_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics
	{
		struct FlibPatchParserHelper_eventDiffVersionAssets_Parms
		{
			FAssetDependenciesInfo InNewVersion;
			FAssetDependenciesInfo InBaseVersion;
			FAssetDependenciesInfo OutAddAsset;
			FAssetDependenciesInfo OutModifyAsset;
			FAssetDependenciesInfo OutDeleteAsset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDeleteAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutModifyAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAddAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBaseVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNewVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNewVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventDiffVersionAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventDiffVersionAssets_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutDeleteAsset = { "OutDeleteAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionAssets_Parms, OutDeleteAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutModifyAsset = { "OutModifyAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionAssets_Parms, OutModifyAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutAddAsset = { "OutAddAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionAssets_Parms, OutAddAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InBaseVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InBaseVersion = { "InBaseVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionAssets_Parms, InBaseVersion), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InBaseVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InBaseVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InNewVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InNewVersion = { "InNewVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionAssets_Parms, InNewVersion), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InNewVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InNewVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutDeleteAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutModifyAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_OutAddAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InBaseVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::NewProp_InNewVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "DiffVersionAssets", sizeof(FlibPatchParserHelper_eventDiffVersionAssets_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics
	{
		struct FlibPatchParserHelper_eventDiffVersionExFiles_Parms
		{
			FHotPatcherVersion InNewVersion;
			FHotPatcherVersion InBaseVersion;
			TArray<FExternAssetFileInfo> OutAddFiles;
			TArray<FExternAssetFileInfo> OutModifyFiles;
			TArray<FExternAssetFileInfo> OutDeleteFiles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDeleteFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDeleteFiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutModifyFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutModifyFiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAddFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAddFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBaseVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBaseVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InNewVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNewVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventDiffVersionExFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventDiffVersionExFiles_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutDeleteFiles = { "OutDeleteFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionExFiles_Parms, OutDeleteFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutDeleteFiles_Inner = { "OutDeleteFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutModifyFiles = { "OutModifyFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionExFiles_Parms, OutModifyFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutModifyFiles_Inner = { "OutModifyFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutAddFiles = { "OutAddFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionExFiles_Parms, OutAddFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutAddFiles_Inner = { "OutAddFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InBaseVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InBaseVersion = { "InBaseVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionExFiles_Parms, InBaseVersion), Z_Construct_UScriptStruct_FHotPatcherVersion, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InBaseVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InBaseVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InNewVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InNewVersion = { "InNewVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventDiffVersionExFiles_Parms, InNewVersion), Z_Construct_UScriptStruct_FHotPatcherVersion, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InNewVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InNewVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutDeleteFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutDeleteFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutModifyFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutModifyFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutAddFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_OutAddFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InBaseVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::NewProp_InNewVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "DiffVersionExFiles", sizeof(FlibPatchParserHelper_eventDiffVersionExFiles_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics
	{
		struct FlibPatchParserHelper_eventGetAvailableMaps_Parms
		{
			FString GameName;
			bool IncludeEngineMaps;
			bool IncludePluginMaps;
			bool Sorted;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_Sorted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sorted;
		static void NewProp_IncludePluginMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludePluginMaps;
		static void NewProp_IncludeEngineMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeEngineMaps;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetAvailableMaps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_Sorted_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetAvailableMaps_Parms*)Obj)->Sorted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_Sorted = { "Sorted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetAvailableMaps_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_Sorted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludePluginMaps_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetAvailableMaps_Parms*)Obj)->IncludePluginMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludePluginMaps = { "IncludePluginMaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetAvailableMaps_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludePluginMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludeEngineMaps_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetAvailableMaps_Parms*)Obj)->IncludeEngineMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludeEngineMaps = { "IncludeEngineMaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetAvailableMaps_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludeEngineMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetAvailableMaps_Parms, GameName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_Sorted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludePluginMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_IncludeEngineMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::NewProp_GameName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetAvailableMaps", sizeof(FlibPatchParserHelper_eventGetAvailableMaps_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics
	{
		struct FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms
		{
			FString InProjectAbsDir;
			FString InProjectName;
			FString InPlatformName;
			FString OutFiles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProjectName;
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
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms, OutFiles), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectName = { "InProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms, InProjectName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectAbsDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectAbsDir = { "InProjectAbsDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms, InProjectAbsDir), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectAbsDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectAbsDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_OutFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::NewProp_InProjectAbsDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
		{ "ToolTip", "Cooked/PLATFORN_NAME/PROJECT_NAME/AssetRegistry.bin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetCookedAssetRegistryFiles", sizeof(FlibPatchParserHelper_eventGetCookedAssetRegistryFiles_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics
	{
		struct FlibPatchParserHelper_eventGetCookedGlobalShaderCacheFiles_Parms
		{
			FString InProjectDir;
			FString InPlatformName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProjectDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProjectDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedGlobalShaderCacheFiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedGlobalShaderCacheFiles_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InProjectDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InProjectDir = { "InProjectDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedGlobalShaderCacheFiles_Parms, InProjectDir), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InProjectDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InProjectDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::NewProp_InProjectDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
		{ "ToolTip", "Cooked/PLATFORM_NAME/Engine/GlobalShaderCache-*.bin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetCookedGlobalShaderCacheFiles", sizeof(FlibPatchParserHelper_eventGetCookedGlobalShaderCacheFiles_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics
	{
		struct FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms
		{
			FString InProjectAbsDir;
			FString InProjectName;
			FString InPlatformName;
			bool InGalobalBytecode;
			bool InProjectBytecode;
			TArray<FString> OutFiles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
		static void NewProp_InProjectBytecode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InProjectBytecode;
		static void NewProp_InGalobalBytecode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGalobalBytecode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProjectName;
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
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms, OutFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectBytecode_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms*)Obj)->InProjectBytecode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectBytecode = { "InProjectBytecode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectBytecode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InGalobalBytecode_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms*)Obj)->InGalobalBytecode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InGalobalBytecode = { "InGalobalBytecode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InGalobalBytecode_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectName = { "InProjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms, InProjectName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectAbsDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectAbsDir = { "InProjectAbsDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms, InProjectAbsDir), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectAbsDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectAbsDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_OutFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_OutFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectBytecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InGalobalBytecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::NewProp_InProjectAbsDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
		{ "ToolTip", "Cooked/PLATFORN_NAME/PROJECT_NAME/Content/ShaderArchive-*.ushaderbytecode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetCookedShaderBytecodeFiles", sizeof(FlibPatchParserHelper_eventGetCookedShaderBytecodeFiles_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics
	{
		struct FlibPatchParserHelper_eventGetEnabledPluginConfigs_Parms
		{
			FString InPlatformName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetEnabledPluginConfigs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetEnabledPluginConfigs_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_InPlatformName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::NewProp_InPlatformName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetEnabledPluginConfigs", sizeof(FlibPatchParserHelper_eventGetEnabledPluginConfigs_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics
	{
		struct FlibPatchParserHelper_eventGetEngineConfigs_Parms
		{
			FString InPlatformName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetEngineConfigs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetEngineConfigs_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_InPlatformName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::NewProp_InPlatformName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetEngineConfigs", sizeof(FlibPatchParserHelper_eventGetEngineConfigs_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics
	{
		struct FlibPatchParserHelper_eventGetIniConfigs_Parms
		{
			FString InSearchDir;
			FString InPlatformName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSearchDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSearchDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetIniConfigs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetIniConfigs_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InSearchDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InSearchDir = { "InSearchDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetIniConfigs_Parms, InSearchDir), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InSearchDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InSearchDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::NewProp_InSearchDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetIniConfigs", sizeof(FlibPatchParserHelper_eventGetIniConfigs_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics
	{
		struct FlibPatchParserHelper_eventGetPakFileInfo_Parms
		{
			FString InFile;
			FPakFileInfo OutFileInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFileInfo;
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
	void Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventGetPakFileInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventGetPakFileInfo_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_OutFileInfo = { "OutFileInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetPakFileInfo_Parms, OutFileInfo), Z_Construct_UScriptStruct_FPakFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetPakFileInfo_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_OutFileInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetPakFileInfo", sizeof(FlibPatchParserHelper_eventGetPakFileInfo_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics
	{
		struct FlibPatchParserHelper_eventGetProjectIniFiles_Parms
		{
			FString InProjectDir;
			FString InPlatformName;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProjectDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InProjectDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetProjectIniFiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InPlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InPlatformName = { "InPlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetProjectIniFiles_Parms, InPlatformName), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InPlatformName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InPlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InProjectDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InProjectDir = { "InProjectDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetProjectIniFiles_Parms, InProjectDir), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InProjectDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InProjectDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InPlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::NewProp_InProjectDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
		{ "ToolTip", "return abslute path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetProjectIniFiles", sizeof(FlibPatchParserHelper_eventGetProjectIniFiles_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics
	{
		struct FlibPatchParserHelper_eventGetProjectName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetProjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetProjectName", sizeof(FlibPatchParserHelper_eventGetProjectName_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics
	{
		struct FlibPatchParserHelper_eventGetUE4CmdBinary_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetUE4CmdBinary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetUE4CmdBinary", sizeof(FlibPatchParserHelper_eventGetUE4CmdBinary_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics
	{
		struct FlibPatchParserHelper_eventGetUnrealPakBinary_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventGetUnrealPakBinary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "GetUnrealPakBinary", sizeof(FlibPatchParserHelper_eventGetUnrealPakBinary_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics
	{
		struct FlibPatchParserHelper_eventHashStringWithSHA1_Parms
		{
			FString InString;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventHashStringWithSHA1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventHashStringWithSHA1_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_InString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "HashStringWithSHA1", sizeof(FlibPatchParserHelper_eventHashStringWithSHA1_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
		{ "ToolTip", "reload Global&Project shaderbytecode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "ReloadShaderbytecode", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics
	{
		struct FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms
		{
			FAssetDependenciesInfo InAddAsset;
			FAssetDependenciesInfo InModifyAsset;
			FAssetDependenciesInfo InDeleteAsset;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDeleteAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDeleteAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InModifyAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InModifyAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAddAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAddAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InDeleteAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InDeleteAsset = { "InDeleteAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms, InDeleteAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InDeleteAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InDeleteAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InModifyAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InModifyAsset = { "InModifyAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms, InModifyAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InModifyAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InModifyAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InAddAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InAddAsset = { "InAddAsset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms, InAddAsset), Z_Construct_UScriptStruct_FAssetDependenciesInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InAddAsset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InAddAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InDeleteAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InModifyAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::NewProp_InAddAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "SerializeDiffAssetsInfomationToString", sizeof(FlibPatchParserHelper_eventSerializeDiffAssetsInfomationToString_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics
	{
		struct FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms
		{
			TArray<FExternAssetFileInfo> InAddFiles;
			TArray<FExternAssetFileInfo> InModifyFiles;
			TArray<FExternAssetFileInfo> InDeleteFiles;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDeleteFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InDeleteFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDeleteFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InModifyFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InModifyFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InModifyFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAddFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAddFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAddFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles = { "InDeleteFiles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms, InDeleteFiles), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles_Inner = { "InDeleteFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles = { "InModifyFiles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms, InModifyFiles), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles_Inner = { "InModifyFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles = { "InAddFiles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms, InAddFiles), METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles_Inner = { "InAddFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InDeleteFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InModifyFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::NewProp_InAddFiles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "SerializeDiffExternalFilesInfomationToString", sizeof(FlibPatchParserHelper_eventSerializeDiffExternalFilesInfomationToString_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics
	{
		struct FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms
		{
			FHotPatcherVersion InVersion;
			FString OutResault;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutResault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_OutResault = { "OutResault", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms, OutResault), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_InVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_InVersion = { "InVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms, InVersion), Z_Construct_UScriptStruct_FHotPatcherVersion, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_InVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_InVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_OutResault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::NewProp_InVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "SerializeHotPatcherVersionToString", sizeof(FlibPatchParserHelper_eventSerializeHotPatcherVersionToString_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics
	{
		struct FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms
		{
			FPakFileInfo InFileInfo;
			FString OutJson;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFileInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms), &Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_OutJson = { "OutJson", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms, OutJson), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_InFileInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_InFileInfo = { "InFileInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms, InFileInfo), Z_Construct_UScriptStruct_FPakFileInfo, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_InFileInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_InFileInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_OutJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::NewProp_InFileInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatcher|Flib" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPatchParserHelper, nullptr, "SerializePakFileInfoToJsonString", sizeof(FlibPatchParserHelper_eventSerializePakFileInfoToJsonString_Parms), Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlibPatchParserHelper_NoRegister()
	{
		return UFlibPatchParserHelper::StaticClass();
	}
	struct Z_Construct_UClass_UFlibPatchParserHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlibPatchParserHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlibPatchParserHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_DeserializeHotPatcherVersionFromString, "DeserializeHotPatcherVersionFromString" }, // 3174761097
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionAssets, "DiffVersionAssets" }, // 793024395
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_DiffVersionExFiles, "DiffVersionExFiles" }, // 2873548296
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetAvailableMaps, "GetAvailableMaps" }, // 1520786827
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedAssetRegistryFiles, "GetCookedAssetRegistryFiles" }, // 1123944389
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles, "GetCookedGlobalShaderCacheFiles" }, // 3856239088
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetCookedShaderBytecodeFiles, "GetCookedShaderBytecodeFiles" }, // 2171813177
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetEnabledPluginConfigs, "GetEnabledPluginConfigs" }, // 1460691984
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetEngineConfigs, "GetEngineConfigs" }, // 1891539994
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetIniConfigs, "GetIniConfigs" }, // 3979820656
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetPakFileInfo, "GetPakFileInfo" }, // 1616121416
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectIniFiles, "GetProjectIniFiles" }, // 906908506
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetProjectName, "GetProjectName" }, // 1506872856
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetUE4CmdBinary, "GetUE4CmdBinary" }, // 2597905409
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_GetUnrealPakBinary, "GetUnrealPakBinary" }, // 2105726680
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_HashStringWithSHA1, "HashStringWithSHA1" }, // 1644085394
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_ReloadShaderbytecode, "ReloadShaderbytecode" }, // 2542544169
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffAssetsInfomationToString, "SerializeDiffAssetsInfomationToString" }, // 1269423418
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_SerializeDiffExternalFilesInfomationToString, "SerializeDiffExternalFilesInfomationToString" }, // 145096179
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_SerializeHotPatcherVersionToString, "SerializeHotPatcherVersionToString" }, // 4154867841
		{ &Z_Construct_UFunction_UFlibPatchParserHelper_SerializePakFileInfoToJsonString, "SerializePakFileInfoToJsonString" }, // 1880158833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlibPatchParserHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlibPatchParserHelper.h" },
		{ "ModuleRelativePath", "Public/FlibPatchParserHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlibPatchParserHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlibPatchParserHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlibPatchParserHelper_Statics::ClassParams = {
		&UFlibPatchParserHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlibPatchParserHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFlibPatchParserHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlibPatchParserHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlibPatchParserHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlibPatchParserHelper, 663272577);
	template<> HOTPATCHERRUNTIME_API UClass* StaticClass<UFlibPatchParserHelper>()
	{
		return UFlibPatchParserHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlibPatchParserHelper(Z_Construct_UClass_UFlibPatchParserHelper, &UFlibPatchParserHelper::StaticClass, TEXT("/Script/HotPatcherRuntime"), TEXT("UFlibPatchParserHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlibPatchParserHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

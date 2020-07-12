// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FChunkInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFChunkInfo() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UEnum* Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChunkAssetDescribe();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPakCommand();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPakInternalInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternDirectoryInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExternAssetFileInfo();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatcherSpecifyAsset();
	ASSETMANAGEREX_API UEnum* Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EMonolithicPathMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("EMonolithicPathMode"));
		}
		return Singleton;
	}
	template<> HOTPATCHERRUNTIME_API UEnum* StaticEnum<EMonolithicPathMode>()
	{
		return EMonolithicPathMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMonolithicPathMode(EMonolithicPathMode_StaticEnum, TEXT("/Script/HotPatcherRuntime"), TEXT("EMonolithicPathMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode_Hash() { return 1611442694U; }
	UEnum* Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMonolithicPathMode"), 0, Get_Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMonolithicPathMode::MountPath", (int64)EMonolithicPathMode::MountPath },
				{ "EMonolithicPathMode::PackagePath", (int64)EMonolithicPathMode::PackagePath },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FChunkInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
				nullptr,
				"EMonolithicPathMode",
				"EMonolithicPathMode",
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
class UScriptStruct* FChunkAssetDescribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FChunkAssetDescribe_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkAssetDescribe, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ChunkAssetDescribe"), sizeof(FChunkAssetDescribe), Get_Z_Construct_UScriptStruct_FChunkAssetDescribe_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FChunkAssetDescribe>()
{
	return FChunkAssetDescribe::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkAssetDescribe(FChunkAssetDescribe::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ChunkAssetDescribe"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkAssetDescribe
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkAssetDescribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkAssetDescribe")),new UScriptStruct::TCppStructOps<FChunkAssetDescribe>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkAssetDescribe;
	struct Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkAssetDescribe>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ChunkAssetDescribe",
		sizeof(FChunkAssetDescribe),
		alignof(FChunkAssetDescribe),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkAssetDescribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkAssetDescribe_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkAssetDescribe"), sizeof(FChunkAssetDescribe), Get_Z_Construct_UScriptStruct_FChunkAssetDescribe_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkAssetDescribe_Hash() { return 3712665921U; }
class UScriptStruct* FChunkPakCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FChunkPakCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPakCommand, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ChunkPakCommand"), sizeof(FChunkPakCommand), Get_Z_Construct_UScriptStruct_FChunkPakCommand_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FChunkPakCommand>()
{
	return FChunkPakCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkPakCommand(FChunkPakCommand::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ChunkPakCommand"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkPakCommand
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkPakCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkPakCommand")),new UScriptStruct::TCppStructOps<FChunkPakCommand>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkPakCommand;
	struct Z_Construct_UScriptStruct_FChunkPakCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPakCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkPakCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPakCommand>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkPakCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ChunkPakCommand",
		sizeof(FChunkPakCommand),
		alignof(FChunkPakCommand),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPakCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPakCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPakCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkPakCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkPakCommand"), sizeof(FChunkPakCommand), Get_Z_Construct_UScriptStruct_FChunkPakCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkPakCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkPakCommand_Hash() { return 700817982U; }
class UScriptStruct* FChunkInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FChunkInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ChunkInfo"), sizeof(FChunkInfo), Get_Z_Construct_UScriptStruct_FChunkInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FChunkInfo>()
{
	return FChunkInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkInfo(FChunkInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ChunkInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkInfo")),new UScriptStruct::TCppStructOps<FChunkInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFChunkInfo;
	struct Z_Construct_UScriptStruct_FChunkInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InternalFiles;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavePakCommands_MetaData[];
#endif
		static void NewProp_bSavePakCommands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavePakCommands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonolithicPathMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MonolithicPathMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MonolithicPathMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMonolithic_MetaData[];
#endif
		static void NewProp_bMonolithic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMonolithic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChunkName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_InternalFiles_MetaData[] = {
		{ "Category", "Internal" },
		{ "EditCondition", "!bMonolithic" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_InternalFiles = { "InternalFiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, InternalFiles), Z_Construct_UScriptStruct_FPakInternalInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_InternalFiles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_InternalFiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak_MetaData[] = {
		{ "Category", "Extern" },
		{ "EditCondition", "!bMonolithic" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, AddExternDirectoryToPak), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak_Inner = { "AddExternDirectoryToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternDirectoryInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak_MetaData[] = {
		{ "Category", "Extern" },
		{ "EditCondition", "!bMonolithic" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, AddExternFileToPak), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak_Inner = { "AddExternFileToPak", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExternAssetFileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, IncludeSpecifyAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets_Inner = { "IncludeSpecifyAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPatcherSpecifyAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "EditCondition", "bAnalysisFilterDependencies" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, AssetRegistryDependencyTypes), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_Inner = { "AssetRegistryDependencyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AssetManagerEx_EAssetRegistryDependencyTypeEx, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies_SetBit(void* Obj)
	{
		((FChunkInfo*)Obj)->bAnalysisFilterDependencies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies = { "bAnalysisFilterDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkInfo), &Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters_MetaData[] = {
		{ "Category", "Assets" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, AssetIgnoreFilters), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters_Inner = { "AssetIgnoreFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters_MetaData[] = {
		{ "Category", "Assets" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, AssetIncludeFilters), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters_Inner = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands_SetBit(void* Obj)
	{
		((FChunkInfo*)Obj)->bSavePakCommands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands = { "bSavePakCommands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkInfo), &Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "EditCondition", "bMonolithic" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode = { "MonolithicPathMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, MonolithicPathMode), Z_Construct_UEnum_HotPatcherRuntime_EMonolithicPathMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic_SetBit(void* Obj)
	{
		((FChunkInfo*)Obj)->bMonolithic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic = { "bMonolithic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChunkInfo), &Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_ChunkName_MetaData[] = {
		{ "Category", "ChunkInfo" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_ChunkName = { "ChunkName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChunkInfo, ChunkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_ChunkName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_ChunkName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_InternalFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternDirectoryToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AddExternFileToPak_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_IncludeSpecifyAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetRegistryDependencyTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bAnalysisFilterDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIgnoreFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_AssetIncludeFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bSavePakCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_MonolithicPathMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_bMonolithic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfo_Statics::NewProp_ChunkName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ChunkInfo",
		sizeof(FChunkInfo),
		alignof(FChunkInfo),
		Z_Construct_UScriptStruct_FChunkInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkInfo"), sizeof(FChunkInfo), Get_Z_Construct_UScriptStruct_FChunkInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkInfo_Hash() { return 2213856298U; }
class UScriptStruct* FPakInternalInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPakInternalInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPakInternalInfo, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("PakInternalInfo"), sizeof(FPakInternalInfo), Get_Z_Construct_UScriptStruct_FPakInternalInfo_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FPakInternalInfo>()
{
	return FPakInternalInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPakInternalInfo(FPakInternalInfo::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("PakInternalInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakInternalInfo
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakInternalInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PakInternalInfo")),new UScriptStruct::TCppStructOps<FPakInternalInfo>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPakInternalInfo;
	struct Z_Construct_UScriptStruct_FPakInternalInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
		{ "ToolTip", "\xe5\xbc\x95\xe6\x93\x8e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\x92\x8cini\xe7\xad\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPakInternalInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni_MetaData[] = {
		{ "Category", "Ini" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludeProjectIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni = { "bIncludeProjectIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni_MetaData[] = {
		{ "Category", "Ini" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludePluginIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni = { "bIncludePluginIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni_MetaData[] = {
		{ "Category", "Ini" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludeEngineIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni = { "bIncludeEngineIni", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode_MetaData[] = {
		{ "Category", "Cooked" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludeShaderBytecode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode = { "bIncludeShaderBytecode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache_MetaData[] = {
		{ "Category", "Cooked" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludeGlobalShaderCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache = { "bIncludeGlobalShaderCache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry_MetaData[] = {
		{ "Category", "Cooked" },
		{ "ModuleRelativePath", "Public/FChunkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry_SetBit(void* Obj)
	{
		((FPakInternalInfo*)Obj)->bIncludeAssetRegistry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry = { "bIncludeAssetRegistry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPakInternalInfo), &Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPakInternalInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeProjectIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludePluginIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeEngineIni,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeShaderBytecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeGlobalShaderCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakInternalInfo_Statics::NewProp_bIncludeAssetRegistry,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPakInternalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"PakInternalInfo",
		sizeof(FPakInternalInfo),
		alignof(FPakInternalInfo),
		Z_Construct_UScriptStruct_FPakInternalInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPakInternalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPakInternalInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPakInternalInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PakInternalInfo"), sizeof(FPakInternalInfo), Get_Z_Construct_UScriptStruct_FPakInternalInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPakInternalInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPakInternalInfo_Hash() { return 2434552657U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

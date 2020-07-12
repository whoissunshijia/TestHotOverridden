// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FlibPakHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlibPakHelper() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibPakHelper_NoRegister();
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibPakHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPakVersion();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_ExecMountPak();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_MountPak();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibPakHelper_UnMountPak();
// End Cross Module References
	void UFlibPakHelper::StaticRegisterNativesUFlibPakHelper()
	{
		UClass* Class = UFlibPakHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFileByBytes", &UFlibPakHelper::execCreateFileByBytes },
			{ "DeserializeStringToPakVersion", &UFlibPakHelper::execDeserializeStringToPakVersion },
			{ "ExecMountPak", &UFlibPakHelper::execExecMountPak },
			{ "GetAllMountedPaks", &UFlibPakHelper::execGetAllMountedPaks },
			{ "LoadFilesByPak", &UFlibPakHelper::execLoadFilesByPak },
			{ "LoadVersionInfoByPak", &UFlibPakHelper::execLoadVersionInfoByPak },
			{ "MountPak", &UFlibPakHelper::execMountPak },
			{ "ScanAllVersionDescribleFiles", &UFlibPakHelper::execScanAllVersionDescribleFiles },
			{ "ScanExtenFilesInDirectory", &UFlibPakHelper::execScanExtenFilesInDirectory },
			{ "ScanExtenPakFiles", &UFlibPakHelper::execScanExtenPakFiles },
			{ "ScanPlatformDirectory", &UFlibPakHelper::execScanPlatformDirectory },
			{ "SerializePakVersionToString", &UFlibPakHelper::execSerializePakVersionToString },
			{ "UnMountPak", &UFlibPakHelper::execUnMountPak },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics
	{
		struct FlibPakHelper_eventCreateFileByBytes_Parms
		{
			FString InFile;
			TArray<uint8> InBytes;
			int32 InWriteFlag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWriteFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
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
	void Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventCreateFileByBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventCreateFileByBytes_Parms), &Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InWriteFlag = { "InWriteFlag", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventCreateFileByBytes_Parms, InWriteFlag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventCreateFileByBytes_Parms, InBytes), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventCreateFileByBytes_Parms, InFile), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InWriteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::NewProp_InFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InWriteFlag" },
		{ "Category", "GWorld|Flib|Pak" },
		{ "CPP_Default_InWriteFlag", "0" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "CreateFileByBytes", sizeof(FlibPakHelper_eventCreateFileByBytes_Parms), Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics
	{
		struct FlibPakHelper_eventDeserializeStringToPakVersion_Parms
		{
			FString InString;
			FPakVersion OutPakVersion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPakVersion;
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
	void Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventDeserializeStringToPakVersion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventDeserializeStringToPakVersion_Parms), &Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_OutPakVersion = { "OutPakVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventDeserializeStringToPakVersion_Parms, OutPakVersion), Z_Construct_UScriptStruct_FPakVersion, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventDeserializeStringToPakVersion_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_InString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_OutPakVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "DeserializeStringToPakVersion", sizeof(FlibPakHelper_eventDeserializeStringToPakVersion_Parms), Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics
	{
		struct FlibPakHelper_eventExecMountPak_Parms
		{
			FString InPakPath;
			int32 InPakOrder;
			FString InMountPoint;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InMountPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPakOrder;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPakPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InMountPoint = { "InMountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventExecMountPak_Parms, InMountPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InPakOrder = { "InPakOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventExecMountPak_Parms, InPakOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InPakPath = { "InPakPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventExecMountPak_Parms, InPakPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InMountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InPakOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::NewProp_InPakPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_InMountPoint", "" },
		{ "CPP_Default_InPakOrder", "0" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "ExecMountPak", sizeof(FlibPakHelper_eventExecMountPak_Parms), Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_ExecMountPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_ExecMountPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics
	{
		struct FlibPakHelper_eventGetAllMountedPaks_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventGetAllMountedPaks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "GetAllMountedPaks", sizeof(FlibPakHelper_eventGetAllMountedPaks_Parms), Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics
	{
		struct FlibPakHelper_eventLoadFilesByPak_Parms
		{
			FString InPakFile;
			TArray<FString> OutFiles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPakFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPakFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventLoadFilesByPak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventLoadFilesByPak_Parms), &Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventLoadFilesByPak_Parms, OutFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_InPakFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_InPakFile = { "InPakFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventLoadFilesByPak_Parms, InPakFile), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_InPakFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_InPakFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_OutFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_OutFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::NewProp_InPakFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "LoadFilesByPak", sizeof(FlibPakHelper_eventLoadFilesByPak_Parms), Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics
	{
		struct FlibPakHelper_eventLoadVersionInfoByPak_Parms
		{
			FString InPakFile;
			FPakVersion OutVersion;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPakFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPakFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventLoadVersionInfoByPak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventLoadVersionInfoByPak_Parms), &Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_OutVersion = { "OutVersion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventLoadVersionInfoByPak_Parms, OutVersion), Z_Construct_UScriptStruct_FPakVersion, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_InPakFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_InPakFile = { "InPakFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventLoadVersionInfoByPak_Parms, InPakFile), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_InPakFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_InPakFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_OutVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::NewProp_InPakFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "LoadVersionInfoByPak", sizeof(FlibPakHelper_eventLoadVersionInfoByPak_Parms), Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics
	{
		struct FlibPakHelper_eventMountPak_Parms
		{
			FString PakPath;
			int32 PakOrder;
			FString InMountPoint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InMountPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PakOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventMountPak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventMountPak_Parms), &Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_InMountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_InMountPoint = { "InMountPoint", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventMountPak_Parms, InMountPoint), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_InMountPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_InMountPoint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakOrder = { "PakOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventMountPak_Parms, PakOrder), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakPath = { "PakPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventMountPak_Parms, PakPath), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_InMountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::NewProp_PakPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InMountPoint" },
		{ "Category", "GWorld|Flib|Pak" },
		{ "CPP_Default_InMountPoint", "" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "MountPak", sizeof(FlibPakHelper_eventMountPak_Parms), Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_MountPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_MountPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics
	{
		struct FlibPakHelper_eventScanAllVersionDescribleFiles_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanAllVersionDescribleFiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
		{ "ToolTip", "search in FPaths::ProjectSavedDir()/TEXT(\"Extension/Versions\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "ScanAllVersionDescribleFiles", sizeof(FlibPakHelper_eventScanAllVersionDescribleFiles_Parms), Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics
	{
		struct FlibPakHelper_eventScanExtenFilesInDirectory_Parms
		{
			FString InRelativePath;
			FString InExtenPostfix;
			bool InRecursively;
			TArray<FString> OutFiles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
		static void NewProp_InRecursively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InRecursively;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InExtenPostfix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InExtenPostfix;
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
	void Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanExtenFilesInDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanExtenFilesInDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanExtenFilesInDirectory_Parms, OutFiles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRecursively_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanExtenFilesInDirectory_Parms*)Obj)->InRecursively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRecursively = { "InRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanExtenFilesInDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InExtenPostfix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InExtenPostfix = { "InExtenPostfix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanExtenFilesInDirectory_Parms, InExtenPostfix), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InExtenPostfix_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InExtenPostfix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRelativePath = { "InRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanExtenFilesInDirectory_Parms, InRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRelativePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRelativePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_OutFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_OutFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRecursively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InExtenPostfix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::NewProp_InRelativePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
		{ "ToolTip", "secrah specify extension file type file in directory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "ScanExtenFilesInDirectory", sizeof(FlibPakHelper_eventScanExtenFilesInDirectory_Parms), Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics
	{
		struct FlibPakHelper_eventScanExtenPakFiles_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanExtenPakFiles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
		{ "ToolTip", "Additional Pak files in ../../../PROJECT_NAME/Saved/ExtenPaks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "ScanExtenPakFiles", sizeof(FlibPakHelper_eventScanExtenPakFiles_Parms), Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics
	{
		struct FlibPakHelper_eventScanPlatformDirectory_Parms
		{
			FString InRelativePath;
			bool bIncludeFile;
			bool bIncludeDir;
			bool bRecursively;
			TArray<FString> OutResault;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutResault;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutResault_Inner;
		static void NewProp_bRecursively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursively;
		static void NewProp_bIncludeDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeDir;
		static void NewProp_bIncludeFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeFile;
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
	void Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanPlatformDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanPlatformDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_OutResault = { "OutResault", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanPlatformDirectory_Parms, OutResault), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_OutResault_Inner = { "OutResault", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bRecursively_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanPlatformDirectory_Parms*)Obj)->bRecursively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bRecursively = { "bRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanPlatformDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeDir_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanPlatformDirectory_Parms*)Obj)->bIncludeDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeDir = { "bIncludeDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanPlatformDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeFile_SetBit(void* Obj)
	{
		((FlibPakHelper_eventScanPlatformDirectory_Parms*)Obj)->bIncludeFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeFile = { "bIncludeFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventScanPlatformDirectory_Parms), &Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeFile_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_InRelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_InRelativePath = { "InRelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventScanPlatformDirectory_Parms, InRelativePath), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_InRelativePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_InRelativePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_OutResault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_OutResault_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bRecursively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_bIncludeFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::NewProp_InRelativePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "ScanPlatformDirectory", sizeof(FlibPakHelper_eventScanPlatformDirectory_Parms), Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics
	{
		struct FlibPakHelper_eventSerializePakVersionToString_Parms
		{
			FPakVersion InPakVersion;
			FString OutString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPakVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPakVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventSerializePakVersionToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventSerializePakVersionToString_Parms), &Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventSerializePakVersionToString_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_InPakVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_InPakVersion = { "InPakVersion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventSerializePakVersionToString_Parms, InPakVersion), Z_Construct_UScriptStruct_FPakVersion, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_InPakVersion_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_InPakVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_OutString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::NewProp_InPakVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "SerializePakVersionToString", sizeof(FlibPakHelper_eventSerializePakVersionToString_Parms), Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics
	{
		struct FlibPakHelper_eventUnMountPak_Parms
		{
			FString PakPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlibPakHelper_eventUnMountPak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlibPakHelper_eventUnMountPak_Parms), &Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_PakPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_PakPath = { "PakPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibPakHelper_eventUnMountPak_Parms, PakPath), METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_PakPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_PakPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::NewProp_PakPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InMountPoint" },
		{ "Category", "GWorld|Flib|Pak" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibPakHelper, nullptr, "UnMountPak", sizeof(FlibPakHelper_eventUnMountPak_Parms), Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibPakHelper_UnMountPak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibPakHelper_UnMountPak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlibPakHelper_NoRegister()
	{
		return UFlibPakHelper::StaticClass();
	}
	struct Z_Construct_UClass_UFlibPakHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlibPakHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlibPakHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlibPakHelper_CreateFileByBytes, "CreateFileByBytes" }, // 2345710098
		{ &Z_Construct_UFunction_UFlibPakHelper_DeserializeStringToPakVersion, "DeserializeStringToPakVersion" }, // 167765817
		{ &Z_Construct_UFunction_UFlibPakHelper_ExecMountPak, "ExecMountPak" }, // 2715372060
		{ &Z_Construct_UFunction_UFlibPakHelper_GetAllMountedPaks, "GetAllMountedPaks" }, // 101390238
		{ &Z_Construct_UFunction_UFlibPakHelper_LoadFilesByPak, "LoadFilesByPak" }, // 579373278
		{ &Z_Construct_UFunction_UFlibPakHelper_LoadVersionInfoByPak, "LoadVersionInfoByPak" }, // 2038294827
		{ &Z_Construct_UFunction_UFlibPakHelper_MountPak, "MountPak" }, // 2011351777
		{ &Z_Construct_UFunction_UFlibPakHelper_ScanAllVersionDescribleFiles, "ScanAllVersionDescribleFiles" }, // 1270622903
		{ &Z_Construct_UFunction_UFlibPakHelper_ScanExtenFilesInDirectory, "ScanExtenFilesInDirectory" }, // 1598320907
		{ &Z_Construct_UFunction_UFlibPakHelper_ScanExtenPakFiles, "ScanExtenPakFiles" }, // 3462546187
		{ &Z_Construct_UFunction_UFlibPakHelper_ScanPlatformDirectory, "ScanPlatformDirectory" }, // 2379099142
		{ &Z_Construct_UFunction_UFlibPakHelper_SerializePakVersionToString, "SerializePakVersionToString" }, // 2536478795
		{ &Z_Construct_UFunction_UFlibPakHelper_UnMountPak, "UnMountPak" }, // 1342284548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlibPakHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlibPakHelper.h" },
		{ "ModuleRelativePath", "Public/FlibPakHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlibPakHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlibPakHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlibPakHelper_Statics::ClassParams = {
		&UFlibPakHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlibPakHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFlibPakHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlibPakHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlibPakHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlibPakHelper, 2245158414);
	template<> HOTPATCHERRUNTIME_API UClass* StaticClass<UFlibPakHelper>()
	{
		return UFlibPakHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlibPakHelper(Z_Construct_UClass_UFlibPakHelper, &UFlibPakHelper::StaticClass, TEXT("/Script/HotPatcherRuntime"), TEXT("UFlibPakHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlibPakHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

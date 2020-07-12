// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPakVersion;
#ifdef HOTPATCHERRUNTIME_FlibPakHelper_generated_h
#error "FlibPakHelper.generated.h already included, missing '#pragma once' in FlibPakHelper.h"
#endif
#define HOTPATCHERRUNTIME_FlibPakHelper_generated_h

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllMountedPaks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::GetAllMountedPaks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadVersionInfoByPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakFile); \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_OutVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::LoadVersionInfoByPak(Z_Param_InPakFile,Z_Param_Out_OutVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFilesByPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakFile); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::LoadFilesByPak(Z_Param_InPakFile,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanExtenPakFiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::ScanExtenPakFiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanAllVersionDescribleFiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::ScanAllVersionDescribleFiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanExtenFilesInDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InExtenPostfix); \
		P_GET_UBOOL(Z_Param_InRecursively); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::ScanExtenFilesInDirectory(Z_Param_InRelativePath,Z_Param_InExtenPostfix,Z_Param_InRecursively,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeStringToPakVersion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_OutPakVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::DeserializeStringToPakVersion(Z_Param_InString,Z_Param_Out_OutPakVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializePakVersionToString) \
	{ \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_InPakVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::SerializePakVersionToString(Z_Param_Out_InPakVersion,Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanPlatformDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_UBOOL(Z_Param_bIncludeFile); \
		P_GET_UBOOL(Z_Param_bIncludeDir); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutResault); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::ScanPlatformDirectory(Z_Param_InRelativePath,Z_Param_bIncludeFile,Z_Param_bIncludeDir,Z_Param_bRecursively,Z_Param_Out_OutResault); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFileByBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWriteFlag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::CreateFileByBytes(Z_Param_InFile,Z_Param_Out_InBytes,Z_Param_InWriteFlag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::UnMountPak(Z_Param_PakPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PakOrder); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMountPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::MountPak(Z_Param_PakPath,Z_Param_PakOrder,Z_Param_InMountPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakPath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPakOrder); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMountPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFlibPakHelper::ExecMountPak(Z_Param_InPakPath,Z_Param_InPakOrder,Z_Param_InMountPoint); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllMountedPaks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::GetAllMountedPaks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadVersionInfoByPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakFile); \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_OutVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::LoadVersionInfoByPak(Z_Param_InPakFile,Z_Param_Out_OutVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFilesByPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakFile); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::LoadFilesByPak(Z_Param_InPakFile,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanExtenPakFiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::ScanExtenPakFiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanAllVersionDescribleFiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibPakHelper::ScanAllVersionDescribleFiles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanExtenFilesInDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InExtenPostfix); \
		P_GET_UBOOL(Z_Param_InRecursively); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::ScanExtenFilesInDirectory(Z_Param_InRelativePath,Z_Param_InExtenPostfix,Z_Param_InRecursively,Z_Param_Out_OutFiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeStringToPakVersion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_OutPakVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::DeserializeStringToPakVersion(Z_Param_InString,Z_Param_Out_OutPakVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializePakVersionToString) \
	{ \
		P_GET_STRUCT_REF(FPakVersion,Z_Param_Out_InPakVersion); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::SerializePakVersionToString(Z_Param_Out_InPakVersion,Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScanPlatformDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativePath); \
		P_GET_UBOOL(Z_Param_bIncludeFile); \
		P_GET_UBOOL(Z_Param_bIncludeDir); \
		P_GET_UBOOL(Z_Param_bRecursively); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutResault); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::ScanPlatformDirectory(Z_Param_InRelativePath,Z_Param_bIncludeFile,Z_Param_bIncludeDir,Z_Param_bRecursively,Z_Param_Out_OutResault); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFileByBytes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFile); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InBytes); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWriteFlag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::CreateFileByBytes(Z_Param_InFile,Z_Param_Out_InBytes,Z_Param_InWriteFlag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::UnMountPak(Z_Param_PakPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakPath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PakOrder); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMountPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFlibPakHelper::MountPak(Z_Param_PakPath,Z_Param_PakOrder,Z_Param_InMountPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecMountPak) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPakPath); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPakOrder); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InMountPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFlibPakHelper::ExecMountPak(Z_Param_InPakPath,Z_Param_InPakOrder,Z_Param_InMountPoint); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlibPakHelper(); \
	friend struct Z_Construct_UClass_UFlibPakHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibPakHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibPakHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFlibPakHelper(); \
	friend struct Z_Construct_UClass_UFlibPakHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibPakHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibPakHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibPakHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibPakHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibPakHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibPakHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibPakHelper(UFlibPakHelper&&); \
	NO_API UFlibPakHelper(const UFlibPakHelper&); \
public:


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibPakHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibPakHelper(UFlibPakHelper&&); \
	NO_API UFlibPakHelper(const UFlibPakHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibPakHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibPakHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibPakHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_15_PROLOG
#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_RPC_WRAPPERS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_INCLASS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTPATCHERRUNTIME_API UClass* StaticClass<class UFlibPakHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibPakHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

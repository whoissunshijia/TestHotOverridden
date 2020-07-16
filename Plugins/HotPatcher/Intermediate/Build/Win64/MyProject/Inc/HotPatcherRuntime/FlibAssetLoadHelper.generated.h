// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef HOTPATCHERRUNTIME_FlibAssetLoadHelper_generated_h
#error "FlibAssetLoadHelper.generated.h already included, missing '#pragma once' in FlibAssetLoadHelper.h"
#endif
#define HOTPATCHERRUNTIME_FlibAssetLoadHelper_generated_h

#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectResource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibAssetLoadHelper::GetObjectResource(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetByPackageName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFlibAssetLoadHelper::LoadAssetByPackageName(Z_Param_InPackageName,Z_Param_Out_OutAssetType); \
		P_NATIVE_END; \
	}


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectResource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFlibAssetLoadHelper::GetObjectResource(Z_Param_Obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAssetByPackageName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPackageName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutAssetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFlibAssetLoadHelper::LoadAssetByPackageName(Z_Param_InPackageName,Z_Param_Out_OutAssetType); \
		P_NATIVE_END; \
	}


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlibAssetLoadHelper(); \
	friend struct Z_Construct_UClass_UFlibAssetLoadHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibAssetLoadHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibAssetLoadHelper)


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFlibAssetLoadHelper(); \
	friend struct Z_Construct_UClass_UFlibAssetLoadHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibAssetLoadHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFlibAssetLoadHelper)


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibAssetLoadHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibAssetLoadHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibAssetLoadHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibAssetLoadHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibAssetLoadHelper(UFlibAssetLoadHelper&&); \
	NO_API UFlibAssetLoadHelper(const UFlibAssetLoadHelper&); \
public:


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibAssetLoadHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibAssetLoadHelper(UFlibAssetLoadHelper&&); \
	NO_API UFlibAssetLoadHelper(const UFlibAssetLoadHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibAssetLoadHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibAssetLoadHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibAssetLoadHelper)


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_PRIVATE_PROPERTY_OFFSET
#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_12_PROLOG
#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_RPC_WRAPPERS \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_INCLASS \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_INCLASS_NO_PURE_DECLS \
	TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTPATCHERRUNTIME_API UClass* StaticClass<class UFlibAssetLoadHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FlibAssetLoadHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

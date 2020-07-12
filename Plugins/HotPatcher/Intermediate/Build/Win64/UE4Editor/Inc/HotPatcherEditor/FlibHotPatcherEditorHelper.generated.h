// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTPATCHEREDITOR_FlibHotPatcherEditorHelper_generated_h
#error "FlibHotPatcherEditorHelper.generated.h already included, missing '#pragma once' in FlibHotPatcherEditorHelper.h"
#endif
#define HOTPATCHEREDITOR_FlibHotPatcherEditorHelper_generated_h

#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllCookOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibHotPatcherEditorHelper::GetAllCookOption(); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllCookOption) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFlibHotPatcherEditorHelper::GetAllCookOption(); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlibHotPatcherEditorHelper(); \
	friend struct Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibHotPatcherEditorHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherEditor"), NO_API) \
	DECLARE_SERIALIZER(UFlibHotPatcherEditorHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUFlibHotPatcherEditorHelper(); \
	friend struct Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics; \
public: \
	DECLARE_CLASS(UFlibHotPatcherEditorHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HotPatcherEditor"), NO_API) \
	DECLARE_SERIALIZER(UFlibHotPatcherEditorHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibHotPatcherEditorHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibHotPatcherEditorHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibHotPatcherEditorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibHotPatcherEditorHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibHotPatcherEditorHelper(UFlibHotPatcherEditorHelper&&); \
	NO_API UFlibHotPatcherEditorHelper(const UFlibHotPatcherEditorHelper&); \
public:


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlibHotPatcherEditorHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlibHotPatcherEditorHelper(UFlibHotPatcherEditorHelper&&); \
	NO_API UFlibHotPatcherEditorHelper(const UFlibHotPatcherEditorHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlibHotPatcherEditorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlibHotPatcherEditorHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlibHotPatcherEditorHelper)


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_24_PROLOG
#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_RPC_WRAPPERS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_INCLASS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTPATCHEREDITOR_API UClass* StaticClass<class UFlibHotPatcherEditorHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_HotPatcher_Source_HotPatcherEditor_Public_FlibHotPatcherEditorHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

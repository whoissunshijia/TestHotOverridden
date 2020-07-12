// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTPATCHERRUNTIME_FChunkInfo_generated_h
#error "FChunkInfo.generated.h already included, missing '#pragma once' in FChunkInfo.h"
#endif
#define HOTPATCHERRUNTIME_FChunkInfo_generated_h

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FChunkInfo_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkAssetDescribe_Statics; \
	HOTPATCHERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<struct FChunkAssetDescribe>();

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FChunkInfo_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkPakCommand_Statics; \
	HOTPATCHERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<struct FChunkPakCommand>();

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FChunkInfo_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkInfo_Statics; \
	HOTPATCHERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<struct FChunkInfo>();

#define MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FChunkInfo_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPakInternalInfo_Statics; \
	HOTPATCHERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<struct FPakInternalInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FChunkInfo_h


#define FOREACH_ENUM_EMONOLITHICPATHMODE(op) \
	op(EMonolithicPathMode::MountPath) \
	op(EMonolithicPathMode::PackagePath) 

enum class EMonolithicPathMode : uint8;
template<> HOTPATCHERRUNTIME_API UEnum* StaticEnum<EMonolithicPathMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

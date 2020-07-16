// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTPATCHERRUNTIME_FReplaceText_generated_h
#error "FReplaceText.generated.h already included, missing '#pragma once' in FReplaceText.h"
#endif
#define HOTPATCHERRUNTIME_FReplaceText_generated_h

#define TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FReplaceText_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplaceText_Statics; \
	HOTPATCHERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<struct FReplaceText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestHotOverridden_Plugins_HotPatcher_Source_HotPatcherRuntime_Public_FReplaceText_h


#define FOREACH_ENUM_ESEARCHCASEMODE(op) \
	op(ESearchCaseMode::CaseSensitive) \
	op(ESearchCaseMode::IgnoreCase) 

enum class ESearchCaseMode : uint8;
template<> HOTPATCHERRUNTIME_API UEnum* StaticEnum<ESearchCaseMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

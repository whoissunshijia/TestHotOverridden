// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FPatchVersionDiff.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPatchVersionDiff() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPatchVersionDiff();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
// End Cross Module References
class UScriptStruct* FPatchVersionDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPatchVersionDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchVersionDiff, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("PatchVersionDiff"), sizeof(FPatchVersionDiff), Get_Z_Construct_UScriptStruct_FPatchVersionDiff_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FPatchVersionDiff>()
{
	return FPatchVersionDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPatchVersionDiff(FPatchVersionDiff::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("PatchVersionDiff"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatchVersionDiff
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatchVersionDiff()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PatchVersionDiff")),new UScriptStruct::TCppStructOps<FPatchVersionDiff>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFPatchVersionDiff;
	struct Z_Construct_UScriptStruct_FPatchVersionDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPatchVersionDiff.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchVersionDiff>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"PatchVersionDiff",
		sizeof(FPatchVersionDiff),
		alignof(FPatchVersionDiff),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchVersionDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPatchVersionDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PatchVersionDiff"), sizeof(FPatchVersionDiff), Get_Z_Construct_UScriptStruct_FPatchVersionDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPatchVersionDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPatchVersionDiff_Hash() { return 1800773372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

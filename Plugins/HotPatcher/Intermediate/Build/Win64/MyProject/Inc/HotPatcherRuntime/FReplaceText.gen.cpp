// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FReplaceText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFReplaceText() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UEnum* Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FReplaceText();
// End Cross Module References
	static UEnum* ESearchCaseMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ESearchCaseMode"));
		}
		return Singleton;
	}
	template<> HOTPATCHERRUNTIME_API UEnum* StaticEnum<ESearchCaseMode>()
	{
		return ESearchCaseMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESearchCaseMode(ESearchCaseMode_StaticEnum, TEXT("/Script/HotPatcherRuntime"), TEXT("ESearchCaseMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode_Hash() { return 3624825431U; }
	UEnum* Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESearchCaseMode"), 0, Get_Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESearchCaseMode::CaseSensitive", (int64)ESearchCaseMode::CaseSensitive },
				{ "ESearchCaseMode::IgnoreCase", (int64)ESearchCaseMode::IgnoreCase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FReplaceText.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
				nullptr,
				"ESearchCaseMode",
				"ESearchCaseMode",
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
class UScriptStruct* FReplaceText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOTPATCHERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FReplaceText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplaceText, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ReplaceText"), sizeof(FReplaceText), Get_Z_Construct_UScriptStruct_FReplaceText_Hash());
	}
	return Singleton;
}
template<> HOTPATCHERRUNTIME_API UScriptStruct* StaticStruct<FReplaceText>()
{
	return FReplaceText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplaceText(FReplaceText::StaticStruct, TEXT("/Script/HotPatcherRuntime"), TEXT("ReplaceText"), false, nullptr, nullptr);
static struct FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFReplaceText
{
	FScriptStruct_HotPatcherRuntime_StaticRegisterNativesFReplaceText()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplaceText")),new UScriptStruct::TCppStructOps<FReplaceText>);
	}
} ScriptStruct_HotPatcherRuntime_StaticRegisterNativesFReplaceText;
	struct Z_Construct_UScriptStruct_FReplaceText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchCase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchCase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchCase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplaceText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FReplaceText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplaceText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplaceText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase_MetaData[] = {
		{ "Category", "ReplaceText" },
		{ "ModuleRelativePath", "Public/FReplaceText.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplaceText, SearchCase), Z_Construct_UEnum_HotPatcherRuntime_ESearchCaseMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_To_MetaData[] = {
		{ "Category", "ReplaceText" },
		{ "ModuleRelativePath", "Public/FReplaceText.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplaceText, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_To_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_From_MetaData[] = {
		{ "Category", "ReplaceText" },
		{ "ModuleRelativePath", "Public/FReplaceText.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplaceText, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_From_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplaceText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_SearchCase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplaceText_Statics::NewProp_From,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplaceText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
		nullptr,
		&NewStructOps,
		"ReplaceText",
		sizeof(FReplaceText),
		alignof(FReplaceText),
		Z_Construct_UScriptStruct_FReplaceText_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FReplaceText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplaceText_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplaceText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplaceText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplaceText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplaceText"), sizeof(FReplaceText), Get_Z_Construct_UScriptStruct_FReplaceText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplaceText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplaceText_Hash() { return 1270099791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

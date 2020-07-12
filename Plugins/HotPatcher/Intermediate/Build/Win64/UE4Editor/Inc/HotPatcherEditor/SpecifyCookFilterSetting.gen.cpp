// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherEditor/Private/Cook/SpecifyCookFilterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecifyCookFilterSetting() {}
// Cross Module References
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_USpecifyCookFilterSetting_NoRegister();
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_USpecifyCookFilterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HotPatcherEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void USpecifyCookFilterSetting::StaticRegisterNativesUSpecifyCookFilterSetting()
	{
	}
	UClass* Z_Construct_UClass_USpecifyCookFilterSetting_NoRegister()
	{
		return USpecifyCookFilterSetting::StaticClass();
	}
	struct Z_Construct_UClass_USpecifyCookFilterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwayCookFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlwayCookFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlwayCookFilters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpecifyCookFilterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecifyCookFilterSetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cook/SpecifyCookFilterSetting.h" },
		{ "ModuleRelativePath", "Private/Cook/SpecifyCookFilterSetting.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters_MetaData[] = {
		{ "Category", "SpecifyDirectorys" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Private/Cook/SpecifyCookFilterSetting.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters = { "AlwayCookFilters", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpecifyCookFilterSetting, AlwayCookFilters), METADATA_PARAMS(Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters_Inner = { "AlwayCookFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpecifyCookFilterSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecifyCookFilterSetting_Statics::NewProp_AlwayCookFilters_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpecifyCookFilterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecifyCookFilterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpecifyCookFilterSetting_Statics::ClassParams = {
		&USpecifyCookFilterSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpecifyCookFilterSetting_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpecifyCookFilterSetting_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpecifyCookFilterSetting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpecifyCookFilterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpecifyCookFilterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpecifyCookFilterSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpecifyCookFilterSetting, 2339900416);
	template<> HOTPATCHEREDITOR_API UClass* StaticClass<USpecifyCookFilterSetting>()
	{
		return USpecifyCookFilterSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpecifyCookFilterSetting(Z_Construct_UClass_USpecifyCookFilterSetting, &USpecifyCookFilterSetting::StaticClass, TEXT("/Script/HotPatcherEditor"), TEXT("USpecifyCookFilterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpecifyCookFilterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

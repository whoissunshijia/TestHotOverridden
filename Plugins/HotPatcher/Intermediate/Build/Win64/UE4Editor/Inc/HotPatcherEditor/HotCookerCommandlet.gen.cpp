// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherEditor/Classes/Commandlets/HotCookerCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHotCookerCommandlet() {}
// Cross Module References
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UHotCookerCommandlet_NoRegister();
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UHotCookerCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_HotPatcherEditor();
// End Cross Module References
	void UHotCookerCommandlet::StaticRegisterNativesUHotCookerCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UHotCookerCommandlet_NoRegister()
	{
		return UHotCookerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UHotCookerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHotCookerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotCookerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/HotCookerCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/HotCookerCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHotCookerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHotCookerCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHotCookerCommandlet_Statics::ClassParams = {
		&UHotCookerCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHotCookerCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHotCookerCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHotCookerCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHotCookerCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHotCookerCommandlet, 4085935909);
	template<> HOTPATCHEREDITOR_API UClass* StaticClass<UHotCookerCommandlet>()
	{
		return UHotCookerCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHotCookerCommandlet(Z_Construct_UClass_UHotCookerCommandlet, &UHotCookerCommandlet::StaticClass, TEXT("/Script/HotPatcherEditor"), TEXT("UHotCookerCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHotCookerCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

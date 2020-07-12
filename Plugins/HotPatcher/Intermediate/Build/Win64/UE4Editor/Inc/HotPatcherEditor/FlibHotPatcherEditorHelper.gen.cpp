// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherEditor/Public/FlibHotPatcherEditorHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlibHotPatcherEditorHelper() {}
// Cross Module References
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UFlibHotPatcherEditorHelper_NoRegister();
	HOTPATCHEREDITOR_API UClass* Z_Construct_UClass_UFlibHotPatcherEditorHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HotPatcherEditor();
	HOTPATCHEREDITOR_API UFunction* Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption();
// End Cross Module References
	void UFlibHotPatcherEditorHelper::StaticRegisterNativesUFlibHotPatcherEditorHelper()
	{
		UClass* Class = UFlibHotPatcherEditorHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllCookOption", &UFlibHotPatcherEditorHelper::execGetAllCookOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics
	{
		struct FlibHotPatcherEditorHelper_eventGetAllCookOption_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibHotPatcherEditorHelper_eventGetAllCookOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "HotPatch|Editor|Flib" },
		{ "ModuleRelativePath", "Public/FlibHotPatcherEditorHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibHotPatcherEditorHelper, nullptr, "GetAllCookOption", sizeof(FlibHotPatcherEditorHelper_eventGetAllCookOption_Parms), Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlibHotPatcherEditorHelper_NoRegister()
	{
		return UFlibHotPatcherEditorHelper::StaticClass();
	}
	struct Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlibHotPatcherEditorHelper_GetAllCookOption, "GetAllCookOption" }, // 3759847044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlibHotPatcherEditorHelper.h" },
		{ "ModuleRelativePath", "Public/FlibHotPatcherEditorHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlibHotPatcherEditorHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::ClassParams = {
		&UFlibHotPatcherEditorHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlibHotPatcherEditorHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlibHotPatcherEditorHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlibHotPatcherEditorHelper, 2092612848);
	template<> HOTPATCHEREDITOR_API UClass* StaticClass<UFlibHotPatcherEditorHelper>()
	{
		return UFlibHotPatcherEditorHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlibHotPatcherEditorHelper(Z_Construct_UClass_UFlibHotPatcherEditorHelper, &UFlibHotPatcherEditorHelper::StaticClass, TEXT("/Script/HotPatcherEditor"), TEXT("UFlibHotPatcherEditorHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlibHotPatcherEditorHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

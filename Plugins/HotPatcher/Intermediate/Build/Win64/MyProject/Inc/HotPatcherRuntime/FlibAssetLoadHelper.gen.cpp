// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/FlibAssetLoadHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlibAssetLoadHelper() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibAssetLoadHelper_NoRegister();
	HOTPATCHERRUNTIME_API UClass* Z_Construct_UClass_UFlibAssetLoadHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOTPATCHERRUNTIME_API UFunction* Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName();
// End Cross Module References
	void UFlibAssetLoadHelper::StaticRegisterNativesUFlibAssetLoadHelper()
	{
		UClass* Class = UFlibAssetLoadHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectResource", &UFlibAssetLoadHelper::execGetObjectResource },
			{ "LoadAssetByPackageName", &UFlibAssetLoadHelper::execLoadAssetByPackageName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics
	{
		struct FlibAssetLoadHelper_eventGetObjectResource_Parms
		{
			UObject* Obj;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibAssetLoadHelper_eventGetObjectResource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibAssetLoadHelper_eventGetObjectResource_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlibAssetLoadHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibAssetLoadHelper, nullptr, "GetObjectResource", sizeof(FlibAssetLoadHelper_eventGetObjectResource_Parms), Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics
	{
		struct FlibAssetLoadHelper_eventLoadAssetByPackageName_Parms
		{
			FString InPackageName;
			FString OutAssetType;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAssetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibAssetLoadHelper_eventLoadAssetByPackageName_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_OutAssetType = { "OutAssetType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibAssetLoadHelper_eventLoadAssetByPackageName_Parms, OutAssetType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_InPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlibAssetLoadHelper_eventLoadAssetByPackageName_Parms, InPackageName), METADATA_PARAMS(Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_InPackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_InPackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_OutAssetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::NewProp_InPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlibAssetLoadHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlibAssetLoadHelper, nullptr, "LoadAssetByPackageName", sizeof(FlibAssetLoadHelper_eventLoadAssetByPackageName_Parms), Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlibAssetLoadHelper_NoRegister()
	{
		return UFlibAssetLoadHelper::StaticClass();
	}
	struct Z_Construct_UClass_UFlibAssetLoadHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlibAssetLoadHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlibAssetLoadHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlibAssetLoadHelper_GetObjectResource, "GetObjectResource" }, // 833307120
		{ &Z_Construct_UFunction_UFlibAssetLoadHelper_LoadAssetByPackageName, "LoadAssetByPackageName" }, // 1553468960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlibAssetLoadHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlibAssetLoadHelper.h" },
		{ "ModuleRelativePath", "Public/FlibAssetLoadHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlibAssetLoadHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlibAssetLoadHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlibAssetLoadHelper_Statics::ClassParams = {
		&UFlibAssetLoadHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlibAssetLoadHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFlibAssetLoadHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlibAssetLoadHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlibAssetLoadHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlibAssetLoadHelper, 76511666);
	template<> HOTPATCHERRUNTIME_API UClass* StaticClass<UFlibAssetLoadHelper>()
	{
		return UFlibAssetLoadHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlibAssetLoadHelper(Z_Construct_UClass_UFlibAssetLoadHelper, &UFlibAssetLoadHelper::StaticClass, TEXT("/Script/HotPatcherRuntime"), TEXT("UFlibAssetLoadHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlibAssetLoadHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

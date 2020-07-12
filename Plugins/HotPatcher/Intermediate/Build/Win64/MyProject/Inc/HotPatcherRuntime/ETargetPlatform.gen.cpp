// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HotPatcherRuntime/Public/ETargetPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETargetPlatform() {}
// Cross Module References
	HOTPATCHERRUNTIME_API UEnum* Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform();
	UPackage* Z_Construct_UPackage__Script_HotPatcherRuntime();
// End Cross Module References
	static UEnum* ETargetPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform, Z_Construct_UPackage__Script_HotPatcherRuntime(), TEXT("ETargetPlatform"));
		}
		return Singleton;
	}
	template<> HOTPATCHERRUNTIME_API UEnum* StaticEnum<ETargetPlatform>()
	{
		return ETargetPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetPlatform(ETargetPlatform_StaticEnum, TEXT("/Script/HotPatcherRuntime"), TEXT("ETargetPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform_Hash() { return 2902485356U; }
	UEnum* Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HotPatcherRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetPlatform"), 0, Get_Z_Construct_UEnum_HotPatcherRuntime_ETargetPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETargetPlatform::AllDesktop", (int64)ETargetPlatform::AllDesktop },
				{ "ETargetPlatform::MacClient", (int64)ETargetPlatform::MacClient },
				{ "ETargetPlatform::MacNoEditor", (int64)ETargetPlatform::MacNoEditor },
				{ "ETargetPlatform::MacServer", (int64)ETargetPlatform::MacServer },
				{ "ETargetPlatform::Mac", (int64)ETargetPlatform::Mac },
				{ "ETargetPlatform::WindowsClient", (int64)ETargetPlatform::WindowsClient },
				{ "ETargetPlatform::WindowsNoEditor", (int64)ETargetPlatform::WindowsNoEditor },
				{ "ETargetPlatform::WindowsServer", (int64)ETargetPlatform::WindowsServer },
				{ "ETargetPlatform::Windows", (int64)ETargetPlatform::Windows },
				{ "ETargetPlatform::Android", (int64)ETargetPlatform::Android },
				{ "ETargetPlatform::Android_ASTC", (int64)ETargetPlatform::Android_ASTC },
				{ "ETargetPlatform::Android_ATC", (int64)ETargetPlatform::Android_ATC },
				{ "ETargetPlatform::Android_DXT", (int64)ETargetPlatform::Android_DXT },
				{ "ETargetPlatform::Android_ETC1", (int64)ETargetPlatform::Android_ETC1 },
				{ "ETargetPlatform::Android_ETC1a", (int64)ETargetPlatform::Android_ETC1a },
				{ "ETargetPlatform::Android_ETC2", (int64)ETargetPlatform::Android_ETC2 },
				{ "ETargetPlatform::Android_PVRTC", (int64)ETargetPlatform::Android_PVRTC },
				{ "ETargetPlatform::AndroidClient", (int64)ETargetPlatform::AndroidClient },
				{ "ETargetPlatform::Android_ASTCClient", (int64)ETargetPlatform::Android_ASTCClient },
				{ "ETargetPlatform::Android_ATCClient", (int64)ETargetPlatform::Android_ATCClient },
				{ "ETargetPlatform::Android_DXTClient", (int64)ETargetPlatform::Android_DXTClient },
				{ "ETargetPlatform::Android_ETC1Client", (int64)ETargetPlatform::Android_ETC1Client },
				{ "ETargetPlatform::Android_ETC1aClient", (int64)ETargetPlatform::Android_ETC1aClient },
				{ "ETargetPlatform::Android_ETC2Client", (int64)ETargetPlatform::Android_ETC2Client },
				{ "ETargetPlatform::Android_PVRTCClient", (int64)ETargetPlatform::Android_PVRTCClient },
				{ "ETargetPlatform::Android_Multi", (int64)ETargetPlatform::Android_Multi },
				{ "ETargetPlatform::Android_MultiClient", (int64)ETargetPlatform::Android_MultiClient },
				{ "ETargetPlatform::HTML5", (int64)ETargetPlatform::HTML5 },
				{ "ETargetPlatform::IOSClient", (int64)ETargetPlatform::IOSClient },
				{ "ETargetPlatform::IOS", (int64)ETargetPlatform::IOS },
				{ "ETargetPlatform::TVOSClient", (int64)ETargetPlatform::TVOSClient },
				{ "ETargetPlatform::TVOS", (int64)ETargetPlatform::TVOS },
				{ "ETargetPlatform::LinuxClient", (int64)ETargetPlatform::LinuxClient },
				{ "ETargetPlatform::LinuxNoEditor", (int64)ETargetPlatform::LinuxNoEditor },
				{ "ETargetPlatform::LinuxServer", (int64)ETargetPlatform::LinuxServer },
				{ "ETargetPlatform::Linux", (int64)ETargetPlatform::Linux },
				{ "ETargetPlatform::Lumin", (int64)ETargetPlatform::Lumin },
				{ "ETargetPlatform::LuminClient", (int64)ETargetPlatform::LuminClient },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETargetPlatform.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HotPatcherRuntime,
				nullptr,
				"ETargetPlatform",
				"ETargetPlatform",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

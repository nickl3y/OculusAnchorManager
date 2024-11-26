// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMD/Private/OculusXRTelemetryPrivacySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRTelemetryPrivacySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// End Cross Module References
	void UOculusXRTelemetryPrivacySettings::StaticRegisterNativesUOculusXRTelemetryPrivacySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRTelemetryPrivacySettings);
	UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister()
	{
		return UOculusXRTelemetryPrivacySettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNotified_MetaData[];
#endif
		static void NewProp_bHasNotified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNotified;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusXRTelemetryPrivacySettings.h" },
		{ "ModuleRelativePath", "Private/OculusXRTelemetryPrivacySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/OculusXRTelemetryPrivacySettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UOculusXRTelemetryPrivacySettings*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRTelemetryPrivacySettings), &Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_MetaData), Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRTelemetryPrivacySettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified_SetBit(void* Obj)
	{
		((UOculusXRTelemetryPrivacySettings*)Obj)->bHasNotified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified = { "bHasNotified", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRTelemetryPrivacySettings), &Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified_MetaData), Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bHasNotified,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UOculusXRTelemetryPrivacySettings, IImportantToggleSettingInterface), false },  // 2149250684
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRTelemetryPrivacySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::ClassParams = {
		&UOculusXRTelemetryPrivacySettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings()
	{
		if (!Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton, Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UClass* StaticClass<UOculusXRTelemetryPrivacySettings>()
	{
		return UOculusXRTelemetryPrivacySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRTelemetryPrivacySettings);
	UOculusXRTelemetryPrivacySettings::~UOculusXRTelemetryPrivacySettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRTelemetryPrivacySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRTelemetryPrivacySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRTelemetryPrivacySettings, UOculusXRTelemetryPrivacySettings::StaticClass, TEXT("UOculusXRTelemetryPrivacySettings"), &Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRTelemetryPrivacySettings), 194093206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRTelemetryPrivacySettings_h_1105046813(TEXT("/Script/OculusXRHMD"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRTelemetryPrivacySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRTelemetryPrivacySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

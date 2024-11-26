// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRProjectSetupTool/Public/OculusXRPSTSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPSTSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings();
	OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool();
// End Cross Module References
	void UOculusXRPSTSettings::StaticRegisterNativesUOculusXRPSTSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPSTSettings);
	UClass* Z_Construct_UClass_UOculusXRPSTSettings_NoRegister()
	{
		return UOculusXRPSTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPSTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredRules_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredRules_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CurrentPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBackGroundChecks_MetaData[];
#endif
		static void NewProp_bBackGroundChecks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackGroundChecks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData[];
#endif
		static void NewProp_bStopBuildOnUnAppliedCriticalItems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBuildOnUnAppliedCriticalItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGuidedTutorialComplete_MetaData[];
#endif
		static void NewProp_bGuidedTutorialComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGuidedTutorialComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGuidedTutorial_MetaData[];
#endif
		static void NewProp_bShowGuidedTutorial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGuidedTutorial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPSTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Meta XR Project Setup tool Settings\n */" },
		{ "IncludePath", "OculusXRPSTSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "Meta XR Project Setup tool Settings" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules_ElementProp = { "IgnoredRules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief Ignored rules by developer\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief Ignored rules by developer" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules = { "IgnoredRules", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPSTSettings, IgnoredRules), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_CurrentPlatform_MetaData[] = {
		{ "Comment", "/**\n\x09* @brief Selected platform for development\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief Selected platform for development" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_CurrentPlatform = { "CurrentPlatform", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPSTSettings, CurrentPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_CurrentPlatform_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_CurrentPlatform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If tools should periodically check if list of rules and rules' status\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If tools should periodically check if list of rules and rules' status" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bBackGroundChecks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks = { "bBackGroundChecks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If build should fail if critical rule is not applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If build should fail if critical rule is not applied" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bStopBuildOnUnAppliedCriticalItems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems = { "bStopBuildOnUnAppliedCriticalItems", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If guided tutorial has been completed/skipped\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If guided tutorial has been completed/skipped" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bGuidedTutorialComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete = { "bGuidedTutorialComplete", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/**\n\x09 * @brief If guided tutorial showed\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXRPSTSettings.h" },
		{ "ToolTip", "@brief If guided tutorial showed" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial_SetBit(void* Obj)
	{
		((UOculusXRPSTSettings*)Obj)->bShowGuidedTutorial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial = { "bShowGuidedTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPSTSettings), &Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial_MetaData), Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRPSTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_IgnoredRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_CurrentPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bBackGroundChecks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bStopBuildOnUnAppliedCriticalItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bGuidedTutorialComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPSTSettings_Statics::NewProp_bShowGuidedTutorial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPSTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPSTSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPSTSettings_Statics::ClassParams = {
		&UOculusXRPSTSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRPSTSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPSTSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPSTSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRPSTSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton, Z_Construct_UClass_UOculusXRPSTSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPSTSettings.OuterSingleton;
	}
	template<> OCULUSXRPROJECTSETUPTOOL_API UClass* StaticClass<UOculusXRPSTSettings>()
	{
		return UOculusXRPSTSettings::StaticClass();
	}
	UOculusXRPSTSettings::UOculusXRPSTSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPSTSettings);
	UOculusXRPSTSettings::~UOculusXRPSTSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPSTSettings, UOculusXRPSTSettings::StaticClass, TEXT("UOculusXRPSTSettings"), &Z_Registration_Info_UClass_UOculusXRPSTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPSTSettings), 1262454100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_1860971159(TEXT("/Script/OculusXRProjectSetupTool"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

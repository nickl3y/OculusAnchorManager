// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRProjectSetupTool/Public/OculusXRRuleProcessorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRRuleProcessorSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem();
	OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool();
// End Cross Module References
	void UOculusXRRuleProcessorSubsystem::StaticRegisterNativesUOculusXRRuleProcessorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRRuleProcessorSubsystem);
	UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_NoRegister()
	{
		return UOculusXRRuleProcessorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The rule processor handles registration and querying of rules\n */" },
		{ "IncludePath", "OculusXRRuleProcessorSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRRuleProcessorSubsystem.h" },
		{ "ToolTip", "The rule processor handles registration and querying of rules" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRuleProcessorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::ClassParams = {
		&UOculusXRRuleProcessorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton;
	}
	template<> OCULUSXRPROJECTSETUPTOOL_API UClass* StaticClass<UOculusXRRuleProcessorSubsystem>()
	{
		return UOculusXRRuleProcessorSubsystem::StaticClass();
	}
	UOculusXRRuleProcessorSubsystem::UOculusXRRuleProcessorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRuleProcessorSubsystem);
	UOculusXRRuleProcessorSubsystem::~UOculusXRRuleProcessorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRuleProcessorSubsystem, UOculusXRRuleProcessorSubsystem::StaticClass, TEXT("UOculusXRRuleProcessorSubsystem"), &Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRuleProcessorSubsystem), 780897993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h_3629118210(TEXT("/Script/OculusXRProjectSetupTool"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

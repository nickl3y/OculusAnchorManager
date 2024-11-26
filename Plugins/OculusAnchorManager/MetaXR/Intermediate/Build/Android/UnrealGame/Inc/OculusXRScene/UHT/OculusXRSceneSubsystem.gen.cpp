// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRScene/Public/OculusXRSceneSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneSubsystem();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// End Cross Module References
	void UOculusXRSceneSubsystem::StaticRegisterNativesUOculusXRSceneSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSceneSubsystem);
	UClass* Z_Construct_UClass_UOculusXRSceneSubsystem_NoRegister()
	{
		return UOculusXRSceneSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSceneSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRSceneSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::ClassParams = {
		&UOculusXRSceneSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSceneSubsystem()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSceneSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRSceneSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSceneSubsystem.OuterSingleton;
	}
	template<> OCULUSXRSCENE_API UClass* StaticClass<UOculusXRSceneSubsystem>()
	{
		return UOculusXRSceneSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSceneSubsystem);
	UOculusXRSceneSubsystem::~UOculusXRSceneSubsystem() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneSubsystem, UOculusXRSceneSubsystem::StaticClass, TEXT("UOculusXRSceneSubsystem"), &Z_Registration_Info_UClass_UOculusXRSceneSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneSubsystem), 2063768425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_2385303143(TEXT("/Script/OculusXRScene"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

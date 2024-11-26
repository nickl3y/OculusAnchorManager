// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRScene/Public/OculusXRSceneEventDelegates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneEventDelegates() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneEventDelegates();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneEventDelegates_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// End Cross Module References
	void UOculusXRSceneEventDelegates::StaticRegisterNativesUOculusXRSceneEventDelegates()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSceneEventDelegates);
	UClass* Z_Construct_UClass_UOculusXRSceneEventDelegates_NoRegister()
	{
		return UOculusXRSceneEventDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRSceneEventDelegates.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneEventDelegates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneEventDelegates>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::ClassParams = {
		&UOculusXRSceneEventDelegates::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSceneEventDelegates()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSceneEventDelegates.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneEventDelegates.OuterSingleton, Z_Construct_UClass_UOculusXRSceneEventDelegates_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSceneEventDelegates.OuterSingleton;
	}
	template<> OCULUSXRSCENE_API UClass* StaticClass<UOculusXRSceneEventDelegates>()
	{
		return UOculusXRSceneEventDelegates::StaticClass();
	}
	UOculusXRSceneEventDelegates::UOculusXRSceneEventDelegates() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSceneEventDelegates);
	UOculusXRSceneEventDelegates::~UOculusXRSceneEventDelegates() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneEventDelegates, UOculusXRSceneEventDelegates::StaticClass, TEXT("UOculusXRSceneEventDelegates"), &Z_Registration_Info_UClass_UOculusXRSceneEventDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneEventDelegates), 1690726390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_4260896049(TEXT("/Script/OculusXRScene"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneEventDelegates_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRScene/Public/OculusXRSceneFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// End Cross Module References
	void UOculusXRSceneFunctionLibrary::StaticRegisterNativesUOculusXRSceneFunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSceneFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary_NoRegister()
	{
		return UOculusXRSceneFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRSceneFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::ClassParams = {
		&UOculusXRSceneFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRSceneFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRSceneFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSXRSCENE_API UClass* StaticClass<UOculusXRSceneFunctionLibrary>()
	{
		return UOculusXRSceneFunctionLibrary::StaticClass();
	}
	UOculusXRSceneFunctionLibrary::UOculusXRSceneFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSceneFunctionLibrary);
	UOculusXRSceneFunctionLibrary::~UOculusXRSceneFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneFunctionLibrary, UOculusXRSceneFunctionLibrary::StaticClass, TEXT("UOculusXRSceneFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRSceneFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneFunctionLibrary), 630534049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_1486018651(TEXT("/Script/OculusXRScene"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

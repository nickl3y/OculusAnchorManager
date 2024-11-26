// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMD/Private/OculusXRSceneCaptureCubemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneCaptureCubemap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRSceneCaptureCubemap();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRSceneCaptureCubemap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// End Cross Module References
	void UOculusXRSceneCaptureCubemap::StaticRegisterNativesUOculusXRSceneCaptureCubemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSceneCaptureCubemap);
	UClass* Z_Construct_UClass_UOculusXRSceneCaptureCubemap_NoRegister()
	{
		return UOculusXRSceneCaptureCubemap::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRSceneCaptureCubemap.h" },
		{ "ModuleRelativePath", "Private/OculusXRSceneCaptureCubemap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner = { "CaptureComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusXRSceneCaptureCubemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents = { "CaptureComponents", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneCaptureCubemap, CaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData), Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::NewProp_CaptureComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneCaptureCubemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::ClassParams = {
		&UOculusXRSceneCaptureCubemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRSceneCaptureCubemap()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSceneCaptureCubemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneCaptureCubemap.OuterSingleton, Z_Construct_UClass_UOculusXRSceneCaptureCubemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSceneCaptureCubemap.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UClass* StaticClass<UOculusXRSceneCaptureCubemap>()
	{
		return UOculusXRSceneCaptureCubemap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSceneCaptureCubemap);
	UOculusXRSceneCaptureCubemap::~UOculusXRSceneCaptureCubemap() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRSceneCaptureCubemap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRSceneCaptureCubemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneCaptureCubemap, UOculusXRSceneCaptureCubemap::StaticClass, TEXT("UOculusXRSceneCaptureCubemap"), &Z_Registration_Info_UClass_UOculusXRSceneCaptureCubemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneCaptureCubemap), 2476505715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRSceneCaptureCubemap_h_2824986732(TEXT("/Script/OculusXRHMD"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRSceneCaptureCubemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Private_OculusXRSceneCaptureCubemap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

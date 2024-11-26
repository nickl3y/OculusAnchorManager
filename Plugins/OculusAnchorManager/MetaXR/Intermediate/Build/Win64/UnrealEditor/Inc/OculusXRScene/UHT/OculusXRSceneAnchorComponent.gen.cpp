// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRScene/Public/OculusXRSceneAnchorComponent.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneAnchorComponent() {}
// Cross Module References
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent();
	OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// End Cross Module References
	void UOculusXRSceneAnchorComponent::StaticRegisterNativesUOculusXRSceneAnchorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRSceneAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent_NoRegister()
	{
		return UOculusXRSceneAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SemanticClassifications_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SemanticClassifications_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SemanticClassifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSpaceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomSpaceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRAnchorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DisplayName", "OculusXR Scene Anchor Component" },
		{ "IncludePath", "OculusXRSceneAnchorComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRSceneAnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications_Inner = { "SemanticClassifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications_MetaData[] = {
		{ "Category", "OculusXR|Scene Anchor Component" },
		{ "ModuleRelativePath", "Public/OculusXRSceneAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications = { "SemanticClassifications", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneAnchorComponent, SemanticClassifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications_MetaData), Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_RoomSpaceID_MetaData[] = {
		{ "Category", "OculusXR|Scene Anchor Component" },
		{ "ModuleRelativePath", "Public/OculusXRSceneAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_RoomSpaceID = { "RoomSpaceID", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSceneAnchorComponent, RoomSpaceID), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_RoomSpaceID_MetaData), Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_RoomSpaceID_MetaData) }; // 2105598926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_SemanticClassifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::NewProp_RoomSpaceID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSceneAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::ClassParams = {
		&UOculusXRSceneAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRSceneAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRSceneAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSceneAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRSceneAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRSceneAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRSCENE_API UClass* StaticClass<UOculusXRSceneAnchorComponent>()
	{
		return UOculusXRSceneAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSceneAnchorComponent);
	UOculusXRSceneAnchorComponent::~UOculusXRSceneAnchorComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneAnchorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneAnchorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSceneAnchorComponent, UOculusXRSceneAnchorComponent::StaticClass, TEXT("UOculusXRSceneAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRSceneAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSceneAnchorComponent), 759697791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneAnchorComponent_h_2400363249(TEXT("/Script/OculusXRScene"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneAnchorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneAnchorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

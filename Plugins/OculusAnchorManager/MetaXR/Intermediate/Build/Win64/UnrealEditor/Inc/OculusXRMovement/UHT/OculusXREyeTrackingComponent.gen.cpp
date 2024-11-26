// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Public/OculusXREyeTrackingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXREyeTrackingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent_NoRegister();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye();
	UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXREyeTrackingComponent::execClearRotationValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRotationValues();
		P_NATIVE_END;
	}
	void UOculusXREyeTrackingComponent::StaticRegisterNativesUOculusXREyeTrackingComponent()
	{
		UClass* Class = UOculusXREyeTrackingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRotationValues", &UOculusXREyeTrackingComponent::execClearRotationValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Oculus|Movement" },
		{ "Comment", "/**\n\x09* Reset the rotation values of the eyes to their initial rotation\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "Reset the rotation values of the eyes to their initial rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXREyeTrackingComponent, nullptr, "ClearRotationValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXREyeTrackingComponent);
	UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent_NoRegister()
	{
		return UOculusXREyeTrackingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshComponentName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EyeToBone_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EyeToBone_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeToBone_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeToBone_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EyeToBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePosition_MetaData[];
#endif
		static void NewProp_bUpdatePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateRotation_MetaData[];
#endif
		static void NewProp_bUpdateRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptInvalid_MetaData[];
#endif
		static void NewProp_bAcceptInvalid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoseableMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoseableMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXREyeTrackingComponent_ClearRotationValues, "ClearRotationValues" }, // 1493220607
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "OculusXR Eye Tracking Component" },
		{ "IncludePath", "OculusXREyeTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetMeshComponentName_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * The name of the poseable mesh component that this component targets for eyes glazes movement.\n\x09 * This must be the name of a component on this actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "The name of the poseable mesh component that this component targets for eyes glazes movement.\nThis must be the name of a component on this actor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetMeshComponentName = { "TargetMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, TargetMeshComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetMeshComponentName_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetMeshComponentName_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_ValueProp = { "EyeToBone", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_Key_KeyProp = { "EyeToBone_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXREye, METADATA_PARAMS(0, nullptr) }; // 35062370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * The map of eye to mesh bone that this component supports.\n\x09 * Names are validated on (@see BeginPlay) so only valid bone names will be targeted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "The map of eye to mesh bone that this component supports.\nNames are validated on (@see BeginPlay) so only valid bone names will be targeted." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone = { "EyeToBone", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, EyeToBone), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_MetaData) }; // 35062370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Update the target mesh position when eye state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "Update the target mesh position when eye state changes" },
	};
#endif
	void Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bUpdatePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition = { "bUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Update the target mesh rotation when eye state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "Update the target mesh rotation when eye state changes" },
	};
#endif
	void Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bUpdateRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Do not accept an eye gaze state if confidence is lower than this value. Confidence is in range [0,1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "Do not accept an eye gaze state if confidence is lower than this value. Confidence is in range [0,1]." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_ConfidenceThreshold = { "ConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, ConfidenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "Comment", "/**\n\x09 * Bypass eye gaze state validity.\n\x09 * \n\x09 * @Note: It doesn't check the confidence (@see ConfidenceThreshold). The eye gaze state can be marked as invalid. This flag bypass that state flag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "Bypass eye gaze state validity.\n\n@Note: It doesn't check the confidence (@see ConfidenceThreshold). The eye gaze state can be marked as invalid. This flag bypass that state flag." },
	};
#endif
	void Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid_SetBit(void* Obj)
	{
		((UOculusXREyeTrackingComponent*)Obj)->bAcceptInvalid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid = { "bAcceptInvalid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREyeTrackingComponent), &Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetPoseableMeshComponent_MetaData[] = {
		{ "Comment", "// The mesh component targeted for eyes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXREyeTrackingComponent.h" },
		{ "ToolTip", "The mesh component targeted for eyes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetPoseableMeshComponent = { "TargetPoseableMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREyeTrackingComponent, TargetPoseableMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetPoseableMeshComponent_MetaData), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetPoseableMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetMeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_EyeToBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdatePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bUpdateRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_ConfidenceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_bAcceptInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::NewProp_TargetPoseableMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXREyeTrackingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::ClassParams = {
		&UOculusXREyeTrackingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXREyeTrackingComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton, Z_Construct_UClass_UOculusXREyeTrackingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXREyeTrackingComponent.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UClass* StaticClass<UOculusXREyeTrackingComponent>()
	{
		return UOculusXREyeTrackingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXREyeTrackingComponent);
	UOculusXREyeTrackingComponent::~UOculusXREyeTrackingComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXREyeTrackingComponent, UOculusXREyeTrackingComponent::StaticClass, TEXT("UOculusXREyeTrackingComponent"), &Z_Registration_Info_UClass_UOculusXREyeTrackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXREyeTrackingComponent), 247285620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h_2218133256(TEXT("/Script/OculusXRMovement"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXREyeTrackingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

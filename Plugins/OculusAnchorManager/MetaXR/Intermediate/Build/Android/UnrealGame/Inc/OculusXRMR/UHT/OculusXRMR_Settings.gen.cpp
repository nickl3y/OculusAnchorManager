// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRMR/Public/OculusXRMR_Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMR_Settings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister();
	OCULUSXRMR_API UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum();
	OCULUSXRMR_API UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference();
	OCULUSXRMR_API UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod();
	OCULUSXRMR_API UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects();
	UPackage* Z_Construct_UPackage__Script_OculusXRMR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum;
	static UEnum* EOculusXRMR_CameraDeviceEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("EOculusXRMR_CameraDeviceEnum"));
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.OuterSingleton;
	}
	template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_CameraDeviceEnum>()
	{
		return EOculusXRMR_CameraDeviceEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enumerators[] = {
		{ "EOculusXRMR_CameraDeviceEnum::CD_None_DEPRECATED", (int64)EOculusXRMR_CameraDeviceEnum::CD_None_DEPRECATED },
		{ "EOculusXRMR_CameraDeviceEnum::CD_WebCamera0_DEPRECATED", (int64)EOculusXRMR_CameraDeviceEnum::CD_WebCamera0_DEPRECATED },
		{ "EOculusXRMR_CameraDeviceEnum::CD_WebCamera1_DEPRECATED", (int64)EOculusXRMR_CameraDeviceEnum::CD_WebCamera1_DEPRECATED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CD_None_DEPRECATED.DisplayName", "None" },
		{ "CD_None_DEPRECATED.Name", "EOculusXRMR_CameraDeviceEnum::CD_None_DEPRECATED" },
		{ "CD_WebCamera0_DEPRECATED.DisplayName", "Web Camera 0" },
		{ "CD_WebCamera0_DEPRECATED.Name", "EOculusXRMR_CameraDeviceEnum::CD_WebCamera0_DEPRECATED" },
		{ "CD_WebCamera1_DEPRECATED.DisplayName", "Web Camera 1" },
		{ "CD_WebCamera1_DEPRECATED.Name", "EOculusXRMR_CameraDeviceEnum::CD_WebCamera1_DEPRECATED" },
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		"EOculusXRMR_CameraDeviceEnum",
		"EOculusXRMR_CameraDeviceEnum",
		Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.InnerSingleton, Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference;
	static UEnum* EOculusXRMR_ClippingReference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("EOculusXRMR_ClippingReference"));
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.OuterSingleton;
	}
	template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_ClippingReference>()
	{
		return EOculusXRMR_ClippingReference_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enumerators[] = {
		{ "EOculusXRMR_ClippingReference::CR_TrackingReference", (int64)EOculusXRMR_ClippingReference::CR_TrackingReference },
		{ "EOculusXRMR_ClippingReference::CR_Head", (int64)EOculusXRMR_ClippingReference::CR_Head },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CR_Head.DisplayName", "Head" },
		{ "CR_Head.Name", "EOculusXRMR_ClippingReference::CR_Head" },
		{ "CR_TrackingReference.DisplayName", "Tracking Reference" },
		{ "CR_TrackingReference.Name", "EOculusXRMR_ClippingReference::CR_TrackingReference" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		"EOculusXRMR_ClippingReference",
		"EOculusXRMR_ClippingReference",
		Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.InnerSingleton, Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects;
	static UEnum* EOculusXRMR_PostProcessEffects_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("EOculusXRMR_PostProcessEffects"));
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.OuterSingleton;
	}
	template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_PostProcessEffects>()
	{
		return EOculusXRMR_PostProcessEffects_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enumerators[] = {
		{ "EOculusXRMR_PostProcessEffects::PPE_Off", (int64)EOculusXRMR_PostProcessEffects::PPE_Off },
		{ "EOculusXRMR_PostProcessEffects::PPE_On", (int64)EOculusXRMR_PostProcessEffects::PPE_On },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "PPE_Off.DisplayName", "Off" },
		{ "PPE_Off.Name", "EOculusXRMR_PostProcessEffects::PPE_Off" },
		{ "PPE_On.DisplayName", "On" },
		{ "PPE_On.Name", "EOculusXRMR_PostProcessEffects::PPE_On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		"EOculusXRMR_PostProcessEffects",
		"EOculusXRMR_PostProcessEffects",
		Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.InnerSingleton, Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod;
	static UEnum* EOculusXRMR_CompositionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("EOculusXRMR_CompositionMethod"));
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.OuterSingleton;
	}
	template<> OCULUSXRMR_API UEnum* StaticEnum<EOculusXRMR_CompositionMethod>()
	{
		return EOculusXRMR_CompositionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enumerators[] = {
		{ "EOculusXRMR_CompositionMethod::ExternalComposition", (int64)EOculusXRMR_CompositionMethod::ExternalComposition },
		{ "EOculusXRMR_CompositionMethod::DirectComposition_DEPRECATED", (int64)EOculusXRMR_CompositionMethod::DirectComposition_DEPRECATED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DirectComposition_DEPRECATED.Comment", "/* (Deprecated) Composite the camera stream directly to the output with the proper depth.*/" },
		{ "DirectComposition_DEPRECATED.DisplayName", "Direct Composition (DEPRECATED)" },
		{ "DirectComposition_DEPRECATED.Name", "EOculusXRMR_CompositionMethod::DirectComposition_DEPRECATED" },
		{ "DirectComposition_DEPRECATED.ToolTip", "(Deprecated) Composite the camera stream directly to the output with the proper depth." },
		{ "ExternalComposition.Comment", "/* Generate both foreground and background views for compositing with 3rd-party software like OBS. */" },
		{ "ExternalComposition.DisplayName", "External Composition" },
		{ "ExternalComposition.Name", "EOculusXRMR_CompositionMethod::ExternalComposition" },
		{ "ExternalComposition.ToolTip", "Generate both foreground and background views for compositing with 3rd-party software like OBS." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		"EOculusXRMR_CompositionMethod",
		"EOculusXRMR_CompositionMethod",
		Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.InnerSingleton, Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execSaveToIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execLoadFromIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execGetBindToTrackedCameraIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBindToTrackedCameraIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execBindToTrackedCameraIndexIfAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTrackedCameraIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToTrackedCameraIndexIfAvailable(Z_Param_InTrackedCameraIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execSetIsCasting)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCasting(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execGetIsCasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCasting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execSetCapturingCamera)
	{
		P_GET_ENUM(EOculusXRMR_CameraDeviceEnum,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapturingCamera(EOculusXRMR_CameraDeviceEnum(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execGetCapturingCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusXRMR_CameraDeviceEnum*)Z_Param__Result=P_THIS->GetCapturingCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execSetCompositionMethod)
	{
		P_GET_ENUM(EOculusXRMR_CompositionMethod,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompositionMethod(EOculusXRMR_CompositionMethod(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_Settings::execGetCompositionMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusXRMR_CompositionMethod*)Z_Param__Result=P_THIS->GetCompositionMethod();
		P_NATIVE_END;
	}
	void UOculusXRMR_Settings::StaticRegisterNativesUOculusXRMR_Settings()
	{
		UClass* Class = UOculusXRMR_Settings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToTrackedCameraIndexIfAvailable", &UOculusXRMR_Settings::execBindToTrackedCameraIndexIfAvailable },
			{ "GetBindToTrackedCameraIndex", &UOculusXRMR_Settings::execGetBindToTrackedCameraIndex },
			{ "GetCapturingCamera", &UOculusXRMR_Settings::execGetCapturingCamera },
			{ "GetCompositionMethod", &UOculusXRMR_Settings::execGetCompositionMethod },
			{ "GetIsCasting", &UOculusXRMR_Settings::execGetIsCasting },
			{ "LoadFromIni", &UOculusXRMR_Settings::execLoadFromIni },
			{ "SaveToIni", &UOculusXRMR_Settings::execSaveToIni },
			{ "SetCapturingCamera", &UOculusXRMR_Settings::execSetCapturingCamera },
			{ "SetCompositionMethod", &UOculusXRMR_Settings::execSetCompositionMethod },
			{ "SetIsCasting", &UOculusXRMR_Settings::execSetIsCasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics
	{
		struct OculusXRMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms
		{
			int32 InTrackedCameraIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTrackedCameraIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex = { "InTrackedCameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms, InTrackedCameraIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Bind the casting camera to the calibrated external camera.\n\x09  * (Requires a calibrated external camera)\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Bind the casting camera to the calibrated external camera.\n(Requires a calibrated external camera)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "BindToTrackedCameraIndexIfAvailable", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::OculusXRMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::OculusXRMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics
	{
		struct OculusXRMR_Settings_eventGetBindToTrackedCameraIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventGetBindToTrackedCameraIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "GetBindToTrackedCameraIndex", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::OculusXRMR_Settings_eventGetBindToTrackedCameraIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::OculusXRMR_Settings_eventGetBindToTrackedCameraIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics
	{
		struct OculusXRMR_Settings_eventGetCapturingCamera_Parms
		{
			EOculusXRMR_CameraDeviceEnum ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventGetCapturingCamera_Parms, ReturnValue), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum, METADATA_PARAMS(0, nullptr) }; // 522625868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "GetCapturingCamera", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::OculusXRMR_Settings_eventGetCapturingCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::OculusXRMR_Settings_eventGetCapturingCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics
	{
		struct OculusXRMR_Settings_eventGetCompositionMethod_Parms
		{
			EOculusXRMR_CompositionMethod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventGetCompositionMethod_Parms, ReturnValue), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod, METADATA_PARAMS(0, nullptr) }; // 177338256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "GetCompositionMethod", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::OculusXRMR_Settings_eventGetCompositionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::OculusXRMR_Settings_eventGetCompositionMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics
	{
		struct OculusXRMR_Settings_eventGetIsCasting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMR_Settings_eventGetIsCasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMR_Settings_eventGetIsCasting_Parms), &Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Is MRC on and off */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Is MRC on and off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "GetIsCasting", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::OculusXRMR_Settings_eventGetIsCasting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::OculusXRMR_Settings_eventGetIsCasting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Load settings from the config file */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Load settings from the config file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "LoadFromIni", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Save settings to the config file */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Save settings to the config file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "SaveToIni", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics
	{
		struct OculusXRMR_Settings_eventSetCapturingCamera_Parms
		{
			EOculusXRMR_CameraDeviceEnum val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventSetCapturingCamera_Parms, val), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum, METADATA_PARAMS(0, nullptr) }; // 522625868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "SetCapturingCamera", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::OculusXRMR_Settings_eventSetCapturingCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::OculusXRMR_Settings_eventSetCapturingCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics
	{
		struct OculusXRMR_Settings_eventSetCompositionMethod_Parms
		{
			EOculusXRMR_CompositionMethod val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_Settings_eventSetCompositionMethod_Parms, val), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod, METADATA_PARAMS(0, nullptr) }; // 177338256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "SetCompositionMethod", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::OculusXRMR_Settings_eventSetCompositionMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::OculusXRMR_Settings_eventSetCompositionMethod_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics
	{
		struct OculusXRMR_Settings_eventSetIsCasting_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit(void* Obj)
	{
		((OculusXRMR_Settings_eventSetIsCasting_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMR_Settings_eventSetIsCasting_Parms), &Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Turns MRC on and off */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Turns MRC on and off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_Settings, nullptr, "SetIsCasting", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::OculusXRMR_Settings_eventSetIsCasting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::OculusXRMR_Settings_eventSetIsCasting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRMR_Settings);
	UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister()
	{
		return UOculusXRMR_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRMR_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClippingReference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClippingReference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClippingReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTrackedCameraResolution_MetaData[];
#endif
		static void NewProp_bUseTrackedCameraResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTrackedCameraResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthPerView_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthPerView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightPerView_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightPerView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingLatency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastingLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackdropColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseStateLatency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandPoseStateLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySimilarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySimilarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySmoothRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySmoothRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySpillRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySpillRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalCompositionPostProcessEffects_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCompositionPostProcessEffects_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalCompositionPostProcessEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[];
#endif
		static void NewProp_bIsCasting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompositionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompositionMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingCamera_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturingCamera_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRMR_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRMR_Settings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_BindToTrackedCameraIndexIfAvailable, "BindToTrackedCameraIndexIfAvailable" }, // 4103095648
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_GetBindToTrackedCameraIndex, "GetBindToTrackedCameraIndex" }, // 761490865
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_GetCapturingCamera, "GetCapturingCamera" }, // 2976970014
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_GetCompositionMethod, "GetCompositionMethod" }, // 1845412224
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_GetIsCasting, "GetIsCasting" }, // 1591641083
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_LoadFromIni, "LoadFromIni" }, // 916200524
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_SaveToIni, "SaveToIni" }, // 443481255
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_SetCapturingCamera, "SetCapturingCamera" }, // 3142258328
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_SetCompositionMethod, "SetCompositionMethod" }, // 3011387425
		{ &Z_Construct_UFunction_UOculusXRMR_Settings_SetIsCasting, "SetIsCasting" }, // 817034260
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRMR" },
		{ "IncludePath", "OculusXRMR_Settings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Specify the distance to the camera which divide the background and foreground in MxR casting.\n\x09  * Set it to CR_TrackingReference to use the distance to the Tracking Reference, which works better\n\x09  * in the stationary experience. Set it to CR_Head would use the distance to the HMD, which works better\n\x09  * in the room scale experience.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Specify the distance to the camera which divide the background and foreground in MxR casting.\nSet it to CR_TrackingReference to use the distance to the Tracking Reference, which works better\nin the stationary experience. Set it to CR_Head would use the distance to the HMD, which works better\nin the room scale experience." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference = { "ClippingReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ClippingReference), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_ClippingReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference_MetaData) }; // 1875156719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** The casting viewports would use the same resolution of the camera which used in the calibration process. */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "The casting viewports would use the same resolution of the camera which used in the calibration process." },
	};
#endif
	void Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit(void* Obj)
	{
		((UOculusXRMR_Settings*)Obj)->bUseTrackedCameraResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution = { "bUseTrackedCameraResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRMR_Settings), &Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_WidthPerView_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When bUseTrackedCameraResolution is false, the width of each casting viewport */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When bUseTrackedCameraResolution is false, the width of each casting viewport" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_WidthPerView = { "WidthPerView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, WidthPerView), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_WidthPerView_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_WidthPerView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HeightPerView_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When bUseTrackedCameraResolution is false, the height of each casting viewport */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When bUseTrackedCameraResolution is false, the height of each casting viewport" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HeightPerView = { "HeightPerView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, HeightPerView), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HeightPerView_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HeightPerView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CastingLatency_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When CompositionMethod is External Composition, the latency of the casting output which could be adjusted to\n\x09  * match the camera latency in the external composition application */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is External Composition, the latency of the casting output which could be adjusted to\nmatch the camera latency in the external composition application" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CastingLatency = { "CastingLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, CastingLatency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CastingLatency_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CastingLatency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_BackdropColor_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** When CompositionMethod is External Composition, the color of the backdrop in the foreground view */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is External Composition, the color of the backdrop in the foreground view" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_BackdropColor = { "BackdropColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, BackdropColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_BackdropColor_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_BackdropColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData[] = {
		{ "Comment", "/** When CompositionMethod is Direct Composition, you could adjust this latency to delay the virtual\n\x09* hand movement by a small amount of time to match the camera latency */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is Direct Composition, you could adjust this latency to delay the virtual\nhand movement by a small amount of time to match the camera latency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HandPoseStateLatency = { "HandPoseStateLatency", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, HandPoseStateLatency_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData[] = {
		{ "Comment", "/** [Green-screen removal] Chroma Key Color. Apply when CompositionMethod is DirectComposition */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Color. Apply when CompositionMethod is DirectComposition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ChromaKeyColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData[] = {
		{ "Comment", "/** [Green-screen removal] Chroma Key Similarity. Apply when CompositionMethod is DirectComposition */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Similarity. Apply when CompositionMethod is DirectComposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySimilarity = { "ChromaKeySimilarity", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ChromaKeySimilarity_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData[] = {
		{ "Comment", "/** [Green-screen removal] Chroma Key Smooth Range. Apply when CompositionMethod is DirectComposition */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Smooth Range. Apply when CompositionMethod is DirectComposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySmoothRange = { "ChromaKeySmoothRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ChromaKeySmoothRange_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData[] = {
		{ "Comment", "/** [Green-screen removal] Chroma Key Spill Range. Apply when CompositionMethod is DirectComposition */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "[Green-screen removal] Chroma Key Spill Range. Apply when CompositionMethod is DirectComposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySpillRange = { "ChromaKeySpillRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ChromaKeySpillRange_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "Comment", "/** Set the amount of post process effects in the MR view for external composition */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Set the amount of post process effects in the MR view for external composition" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects = { "ExternalCompositionPostProcessEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, ExternalCompositionPostProcessEffects), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_PostProcessEffects, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData) }; // 3765435736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting_MetaData[] = {
		{ "Comment", "/** Turns MRC on and off (does not get saved to or loaded from ini) */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "Turns MRC on and off (does not get saved to or loaded from ini)" },
	};
#endif
	void Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting_SetBit(void* Obj)
	{
		((UOculusXRMR_Settings*)Obj)->bIsCasting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRMR_Settings), &Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod_MetaData[] = {
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod = { "CompositionMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, CompositionMethod), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CompositionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod_MetaData) }; // 177338256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera_MetaData[] = {
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Direct Composition deprecated." },
		{ "ModuleRelativePath", "Public/OculusXRMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera = { "CapturingCamera", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_Settings, CapturingCamera_DEPRECATED), Z_Construct_UEnum_OculusXRMR_EOculusXRMR_CameraDeviceEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera_MetaData), Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera_MetaData) }; // 522625868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRMR_Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ClippingReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bUseTrackedCameraResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_WidthPerView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HeightPerView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CastingLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_BackdropColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_HandPoseStateLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySimilarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySmoothRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ChromaKeySpillRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_bIsCasting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CompositionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_Settings_Statics::NewProp_CapturingCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRMR_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMR_Settings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMR_Settings_Statics::ClassParams = {
		&UOculusXRMR_Settings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRMR_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMR_Settings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_Settings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRMR_Settings()
	{
		if (!Z_Registration_Info_UClass_UOculusXRMR_Settings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMR_Settings.OuterSingleton, Z_Construct_UClass_UOculusXRMR_Settings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRMR_Settings.OuterSingleton;
	}
	template<> OCULUSXRMR_API UClass* StaticClass<UOculusXRMR_Settings>()
	{
		return UOculusXRMR_Settings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMR_Settings);
	UOculusXRMR_Settings::~UOculusXRMR_Settings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::EnumInfo[] = {
		{ EOculusXRMR_CameraDeviceEnum_StaticEnum, TEXT("EOculusXRMR_CameraDeviceEnum"), &Z_Registration_Info_UEnum_EOculusXRMR_CameraDeviceEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 522625868U) },
		{ EOculusXRMR_ClippingReference_StaticEnum, TEXT("EOculusXRMR_ClippingReference"), &Z_Registration_Info_UEnum_EOculusXRMR_ClippingReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1875156719U) },
		{ EOculusXRMR_PostProcessEffects_StaticEnum, TEXT("EOculusXRMR_PostProcessEffects"), &Z_Registration_Info_UEnum_EOculusXRMR_PostProcessEffects, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3765435736U) },
		{ EOculusXRMR_CompositionMethod_StaticEnum, TEXT("EOculusXRMR_CompositionMethod"), &Z_Registration_Info_UEnum_EOculusXRMR_CompositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 177338256U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMR_Settings, UOculusXRMR_Settings::StaticClass, TEXT("UOculusXRMR_Settings"), &Z_Registration_Info_UClass_UOculusXRMR_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMR_Settings), 3788851112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_2944251980(TEXT("/Script/OculusXRMR"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMR_Settings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

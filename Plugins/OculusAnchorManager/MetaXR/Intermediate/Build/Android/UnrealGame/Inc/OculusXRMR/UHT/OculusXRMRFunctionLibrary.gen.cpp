// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRMR/Public/OculusXRMRFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMRFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRMR();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execIsMrcActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::IsMrcActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execIsMrcEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::IsMrcEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execSetMrcScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::SetMrcScalingFactor(Z_Param_ScalingFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetMrcScalingFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOculusXRMRFunctionLibrary::GetMrcScalingFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execSetTrackingReferenceComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::SetTrackingReferenceComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetTrackingReferenceComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=UOculusXRMRFunctionLibrary::GetTrackingReferenceComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetOculusXRMRSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusXRMR_Settings**)Z_Param__Result=UOculusXRMRFunctionLibrary::GetOculusXRMRSettings();
		P_NATIVE_END;
	}
	void UOculusXRMRFunctionLibrary::StaticRegisterNativesUOculusXRMRFunctionLibrary()
	{
		UClass* Class = UOculusXRMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMrcScalingFactor", &UOculusXRMRFunctionLibrary::execGetMrcScalingFactor },
			{ "GetOculusXRMRSettings", &UOculusXRMRFunctionLibrary::execGetOculusXRMRSettings },
			{ "GetTrackingReferenceComponent", &UOculusXRMRFunctionLibrary::execGetTrackingReferenceComponent },
			{ "IsMrcActive", &UOculusXRMRFunctionLibrary::execIsMrcActive },
			{ "IsMrcEnabled", &UOculusXRMRFunctionLibrary::execIsMrcEnabled },
			{ "SetMrcScalingFactor", &UOculusXRMRFunctionLibrary::execSetMrcScalingFactor },
			{ "SetTrackingReferenceComponent", &UOculusXRMRFunctionLibrary::execSetTrackingReferenceComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics
	{
		struct OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the scaling factor for the MRC configuration. Returns 0 if not available.\n" },
		{ "DisplayName", "Get MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Get the scaling factor for the MRC configuration. Returns 0 if not available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetMrcScalingFactor", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics
	{
		struct OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms
		{
			UOculusXRMR_Settings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms, ReturnValue), Z_Construct_UClass_UOculusXRMR_Settings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the OculusXRMR settings object\n" },
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Get the OculusXRMR settings object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetOculusXRMRSettings", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics
	{
		struct OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the component that the OculusXRMR camera is tracking. When this is null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Get the component that the OculusXRMR camera is tracking. When this is null, the camera will track the player pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics
	{
		struct OculusXRMRFunctionLibrary_eventIsMrcActive_Parms
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
	void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMRFunctionLibrary_eventIsMrcActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventIsMrcActive_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled and actively capturing\n" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled and actively capturing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "IsMrcActive", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::OculusXRMRFunctionLibrary_eventIsMrcActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::OculusXRMRFunctionLibrary_eventIsMrcActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics
	{
		struct OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms
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
	void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Check if MRC is enabled\n" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Check if MRC is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "IsMrcEnabled", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics
	{
		struct OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms
		{
			float ScalingFactor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned.\n" },
		{ "CPP_Default_ScalingFactor", "1.000000" },
		{ "DisplayName", "Set MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "SetMrcScalingFactor", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics
	{
		struct OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
		{
			USceneComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the component for the OculusXRMR camera to track. If this is set to null, the camera will track the player pawn.\n" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
		{ "ToolTip", "Set the component for the OculusXRMR camera to track. If this is set to null, the camera will track the player pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRMRFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister()
	{
		return UOculusXRMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor, "GetMrcScalingFactor" }, // 1720030720
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings, "GetOculusXRMRSettings" }, // 464557061
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 517881744
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive, "IsMrcActive" }, // 3621677578
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled, "IsMrcEnabled" }, // 3170588520
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor, "SetMrcScalingFactor" }, // 3413988489
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 985852357
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMRFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::ClassParams = {
		&UOculusXRMRFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSXRMR_API UClass* StaticClass<UOculusXRMRFunctionLibrary>()
	{
		return UOculusXRMRFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMRFunctionLibrary);
	UOculusXRMRFunctionLibrary::~UOculusXRMRFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMRFunctionLibrary, UOculusXRMRFunctionLibrary::StaticClass, TEXT("UOculusXRMRFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMRFunctionLibrary), 2111057058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_3575843162(TEXT("/Script/OculusXRMR"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

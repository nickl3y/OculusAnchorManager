// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRPassthrough/Public/OculusXRPassthroughLayerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughLayerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase_NoRegister();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent_NoRegister();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_NoRegister();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execRemoveColorLut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveColorLut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorLUTWeight(Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTTarget)
	{
		P_GET_OBJECT(UOculusXRPassthroughColorLut,Z_Param_InColorLUTTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorLUTTarget(Z_Param_InColorLUTTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorLUTSource)
	{
		P_GET_OBJECT(UOculusXRPassthroughColorLut,Z_Param_InColorLUTSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorLUTSource(Z_Param_InColorLUTSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetLayerPlacement)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InLayerOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerPlacement(EOculusXRPassthroughLayerOrder(Z_Param_InLayerOrder));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execClearColorMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearColorMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorArray)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_InColorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorArray(Z_Param_Out_InColorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InColorMapType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorMapType(EOculusXRColorMapType(Z_Param_InColorMapType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapCurve)
	{
		P_GET_OBJECT(UCurveLinearColor,Z_Param_InColorMapCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorMapCurve(Z_Param_InColorMapCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_InColorOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorScaleAndOffset(Z_Param_InColorScale,Z_Param_InColorOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetBrightnessContrastSaturation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InContrast);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBrightness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSaturation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrightnessContrastSaturation(Z_Param_InContrast,Z_Param_InBrightness,Z_Param_InSaturation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetColorMapControls)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InContrast);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBrightness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosterize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorMapControls(Z_Param_InContrast,Z_Param_InBrightness,Z_Param_InPosterize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetEdgeRenderingColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InEdgeColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEdgeRenderingColor(Z_Param_InEdgeColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableColorMapCurve)
	{
		P_GET_UBOOL(Z_Param_bInEnableColorMapCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableColorMapCurve(Z_Param_bInEnableColorMapCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableColorMap)
	{
		P_GET_UBOOL(Z_Param_bInEnableColorMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableColorMap(Z_Param_bInEnableColorMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execEnableEdgeColor)
	{
		P_GET_UBOOL(Z_Param_bInEnableEdgeColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableEdgeColor(Z_Param_bInEnableEdgeColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerBase::execSetTextureOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureOpacity(Z_Param_InOpacity);
		P_NATIVE_END;
	}
	void UOculusXRPassthroughLayerBase::StaticRegisterNativesUOculusXRPassthroughLayerBase()
	{
		UClass* Class = UOculusXRPassthroughLayerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearColorMap", &UOculusXRPassthroughLayerBase::execClearColorMap },
			{ "EnableColorMap", &UOculusXRPassthroughLayerBase::execEnableColorMap },
			{ "EnableColorMapCurve", &UOculusXRPassthroughLayerBase::execEnableColorMapCurve },
			{ "EnableEdgeColor", &UOculusXRPassthroughLayerBase::execEnableEdgeColor },
			{ "RemoveColorLut", &UOculusXRPassthroughLayerBase::execRemoveColorLut },
			{ "SetBrightnessContrastSaturation", &UOculusXRPassthroughLayerBase::execSetBrightnessContrastSaturation },
			{ "SetColorArray", &UOculusXRPassthroughLayerBase::execSetColorArray },
			{ "SetColorLUTSource", &UOculusXRPassthroughLayerBase::execSetColorLUTSource },
			{ "SetColorLUTTarget", &UOculusXRPassthroughLayerBase::execSetColorLUTTarget },
			{ "SetColorLUTWeight", &UOculusXRPassthroughLayerBase::execSetColorLUTWeight },
			{ "SetColorMapControls", &UOculusXRPassthroughLayerBase::execSetColorMapControls },
			{ "SetColorMapCurve", &UOculusXRPassthroughLayerBase::execSetColorMapCurve },
			{ "SetColorMapType", &UOculusXRPassthroughLayerBase::execSetColorMapType },
			{ "SetColorScaleAndOffset", &UOculusXRPassthroughLayerBase::execSetColorScaleAndOffset },
			{ "SetEdgeRenderingColor", &UOculusXRPassthroughLayerBase::execSetEdgeRenderingColor },
			{ "SetLayerPlacement", &UOculusXRPassthroughLayerBase::execSetLayerPlacement },
			{ "SetTextureOpacity", &UOculusXRPassthroughLayerBase::execSetTextureOpacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "ClearColorMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics
	{
		struct OculusXRPassthroughLayerBase_eventEnableColorMap_Parms
		{
			bool bInEnableColorMap;
		};
		static void NewProp_bInEnableColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableColorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::NewProp_bInEnableColorMap_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableColorMap_Parms*)Obj)->bInEnableColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::NewProp_bInEnableColorMap = { "bInEnableColorMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableColorMap_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::NewProp_bInEnableColorMap_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::NewProp_bInEnableColorMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableColorMap", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::OculusXRPassthroughLayerBase_eventEnableColorMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::OculusXRPassthroughLayerBase_eventEnableColorMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics
	{
		struct OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms
		{
			bool bInEnableColorMapCurve;
		};
		static void NewProp_bInEnableColorMapCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableColorMapCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::NewProp_bInEnableColorMapCurve_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms*)Obj)->bInEnableColorMapCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::NewProp_bInEnableColorMapCurve = { "bInEnableColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::NewProp_bInEnableColorMapCurve_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::NewProp_bInEnableColorMapCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableColorMapCurve", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::OculusXRPassthroughLayerBase_eventEnableColorMapCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics
	{
		struct OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms
		{
			bool bInEnableEdgeColor;
		};
		static void NewProp_bInEnableEdgeColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableEdgeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::NewProp_bInEnableEdgeColor_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms*)Obj)->bInEnableEdgeColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::NewProp_bInEnableEdgeColor = { "bInEnableEdgeColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::NewProp_bInEnableEdgeColor_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::NewProp_bInEnableEdgeColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "EnableEdgeColor", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::OculusXRPassthroughLayerBase_eventEnableEdgeColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Removes color grading if any is active. */" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Removes color grading if any is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "RemoveColorLut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms
		{
			float InContrast;
			float InBrightness;
			float InSaturation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InContrast;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrightness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSaturation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InContrast = { "InContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InContrast), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InBrightness = { "InBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InBrightness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InSaturation = { "InSaturation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms, InSaturation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InContrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::NewProp_InSaturation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Set color map controls for color adjustment color mapping */" },
		{ "CPP_Default_InBrightness", "0.000000" },
		{ "CPP_Default_InContrast", "0.000000" },
		{ "CPP_Default_InSaturation", "0.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Set color map controls for color adjustment color mapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetBrightnessContrastSaturation", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::OculusXRPassthroughLayerBase_eventSetBrightnessContrastSaturation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorArray_Parms
		{
			TArray<FLinearColor> InColorArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InColorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray_Inner = { "InColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray = { "InColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorArray_Parms, InColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::NewProp_InColorArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Set color map array directly instead through a color curve*/" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Set color map array directly instead through a color curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorArray", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::OculusXRPassthroughLayerBase_eventSetColorArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::OculusXRPassthroughLayerBase_eventSetColorArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms
		{
			UOculusXRPassthroughColorLut* InColorLUTSource;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorLUTSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::NewProp_InColorLUTSource = { "InColorLUTSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms, InColorLUTSource), Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::NewProp_InColorLUTSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09* Sets Color LUT source.\n\x09* If ColorMapType is \"Color LUT\", then source will be blended with passthrough\n\x09* using folowing formula:\n\x09* Result = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )\n\x09* If ColorMapType is \"Interpolated Color LUT\", then source will be blended with color LUT target\n\x09* using folowing formula:\n\x09* Result = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Sets Color LUT source.\nIf ColorMapType is \"Color LUT\", then source will be blended with passthrough\nusing folowing formula:\nResult = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )\nIf ColorMapType is \"Interpolated Color LUT\", then source will be blended with color LUT target\nusing folowing formula:\nResult = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTSource", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms
		{
			UOculusXRPassthroughColorLut* InColorLUTTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorLUTTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::NewProp_InColorLUTTarget = { "InColorLUTTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms, InColorLUTTarget), Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::NewProp_InColorLUTTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09* Sets Color LUT target.\n\x09* If ColorMapType is \"Interpolated Color LUT\", then target will be blended with passthrough\n\x09* using folowing formula:\n\x09* Result = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\n\x09* Note: If ColorLUTSource is not specified, Color LUT will be not be applied to the Passthrough layer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Sets Color LUT target.\nIf ColorMapType is \"Interpolated Color LUT\", then target will be blended with passthrough\nusing folowing formula:\nResult = ColorLUTSource * (  1 - LutWeight ) + ColorLUTTarget * LutWeight\nNote: If ColorLUTSource is not specified, Color LUT will be not be applied to the Passthrough layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTTarget", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms
		{
			float InWeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Sets LUT weight. */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Sets LUT weight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorLUTWeight", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::OculusXRPassthroughLayerBase_eventSetColorLUTWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms
		{
			float InContrast;
			float InBrightness;
			float InPosterize;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InContrast;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBrightness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosterize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InContrast = { "InContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InContrast), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InBrightness = { "InBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InBrightness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InPosterize = { "InPosterize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms, InPosterize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InContrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::NewProp_InPosterize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Set color map controls for grayscale and grayscale to rgb color mapping*/" },
		{ "CPP_Default_InBrightness", "0.000000" },
		{ "CPP_Default_InContrast", "0.000000" },
		{ "CPP_Default_InPosterize", "0.000000" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Set color map controls for grayscale and grayscale to rgb color mapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapControls", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::OculusXRPassthroughLayerBase_eventSetColorMapControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms
		{
			UCurveLinearColor* InColorMapCurve;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InColorMapCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::NewProp_InColorMapCurve = { "InColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms, InColorMapCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::NewProp_InColorMapCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/** Set color curve that will be added to the color map in grayscale modes --> will be converted into a gradient*/" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Set color curve that will be added to the color map in grayscale modes --> will be converted into a gradient" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapCurve", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::OculusXRPassthroughLayerBase_eventSetColorMapCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorMapType_Parms
		{
			TEnumAsByte<EOculusXRColorMapType> InColorMapType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InColorMapType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::NewProp_InColorMapType = { "InColorMapType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorMapType_Parms, InColorMapType), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, METADATA_PARAMS(0, nullptr) }; // 3044762426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::NewProp_InColorMapType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorMapType", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::OculusXRPassthroughLayerBase_eventSetColorMapType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::OculusXRPassthroughLayerBase_eventSetColorMapType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms
		{
			FLinearColor InColorScale;
			FLinearColor InColorOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::NewProp_InColorScale = { "InColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms, InColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::NewProp_InColorOffset = { "InColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms, InColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::NewProp_InColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::NewProp_InColorOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "CPP_Default_InColorOffset", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_InColorScale", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::OculusXRPassthroughLayerBase_eventSetColorScaleAndOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms
		{
			FLinearColor InEdgeColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InEdgeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::NewProp_InEdgeColor = { "InEdgeColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms, InEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::NewProp_InEdgeColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetEdgeRenderingColor", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::OculusXRPassthroughLayerBase_eventSetEdgeRenderingColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms
		{
			TEnumAsByte<EOculusXRPassthroughLayerOrder> InLayerOrder;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InLayerOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::NewProp_InLayerOrder = { "InLayerOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms, InLayerOrder), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, METADATA_PARAMS(0, nullptr) }; // 2092346603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::NewProp_InLayerOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough Properties" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetLayerPlacement", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::OculusXRPassthroughLayerBase_eventSetLayerPlacement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics
	{
		struct OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms
		{
			float InOpacity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase, nullptr, "SetTextureOpacity", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::OculusXRPassthroughLayerBase_eventSetTextureOpacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPassthroughLayerBase);
	UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase_NoRegister()
	{
		return UOculusXRPassthroughLayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerOrder_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureOpacityFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureOpacityFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEdgeColor_MetaData[];
#endif
		static void NewProp_bEnableEdgeColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColorMap_MetaData[];
#endif
		static void NewProp_bEnableColorMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColorMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMapType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseColorMapCurve_MetaData[];
#endif
		static void NewProp_bUseColorMapCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColorMapCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMapCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorMapCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Posterize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Posterize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LutWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LutWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorLUTSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorLUTSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorLUTTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorLUTTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_ClearColorMap, "ClearColorMap" }, // 2943953579
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMap, "EnableColorMap" }, // 1952802046
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableColorMapCurve, "EnableColorMapCurve" }, // 163988779
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_EnableEdgeColor, "EnableEdgeColor" }, // 1787229334
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_RemoveColorLut, "RemoveColorLut" }, // 3385733954
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetBrightnessContrastSaturation, "SetBrightnessContrastSaturation" }, // 3224534384
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorArray, "SetColorArray" }, // 1191613678
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTSource, "SetColorLUTSource" }, // 192385131
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTTarget, "SetColorLUTTarget" }, // 2750779420
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorLUTWeight, "SetColorLUTWeight" }, // 3306817714
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapControls, "SetColorMapControls" }, // 2130449696
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapCurve, "SetColorMapCurve" }, // 3571808075
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorMapType, "SetColorMapType" }, // 2206614854
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 2702547583
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetEdgeRenderingColor, "SetEdgeRenderingColor" }, // 2561641205
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetLayerPlacement, "SetLayerPlacement" }, // 3918934458
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerBase_SetTextureOpacity, "SetTextureOpacity" }, // 3651541103
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Passthrough Layer Base" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LayerOrder_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Ordering of passthrough layer in relation to scene rendering */" },
		{ "DisplayName", "Layer Placement" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Ordering of passthrough layer in relation to scene rendering" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LayerOrder = { "LayerOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, LayerOrder), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LayerOrder_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LayerOrder_MetaData) }; // 2092346603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_TextureOpacityFactor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Opacity of the (main) passthrough texture.  */" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Opacity of the (main) passthrough texture." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_TextureOpacityFactor = { "TextureOpacityFactor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, TextureOpacityFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_TextureOpacityFactor_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_TextureOpacityFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Enable edge color */" },
		{ "DisplayName", "Enable Edge Rendering" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Enable edge color" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bEnableEdgeColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor = { "bEnableEdgeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_EdgeColor_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Color of the passthrough edge rendering effect. */" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color of the passthrough edge rendering effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_EdgeColor = { "EdgeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, EdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_EdgeColor_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_EdgeColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Enable color mapping */" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Enable color mapping" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bEnableColorMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap = { "bEnableColorMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapType_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Type of colormapping to perform */" },
		{ "EditCondition", "bEnableColorMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Type of colormapping to perform" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapType = { "ColorMapType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorMapType), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapType_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapType_MetaData) }; // 3044762426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Whether to use color map curve or gradient*/" },
		{ "EditCondition", "bEnableColorMap && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Whether to use color map curve or gradient" },
	};
#endif
	void Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve_SetBit(void* Obj)
	{
		((UOculusXRPassthroughLayerBase*)Obj)->bUseColorMapCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve = { "bUseColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughLayerBase), &Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapCurve_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Passthrough color mapping gradient converts grayscale to color*/" },
		{ "EditCondition", "bEnableColorMap && bUseColorMapCurve && ColorMapType == 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Passthrough color mapping gradient converts grayscale to color" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapCurve = { "ColorMapCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorMapCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapCurve_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Contrast setting for color mapping*/" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Contrast setting for color mapping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Contrast_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Contrast_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Brightness setting for color mapping*/" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Brightness setting for color mapping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Brightness_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Brightness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Posterize_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Posterize setting for grayscale and grayscale to color mapping*/" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 0 && ColorMapType < 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Posterize setting for grayscale and grayscale to color mapping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Posterize = { "Posterize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Posterize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Posterize_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Posterize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Saturation setting for color adjustment mapping*/" },
		{ "EditCondition", "bEnableColorMap && ColorMapType == 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Saturation setting for color adjustment mapping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, Saturation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Saturation_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Saturation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LutWeight_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Color LUT Weight. It is used to combine LUT with Passthrough if one LUT is provided. If two LUTs are provided LutWeight will be used to blend them. */" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color LUT Weight. It is used to combine LUT with Passthrough if one LUT is provided. If two LUTs are provided LutWeight will be used to blend them." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LutWeight = { "LutWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, LutWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LutWeight_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LutWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTSource_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/**\n\x09 *  Color LUT properties. If only ColorLUTSource is provided it will be blended with passthrough layer using following formula:\n\x09 *  Result = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )\n\x09 */" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color LUT properties. If only ColorLUTSource is provided it will be blended with passthrough layer using following formula:\nResult = ColorLUTSource * LutWeight + Passthrough * (1 - LutWeight )" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTSource = { "ColorLUTSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorLUTSource), Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTSource_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTTarget_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/**\n\x09 *  Color LUT properties. If two LUTs are provided they will be blended using following formula:\n\x09 *  Result = ColorLUTsSource * (  1 - LutWeight ) + ColorLUTsTarget * LutWeight\n\x09 */" },
		{ "EditCondition", "bEnableColorMap && ColorMapType > 4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color LUT properties. If two LUTs are provided they will be blended using following formula:\nResult = ColorLUTsSource * (  1 - LutWeight ) + ColorLUTsTarget * LutWeight" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTTarget = { "ColorLUTTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorLUTTarget), Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTTarget_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorScale_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Color value that will be multiplied to the current color map*/" },
		{ "EditCondition", "bEnableColorMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color value that will be multiplied to the current color map" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorScale_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorOffset_MetaData[] = {
		{ "Category", "Passthrough Properties" },
		{ "Comment", "/** Color value that will be added to the current color map*/" },
		{ "EditCondition", "bEnableColorMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Color value that will be added to the current color map" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerBase, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorOffset_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LayerOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_TextureOpacityFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableEdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_EdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bEnableColorMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_bUseColorMapCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorMapCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Posterize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_Saturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_LutWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorLUTTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::NewProp_ColorOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughLayerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::ClassParams = {
		&UOculusXRPassthroughLayerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRPassthroughLayerBase()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton, Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<UOculusXRPassthroughLayerBase>()
	{
		return UOculusXRPassthroughLayerBase::StaticClass();
	}
	UOculusXRPassthroughLayerBase::UOculusXRPassthroughLayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPassthroughLayerBase);
	UOculusXRPassthroughLayerBase::~UOculusXRPassthroughLayerBase() {}
	void UOculusXRStereoLayerShapeReconstructed::StaticRegisterNativesUOculusXRStereoLayerShapeReconstructed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRStereoLayerShapeReconstructed);
	UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_NoRegister()
	{
		return UOculusXRStereoLayerShapeReconstructed::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Reconstructed Passthrough Layer*/" },
		{ "DisplayName", "Reconstructed Passthrough Layer" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Reconstructed Passthrough Layer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStereoLayerShapeReconstructed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::ClassParams = {
		&UOculusXRStereoLayerShapeReconstructed::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed()
	{
		if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton, Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<UOculusXRStereoLayerShapeReconstructed>()
	{
		return UOculusXRStereoLayerShapeReconstructed::StaticClass();
	}
	UOculusXRStereoLayerShapeReconstructed::UOculusXRStereoLayerShapeReconstructed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRStereoLayerShapeReconstructed);
	UOculusXRStereoLayerShapeReconstructed::~UOculusXRStereoLayerShapeReconstructed() {}
	void UOculusXRStereoLayerShapeUserDefined::StaticRegisterNativesUOculusXRStereoLayerShapeUserDefined()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRStereoLayerShapeUserDefined);
	UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_NoRegister()
	{
		return UOculusXRStereoLayerShapeUserDefined::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusXRPassthroughLayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* User Defined Passthrough Layer*/" },
		{ "DisplayName", "User Defined Passthrough Layer" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "User Defined Passthrough Layer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRStereoLayerShapeUserDefined>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::ClassParams = {
		&UOculusXRStereoLayerShapeUserDefined::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined()
	{
		if (!Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton, Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<UOculusXRStereoLayerShapeUserDefined>()
	{
		return UOculusXRStereoLayerShapeUserDefined::StaticClass();
	}
	UOculusXRStereoLayerShapeUserDefined::UOculusXRStereoLayerShapeUserDefined(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRStereoLayerShapeUserDefined);
	UOculusXRStereoLayerShapeUserDefined::~UOculusXRStereoLayerShapeUserDefined() {}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execMarkPassthroughStyleForUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkPassthroughStyleForUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execIsSurfaceGeometryComponent)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSurfaceGeometryComponent(Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execIsSurfaceGeometry)
	{
		P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSurfaceGeometry(Z_Param_StaticMeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveProceduralSurfaceGeometry)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveProceduralSurfaceGeometry(Z_Param_ProceduralMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveStaticSurfaceGeometry)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStaticSurfaceGeometry(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execRemoveSurfaceGeometry)
	{
		P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSurfaceGeometry(Z_Param_StaticMeshActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddProceduralSurfaceGeometry)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProceduralMeshComponent);
		P_GET_UBOOL(Z_Param_updateTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddProceduralSurfaceGeometry(Z_Param_ProceduralMeshComponent,Z_Param_updateTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddStaticSurfaceGeometry)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_UBOOL(Z_Param_updateTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticSurfaceGeometry(Z_Param_StaticMeshComponent,Z_Param_updateTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughLayerComponent::execAddSurfaceGeometry)
	{
		P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
		P_GET_UBOOL(Z_Param_updateTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSurfaceGeometry(Z_Param_StaticMeshActor,Z_Param_updateTransform);
		P_NATIVE_END;
	}
	void UOculusXRPassthroughLayerComponent::StaticRegisterNativesUOculusXRPassthroughLayerComponent()
	{
		UClass* Class = UOculusXRPassthroughLayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddProceduralSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execAddProceduralSurfaceGeometry },
			{ "AddStaticSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execAddStaticSurfaceGeometry },
			{ "AddSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execAddSurfaceGeometry },
			{ "IsSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execIsSurfaceGeometry },
			{ "IsSurfaceGeometryComponent", &UOculusXRPassthroughLayerComponent::execIsSurfaceGeometryComponent },
			{ "MarkPassthroughStyleForUpdate", &UOculusXRPassthroughLayerComponent::execMarkPassthroughStyleForUpdate },
			{ "RemoveProceduralSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execRemoveProceduralSurfaceGeometry },
			{ "RemoveStaticSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execRemoveStaticSurfaceGeometry },
			{ "RemoveSurfaceGeometry", &UOculusXRPassthroughLayerComponent::execRemoveSurfaceGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms
		{
			UProceduralMeshComponent* ProceduralMeshComponent;
			bool updateTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
		static void NewProp_updateTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData) };
	void Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::NewProp_updateTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddProceduralSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddProceduralSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			bool updateTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static void NewProp_updateTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData) };
	void Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::NewProp_updateTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddStaticSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddStaticSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms
		{
			AStaticMeshActor* StaticMeshActor;
			bool updateTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static void NewProp_updateTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_updateTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_updateTransform_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms*)Obj)->updateTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_updateTransform = { "updateTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_updateTransform_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_StaticMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::NewProp_updateTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddStaticSurfaceGeometry instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "AddSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventAddSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms
		{
			AStaticMeshActor* StaticMeshActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_StaticMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use IsSurfaceGeometryComponent instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "IsSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms
		{
			const UMeshComponent* MeshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_MeshComponent_MetaData) };
	void Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms), &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "IsSurfaceGeometryComponent", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::OculusXRPassthroughLayerComponent_eventIsSurfaceGeometryComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// Manually mark the stereo layer passthrough effect for updating\n" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
		{ "ToolTip", "Manually mark the stereo layer passthrough effect for updating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "MarkPassthroughStyleForUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms
		{
			UProceduralMeshComponent* ProceduralMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent = { "ProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms, ProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::NewProp_ProceduralMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveProceduralSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveProceduralSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveStaticSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveStaticSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics
	{
		struct OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms
		{
			AStaticMeshActor* StaticMeshActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::NewProp_StaticMeshActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use RemoveStaticSurfaceGeometry instead" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughLayerComponent, nullptr, "RemoveSurfaceGeometry", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::OculusXRPassthroughLayerComponent_eventRemoveSurfaceGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPassthroughLayerComponent);
	UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent_NoRegister()
	{
		return UOculusXRPassthroughLayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassthroughComponentMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PassthroughComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughComponentMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PassthroughComponentMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddProceduralSurfaceGeometry, "AddProceduralSurfaceGeometry" }, // 2970432113
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddStaticSurfaceGeometry, "AddStaticSurfaceGeometry" }, // 557676646
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_AddSurfaceGeometry, "AddSurfaceGeometry" }, // 1808361670
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometry, "IsSurfaceGeometry" }, // 317429637
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_IsSurfaceGeometryComponent, "IsSurfaceGeometryComponent" }, // 1873751109
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_MarkPassthroughStyleForUpdate, "MarkPassthroughStyleForUpdate" }, // 137247593
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveProceduralSurfaceGeometry, "RemoveProceduralSurfaceGeometry" }, // 4054143620
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveStaticSurfaceGeometry, "RemoveStaticSurfaceGeometry" }, // 2949359963
		{ &Z_Construct_UFunction_UOculusXRPassthroughLayerComponent_RemoveSurfaceGeometry, "RemoveSurfaceGeometry" }, // 4073838251
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRPassthroughLayerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_ValueProp = { "PassthroughComponentMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_Key_KeyProp = { "PassthroughComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap = { "PassthroughComponentMap", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughLayerComponent, PassthroughComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_MetaData), Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::NewProp_PassthroughComponentMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughLayerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::ClassParams = {
		&UOculusXRPassthroughLayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRPassthroughLayerComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton, Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<UOculusXRPassthroughLayerComponent>()
	{
		return UOculusXRPassthroughLayerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPassthroughLayerComponent);
	UOculusXRPassthroughLayerComponent::~UOculusXRPassthroughLayerComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughLayerBase, UOculusXRPassthroughLayerBase::StaticClass, TEXT("UOculusXRPassthroughLayerBase"), &Z_Registration_Info_UClass_UOculusXRPassthroughLayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughLayerBase), 2495897238U) },
		{ Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed, UOculusXRStereoLayerShapeReconstructed::StaticClass, TEXT("UOculusXRStereoLayerShapeReconstructed"), &Z_Registration_Info_UClass_UOculusXRStereoLayerShapeReconstructed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStereoLayerShapeReconstructed), 1524967194U) },
		{ Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined, UOculusXRStereoLayerShapeUserDefined::StaticClass, TEXT("UOculusXRStereoLayerShapeUserDefined"), &Z_Registration_Info_UClass_UOculusXRStereoLayerShapeUserDefined, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRStereoLayerShapeUserDefined), 1586189255U) },
		{ Z_Construct_UClass_UOculusXRPassthroughLayerComponent, UOculusXRPassthroughLayerComponent::StaticClass, TEXT("UOculusXRPassthroughLayerComponent"), &Z_Registration_Info_UClass_UOculusXRPassthroughLayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughLayerComponent), 2421676621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_1858655890(TEXT("/Script/OculusXRPassthrough"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

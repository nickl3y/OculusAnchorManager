// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMD/Public/OculusXRPassthroughLayerShapes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughLayerShapes() {}
// Cross Module References
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder();
	UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRColorMapType;
	static UEnum* EOculusXRColorMapType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRColorMapType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRColorMapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRColorMapType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRColorMapType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRColorMapType>()
	{
		return EOculusXRColorMapType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enumerators[] = {
		{ "ColorMapType_None", (int64)ColorMapType_None },
		{ "ColorMapType_GrayscaleToColor", (int64)ColorMapType_GrayscaleToColor },
		{ "ColorMapType_Grayscale", (int64)ColorMapType_Grayscale },
		{ "ColorMapType_ColorAdjustment", (int64)ColorMapType_ColorAdjustment },
		{ "ColorMapType_ColorLut", (int64)ColorMapType_ColorLut },
		{ "ColorMapType_ColorLut_Interpolated", (int64)ColorMapType_ColorLut_Interpolated },
		{ "ColorMapType_MAX", (int64)ColorMapType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enum_MetaDataParams[] = {
		{ "ColorMapType_ColorAdjustment.Comment", "/** Color Adjustment */" },
		{ "ColorMapType_ColorAdjustment.DisplayName", "Color Adjustment" },
		{ "ColorMapType_ColorAdjustment.Name", "ColorMapType_ColorAdjustment" },
		{ "ColorMapType_ColorAdjustment.ToolTip", "Color Adjustment" },
		{ "ColorMapType_ColorLut.Comment", "/** Color LUT */" },
		{ "ColorMapType_ColorLut.DisplayName", "Color LUT" },
		{ "ColorMapType_ColorLut.Name", "ColorMapType_ColorLut" },
		{ "ColorMapType_ColorLut.ToolTip", "Color LUT" },
		{ "ColorMapType_ColorLut_Interpolated.Comment", "/** Interpolated Color LUT */" },
		{ "ColorMapType_ColorLut_Interpolated.DisplayName", "Interpolated Color LUT" },
		{ "ColorMapType_ColorLut_Interpolated.Name", "ColorMapType_ColorLut_Interpolated" },
		{ "ColorMapType_ColorLut_Interpolated.ToolTip", "Interpolated Color LUT" },
		{ "ColorMapType_Grayscale.Comment", "/** Grayscale */" },
		{ "ColorMapType_Grayscale.DisplayName", "Grayscale" },
		{ "ColorMapType_Grayscale.Name", "ColorMapType_Grayscale" },
		{ "ColorMapType_Grayscale.ToolTip", "Grayscale" },
		{ "ColorMapType_GrayscaleToColor.Comment", "/** Grayscale to color */" },
		{ "ColorMapType_GrayscaleToColor.DisplayName", "Grayscale To Color" },
		{ "ColorMapType_GrayscaleToColor.Name", "ColorMapType_GrayscaleToColor" },
		{ "ColorMapType_GrayscaleToColor.ToolTip", "Grayscale to color" },
		{ "ColorMapType_MAX.Name", "ColorMapType_MAX" },
		{ "ColorMapType_None.Comment", "/** None*/" },
		{ "ColorMapType_None.DisplayName", "None" },
		{ "ColorMapType_None.Name", "ColorMapType_None" },
		{ "ColorMapType_None.ToolTip", "None" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerShapes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRColorMapType",
		"EOculusXRColorMapType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRColorMapType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRColorMapType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRColorMapType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRColorMapType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder;
	static UEnum* EOculusXRPassthroughLayerOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRPassthroughLayerOrder"));
		}
		return Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRPassthroughLayerOrder>()
	{
		return EOculusXRPassthroughLayerOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enumerators[] = {
		{ "PassthroughLayerOrder_Overlay", (int64)PassthroughLayerOrder_Overlay },
		{ "PassthroughLayerOrder_Underlay", (int64)PassthroughLayerOrder_Underlay },
		{ "PassthroughLayerOrder_MAX", (int64)PassthroughLayerOrder_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughLayerShapes.h" },
		{ "PassthroughLayerOrder_MAX.Name", "PassthroughLayerOrder_MAX" },
		{ "PassthroughLayerOrder_Overlay.Comment", "/** Layer is rendered on top of scene */" },
		{ "PassthroughLayerOrder_Overlay.DisplayName", "Overlay" },
		{ "PassthroughLayerOrder_Overlay.Name", "PassthroughLayerOrder_Overlay" },
		{ "PassthroughLayerOrder_Overlay.ToolTip", "Layer is rendered on top of scene" },
		{ "PassthroughLayerOrder_Underlay.Comment", "/** Layer is rendered under scene */" },
		{ "PassthroughLayerOrder_Underlay.DisplayName", "Underlay" },
		{ "PassthroughLayerOrder_Underlay.Name", "PassthroughLayerOrder_Underlay" },
		{ "PassthroughLayerOrder_Underlay.ToolTip", "Layer is rendered under scene" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRPassthroughLayerOrder",
		"EOculusXRPassthroughLayerOrder",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRPassthroughLayerOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_Statics::EnumInfo[] = {
		{ EOculusXRColorMapType_StaticEnum, TEXT("EOculusXRColorMapType"), &Z_Registration_Info_UEnum_EOculusXRColorMapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3044762426U) },
		{ EOculusXRPassthroughLayerOrder_StaticEnum, TEXT("EOculusXRPassthroughLayerOrder"), &Z_Registration_Info_UEnum_EOculusXRPassthroughLayerOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2092346603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_113333202(TEXT("/Script/OculusXRHMD"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRPassthroughLayerShapes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

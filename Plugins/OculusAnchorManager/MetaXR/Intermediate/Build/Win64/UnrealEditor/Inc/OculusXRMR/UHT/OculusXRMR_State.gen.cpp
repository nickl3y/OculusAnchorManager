// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRMR/Private/OculusXRMR_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMR_State() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_State();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_State_NoRegister();
	OCULUSXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRTrackedCamera();
	UPackage* Z_Construct_UPackage__Script_OculusXRMR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera;
class UScriptStruct* FOculusXRTrackedCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRTrackedCamera, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("OculusXRTrackedCamera"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.OuterSingleton;
}
template<> OCULUSXRMR_API UScriptStruct* StaticStruct<FOculusXRTrackedCamera>()
{
	return FOculusXRTrackedCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachedTrackedDevice_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedTrackedDevice_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachedTrackedDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratedOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRTrackedCamera>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** >=0: the index of the external camera\n\x09\x09* -1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)\n\x09\x09*/" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", ">=0: the index of the external camera\n-1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The external camera name set through the CameraTool */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The external camera name set through the CameraTool" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "Comment", "/** The time that this camera was updated */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The time that this camera was updated" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UpdateTime = { "UpdateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, UpdateTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UpdateTime_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UpdateTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The horizontal FOV, in degrees */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The horizontal FOV, in degrees" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_FieldOfView_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_FieldOfView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeX_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeX_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeY_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeY_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeY_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData[] = {
		{ "Comment", "/** The tracking node the external camera is bound to */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The tracking node the external camera is bound to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice = { "AttachedTrackedDevice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, AttachedTrackedDevice), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData) }; // 3793403805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedRotation = { "CalibratedRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, CalibratedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedOffset = { "CalibratedOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, CalibratedOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserRotation_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserRotation = { "UserRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, UserRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserRotation_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserOffset_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserOffset = { "UserOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, UserOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserOffset_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawRotation_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device (Deprecated) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "All camera pose info is now in stage space, do not use raw pose data." },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device (Deprecated)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawRotation = { "RawRotation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, RawRotation_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawRotation_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawOffset_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device (Deprecated) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "All camera pose info is now in stage space, do not use raw pose data." },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device (Deprecated)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawOffset = { "RawOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRTrackedCamera, RawOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawOffset_MetaData), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_AttachedTrackedDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_CalibratedOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_UserOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewProp_RawOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		&NewStructOps,
		"OculusXRTrackedCamera",
		Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::PropPointers),
		sizeof(FOculusXRTrackedCamera),
		alignof(FOculusXRTrackedCamera),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRTrackedCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera.InnerSingleton;
	}
	void UOculusXRMR_State::StaticRegisterNativesUOculusXRMR_State()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRMR_State);
	UClass* Z_Construct_UClass_UOculusXRMR_State_NoRegister()
	{
		return UOculusXRMR_State::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRMR_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedCamera_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingReferenceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingReferenceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeCameraStateRequested_MetaData[];
#endif
		static void NewProp_ChangeCameraStateRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeCameraStateRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindToTrackedCameraIndexRequested_MetaData[];
#endif
		static void NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BindToTrackedCameraIndexRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRMR_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OculusXRMR" },
		{ "Comment", "/**\n* Object to hold the state of MR capture and capturing camera\n*/" },
		{ "IncludePath", "OculusXRMR_State.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Object to hold the state of MR capture and capturing camera" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackedCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackedCamera = { "TrackedCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_State, TrackedCamera), Z_Construct_UScriptStruct_FOculusXRTrackedCamera, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackedCamera_MetaData), Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackedCamera_MetaData) }; // 2166774116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData[] = {
		{ "Comment", "// Component at the tracking origin that the camera calibration is applied to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "Component at the tracking origin that the camera calibration is applied to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackingReferenceComponent = { "TrackingReferenceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_State, TrackingReferenceComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData), Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Comment", "// A multiplier on the camera distance, should be based on the scaling of the player component\n" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "A multiplier on the camera distance, should be based on the scaling of the player component" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRMR_State, ScalingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ScalingFactor_MetaData), Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ScalingFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera state for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera state for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit(void* Obj)
	{
		((UOculusXRMR_State*)Obj)->ChangeCameraStateRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested = { "ChangeCameraStateRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRMR_State), &Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData), Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera index for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera index for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj)
	{
		((UOculusXRMR_State*)Obj)->BindToTrackedCameraIndexRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested = { "BindToTrackedCameraIndexRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRMR_State), &Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData), Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRMR_State_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackedCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_TrackingReferenceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_ChangeCameraStateRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRMR_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMR_State>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMR_State_Statics::ClassParams = {
		&UOculusXRMR_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRMR_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMR_State_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_State_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRMR_State()
	{
		if (!Z_Registration_Info_UClass_UOculusXRMR_State.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMR_State.OuterSingleton, Z_Construct_UClass_UOculusXRMR_State_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRMR_State.OuterSingleton;
	}
	template<> OCULUSXRMR_API UClass* StaticClass<UOculusXRMR_State>()
	{
		return UOculusXRMR_State::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMR_State);
	UOculusXRMR_State::~UOculusXRMR_State() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRTrackedCamera::StaticStruct, Z_Construct_UScriptStruct_FOculusXRTrackedCamera_Statics::NewStructOps, TEXT("OculusXRTrackedCamera"), &Z_Registration_Info_UScriptStruct_OculusXRTrackedCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRTrackedCamera), 2166774116U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMR_State, UOculusXRMR_State::StaticClass, TEXT("UOculusXRMR_State"), &Z_Registration_Info_UClass_UOculusXRMR_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMR_State), 3414800397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_915866175(TEXT("/Script/OculusXRMR"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_State_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

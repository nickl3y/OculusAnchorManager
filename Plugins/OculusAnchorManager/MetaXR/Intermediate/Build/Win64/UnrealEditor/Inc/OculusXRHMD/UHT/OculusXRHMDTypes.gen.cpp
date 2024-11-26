// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMD/Public/OculusXRHMDTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRHMDTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType();
	OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult();
	OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile();
	OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField();
	OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc();
	UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType;
	static UEnum* EOculusXRTrackedDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRTrackedDeviceType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRTrackedDeviceType>()
	{
		return EOculusXRTrackedDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enumerators[] = {
		{ "EOculusXRTrackedDeviceType::None", (int64)EOculusXRTrackedDeviceType::None },
		{ "EOculusXRTrackedDeviceType::HMD", (int64)EOculusXRTrackedDeviceType::HMD },
		{ "EOculusXRTrackedDeviceType::LTouch", (int64)EOculusXRTrackedDeviceType::LTouch },
		{ "EOculusXRTrackedDeviceType::RTouch", (int64)EOculusXRTrackedDeviceType::RTouch },
		{ "EOculusXRTrackedDeviceType::Touch", (int64)EOculusXRTrackedDeviceType::Touch },
		{ "EOculusXRTrackedDeviceType::DeviceObjectZero", (int64)EOculusXRTrackedDeviceType::DeviceObjectZero },
		{ "EOculusXRTrackedDeviceType::All", (int64)EOculusXRTrackedDeviceType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All Devices" },
		{ "All.Name", "EOculusXRTrackedDeviceType::All" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
		{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
		{ "DeviceObjectZero.Name", "EOculusXRTrackedDeviceType::DeviceObjectZero" },
		{ "HMD.DisplayName", "HMD" },
		{ "HMD.Name", "EOculusXRTrackedDeviceType::HMD" },
		{ "LTouch.DisplayName", "Left Hand" },
		{ "LTouch.Name", "EOculusXRTrackedDeviceType::LTouch" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "None.DisplayName", "No Devices" },
		{ "None.Name", "EOculusXRTrackedDeviceType::None" },
		{ "RTouch.DisplayName", "Right Hand" },
		{ "RTouch.Name", "EOculusXRTrackedDeviceType::RTouch" },
		{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
		{ "Touch.DisplayName", "All Hands" },
		{ "Touch.Name", "EOculusXRTrackedDeviceType::Touch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRTrackedDeviceType",
		"EOculusXRTrackedDeviceType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField;
class UScriptStruct* FOculusXRHmdUserProfileField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("OculusXRHmdUserProfileField"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.OuterSingleton;
}
template<> OCULUSXRHMD_API UScriptStruct* StaticStruct<FOculusXRHmdUserProfileField>()
{
	return FOculusXRHmdUserProfileField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRHmdUserProfileField>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfileField, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldName_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfileField, FieldValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldValue_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewProp_FieldValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		&NewStructOps,
		"OculusXRHmdUserProfileField",
		Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::PropPointers),
		sizeof(FOculusXRHmdUserProfileField),
		alignof(FOculusXRHmdUserProfileField),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile;
class UScriptStruct* FOculusXRHmdUserProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("OculusXRHmdUserProfile"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.OuterSingleton;
}
template<> OCULUSXRHMD_API UScriptStruct* StaticStruct<FOculusXRHmdUserProfile>()
{
	return FOculusXRHmdUserProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRHmdUserProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Name of the user's profile. */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Name of the user's profile." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Gender of the user (\"male\", \"female\", etc). */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Gender of the user (\"male\", \"female\", etc)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Gender_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Gender_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, PlayerHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Height of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Height of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, EyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_EyeHeight_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_EyeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Interpupillary distance of the player, in meters */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Interpupillary distance of the player, in meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, IPD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_IPD_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_IPD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** Neck-to-eye distance, in meters. X - horizontal, Y - vertical. */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Neck-to-eye distance, in meters. X - horizontal, Y - vertical." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField, METADATA_PARAMS(0, nullptr) }; // 785545490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields_MetaData), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields_MetaData) }; // 785545490
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_PlayerHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_EyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_IPD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_NeckToEyeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewProp_ExtraFields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		&NewStructOps,
		"OculusXRHmdUserProfile",
		Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::PropPointers),
		sizeof(FOculusXRHmdUserProfile),
		alignof(FOculusXRHmdUserProfile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRHmdUserProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod;
	static UEnum* EOculusXRFoveatedRenderingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRFoveatedRenderingMethod"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRFoveatedRenderingMethod>()
	{
		return EOculusXRFoveatedRenderingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enumerators[] = {
		{ "EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering", (int64)EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering },
		{ "EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering", (int64)EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EyeTrackedFoveatedRendering.Name", "EOculusXRFoveatedRenderingMethod::EyeTrackedFoveatedRendering" },
		{ "FixedFoveatedRendering.Name", "EOculusXRFoveatedRenderingMethod::FixedFoveatedRendering" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRFoveatedRenderingMethod",
		"EOculusXRFoveatedRenderingMethod",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel;
	static UEnum* EOculusXRFoveatedRenderingLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRFoveatedRenderingLevel"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRFoveatedRenderingLevel>()
	{
		return EOculusXRFoveatedRenderingLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enumerators[] = {
		{ "EOculusXRFoveatedRenderingLevel::Off", (int64)EOculusXRFoveatedRenderingLevel::Off },
		{ "EOculusXRFoveatedRenderingLevel::Low", (int64)EOculusXRFoveatedRenderingLevel::Low },
		{ "EOculusXRFoveatedRenderingLevel::Medium", (int64)EOculusXRFoveatedRenderingLevel::Medium },
		{ "EOculusXRFoveatedRenderingLevel::High", (int64)EOculusXRFoveatedRenderingLevel::High },
		{ "EOculusXRFoveatedRenderingLevel::HighTop", (int64)EOculusXRFoveatedRenderingLevel::HighTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRFoveatedRenderingLevel::High" },
		{ "HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top\n" },
		{ "HighTop.Name", "EOculusXRFoveatedRenderingLevel::HighTop" },
		{ "HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top" },
		{ "Low.Name", "EOculusXRFoveatedRenderingLevel::Low" },
		{ "Medium.Name", "EOculusXRFoveatedRenderingLevel::Medium" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Off.Name", "EOculusXRFoveatedRenderingLevel::Off" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRFoveatedRenderingLevel",
		"EOculusXRFoveatedRenderingLevel",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRBoundaryType;
	static UEnum* EOculusXRBoundaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoundaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRBoundaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRBoundaryType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRBoundaryType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRBoundaryType>()
	{
		return EOculusXRBoundaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enumerators[] = {
		{ "EOculusXRBoundaryType::Boundary_Outer", (int64)EOculusXRBoundaryType::Boundary_Outer },
		{ "EOculusXRBoundaryType::Boundary_PlayArea", (int64)EOculusXRBoundaryType::Boundary_PlayArea },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boundary_Outer.DisplayName", "Outer Boundary" },
		{ "Boundary_Outer.Name", "EOculusXRBoundaryType::Boundary_Outer" },
		{ "Boundary_PlayArea.DisplayName", "Play Area" },
		{ "Boundary_PlayArea.Name", "EOculusXRBoundaryType::Boundary_PlayArea" },
		{ "Comment", "/* Guardian boundary types*/" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Guardian boundary types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRBoundaryType",
		"EOculusXRBoundaryType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoundaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRBoundaryType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRBoundaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRBoundaryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRColorSpace;
	static UEnum* EOculusXRColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRColorSpace"));
		}
		return Z_Registration_Info_UEnum_EOculusXRColorSpace.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRColorSpace>()
	{
		return EOculusXRColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enumerators[] = {
		{ "EOculusXRColorSpace::Unknown", (int64)EOculusXRColorSpace::Unknown },
		{ "EOculusXRColorSpace::Unmanaged", (int64)EOculusXRColorSpace::Unmanaged },
		{ "EOculusXRColorSpace::Rec_2020", (int64)EOculusXRColorSpace::Rec_2020 },
		{ "EOculusXRColorSpace::Rec_709", (int64)EOculusXRColorSpace::Rec_709 },
		{ "EOculusXRColorSpace::Rift_CV1", (int64)EOculusXRColorSpace::Rift_CV1 },
		{ "EOculusXRColorSpace::Rift_S", (int64)EOculusXRColorSpace::Rift_S },
		{ "EOculusXRColorSpace::Quest", (int64)EOculusXRColorSpace::Quest },
		{ "EOculusXRColorSpace::P3", (int64)EOculusXRColorSpace::P3 },
		{ "EOculusXRColorSpace::Adobe_RGB", (int64)EOculusXRColorSpace::Adobe_RGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Adobe_RGB.Comment", "/// Similar to sRGB but with deeper greens using D65 white point\n" },
		{ "Adobe_RGB.Name", "EOculusXRColorSpace::Adobe_RGB" },
		{ "Adobe_RGB.ToolTip", "Similar to sRGB but with deeper greens using D65 white point" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "P3.Comment", "/// DCI-P3 color space. See documentation for more details\n" },
		{ "P3.DisplayName", "P3 (Recommended)" },
		{ "P3.Name", "EOculusXRColorSpace::P3" },
		{ "P3.ToolTip", "DCI-P3 color space. See documentation for more details" },
		{ "Quest.Comment", "/// Oculus Quest's native color space is slightly different than Rift CV1\n" },
		{ "Quest.DisplayName", "Quest 1" },
		{ "Quest.Name", "EOculusXRColorSpace::Quest" },
		{ "Quest.ToolTip", "Oculus Quest's native color space is slightly different than Rift CV1" },
		{ "Rec_2020.Comment", "/// Color space for standardized color across all Oculus HMDs with D65 white point\n" },
		{ "Rec_2020.Name", "EOculusXRColorSpace::Rec_2020" },
		{ "Rec_2020.ToolTip", "Color space for standardized color across all Oculus HMDs with D65 white point" },
		{ "Rec_709.Comment", "/// Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB\n" },
		{ "Rec_709.Name", "EOculusXRColorSpace::Rec_709" },
		{ "Rec_709.ToolTip", "Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB" },
		{ "Rift_CV1.Comment", "/// Oculus Rift CV1 uses a unique color space, see documentation for more info\n" },
		{ "Rift_CV1.DisplayName", "Rift CV1" },
		{ "Rift_CV1.Name", "EOculusXRColorSpace::Rift_CV1" },
		{ "Rift_CV1.ToolTip", "Oculus Rift CV1 uses a unique color space, see documentation for more info" },
		{ "Rift_S.Comment", "/// Oculus Rift S uses a unique color space, see documentation for more info\n" },
		{ "Rift_S.Name", "EOculusXRColorSpace::Rift_S" },
		{ "Rift_S.ToolTip", "Oculus Rift S uses a unique color space, see documentation for more info" },
		{ "Unknown.Comment", "/// The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile\n" },
		{ "Unknown.Name", "EOculusXRColorSpace::Unknown" },
		{ "Unknown.ToolTip", "The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile" },
		{ "Unmanaged.Comment", "/// No color correction, not recommended for production use. See documentation for more info\n" },
		{ "Unmanaged.Name", "EOculusXRColorSpace::Unmanaged" },
		{ "Unmanaged.ToolTip", "No color correction, not recommended for production use. See documentation for more info" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRColorSpace",
		"EOculusXRColorSpace",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRColorSpace.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport;
	static UEnum* EOculusXRHandTrackingSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRHandTrackingSupport"));
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRHandTrackingSupport>()
	{
		return EOculusXRHandTrackingSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enumerators[] = {
		{ "EOculusXRHandTrackingSupport::ControllersOnly", (int64)EOculusXRHandTrackingSupport::ControllersOnly },
		{ "EOculusXRHandTrackingSupport::ControllersAndHands", (int64)EOculusXRHandTrackingSupport::ControllersAndHands },
		{ "EOculusXRHandTrackingSupport::HandsOnly", (int64)EOculusXRHandTrackingSupport::HandsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Hand tracking settings. Please check https://developer.oculus.com/documentation/unreal/unreal-hand-tracking/\n* for detailed information.\n*/" },
		{ "ControllersAndHands.Name", "EOculusXRHandTrackingSupport::ControllersAndHands" },
		{ "ControllersOnly.Name", "EOculusXRHandTrackingSupport::ControllersOnly" },
		{ "HandsOnly.Name", "EOculusXRHandTrackingSupport::HandsOnly" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "* Hand tracking settings. Please check https://developer.oculus.com/documentation/unreal/unreal-hand-tracking/\n* for detailed information." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRHandTrackingSupport",
		"EOculusXRHandTrackingSupport",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency;
	static UEnum* EOculusXRHandTrackingFrequency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRHandTrackingFrequency"));
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRHandTrackingFrequency>()
	{
		return EOculusXRHandTrackingFrequency_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enumerators[] = {
		{ "EOculusXRHandTrackingFrequency::LOW", (int64)EOculusXRHandTrackingFrequency::LOW },
		{ "EOculusXRHandTrackingFrequency::HIGH", (int64)EOculusXRHandTrackingFrequency::HIGH },
		{ "EOculusXRHandTrackingFrequency::MAX", (int64)EOculusXRHandTrackingFrequency::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.Name", "EOculusXRHandTrackingFrequency::HIGH" },
		{ "LOW.Name", "EOculusXRHandTrackingFrequency::LOW" },
		{ "MAX.Name", "EOculusXRHandTrackingFrequency::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRHandTrackingFrequency",
		"EOculusXRHandTrackingFrequency",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion;
	static UEnum* EOculusXRHandTrackingVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRHandTrackingVersion"));
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRHandTrackingVersion>()
	{
		return EOculusXRHandTrackingVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enumerators[] = {
		{ "EOculusXRHandTrackingVersion::Default", (int64)EOculusXRHandTrackingVersion::Default },
		{ "EOculusXRHandTrackingVersion::V1", (int64)EOculusXRHandTrackingVersion::V1 },
		{ "EOculusXRHandTrackingVersion::V2", (int64)EOculusXRHandTrackingVersion::V2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EOculusXRHandTrackingVersion::Default" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "V1.Name", "EOculusXRHandTrackingVersion::V1" },
		{ "V2.Name", "EOculusXRHandTrackingVersion::V2" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRHandTrackingVersion",
		"EOculusXRHandTrackingVersion",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel;
	static UEnum* EOculusXRProcessorPerformanceLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRProcessorPerformanceLevel"));
		}
		return Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRProcessorPerformanceLevel>()
	{
		return EOculusXRProcessorPerformanceLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enumerators[] = {
		{ "EOculusXRProcessorPerformanceLevel::PowerSavings", (int64)EOculusXRProcessorPerformanceLevel::PowerSavings },
		{ "EOculusXRProcessorPerformanceLevel::SustainedLow", (int64)EOculusXRProcessorPerformanceLevel::SustainedLow },
		{ "EOculusXRProcessorPerformanceLevel::SustainedHigh", (int64)EOculusXRProcessorPerformanceLevel::SustainedHigh },
		{ "EOculusXRProcessorPerformanceLevel::Boost", (int64)EOculusXRProcessorPerformanceLevel::Boost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boost.DisplayName", "Boost(*)" },
		{ "Boost.Name", "EOculusXRProcessorPerformanceLevel::Boost" },
		{ "Boost.ToolTip", "Allow XR Runtime to step up beyond the thermally sustainable range for short period. (Currently equivalent to SustainedHigh and not recommended to be used on Quest)" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "PowerSavings.DisplayName", "PowerSavings" },
		{ "PowerSavings.Name", "EOculusXRProcessorPerformanceLevel::PowerSavings" },
		{ "PowerSavings.ToolTip", "Usually used in non-XR section (head-locked / static screen), during which power savings are to be prioritized" },
		{ "SustainedHigh.DisplayName", "SustainedHigh" },
		{ "SustainedHigh.Name", "EOculusXRProcessorPerformanceLevel::SustainedHigh" },
		{ "SustainedHigh.ToolTip", "Let XR Runtime to perform consistent XR compositing and frame rendering within a thermally sustainable range" },
		{ "SustainedLow.DisplayName", "SustainedLow" },
		{ "SustainedLow.Name", "EOculusXRProcessorPerformanceLevel::SustainedLow" },
		{ "SustainedLow.ToolTip", "App enters a low and stable complexity section, during which reducing power is more important than occasional late rendering frames" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRProcessorPerformanceLevel",
		"EOculusXRProcessorPerformanceLevel",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRDeviceType;
	static UEnum* EOculusXRDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRDeviceType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRDeviceType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRDeviceType>()
	{
		return EOculusXRDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enumerators[] = {
		{ "EOculusXRDeviceType::OculusMobile_Deprecated0", (int64)EOculusXRDeviceType::OculusMobile_Deprecated0 },
		{ "EOculusXRDeviceType::OculusQuest_Deprecated", (int64)EOculusXRDeviceType::OculusQuest_Deprecated },
		{ "EOculusXRDeviceType::OculusQuest2", (int64)EOculusXRDeviceType::OculusQuest2 },
		{ "EOculusXRDeviceType::MetaQuestPro", (int64)EOculusXRDeviceType::MetaQuestPro },
		{ "EOculusXRDeviceType::MetaQuest3", (int64)EOculusXRDeviceType::MetaQuest3 },
		{ "EOculusXRDeviceType::Rift", (int64)EOculusXRDeviceType::Rift },
		{ "EOculusXRDeviceType::Rift_S", (int64)EOculusXRDeviceType::Rift_S },
		{ "EOculusXRDeviceType::Quest_Link_Deprecated", (int64)EOculusXRDeviceType::Quest_Link_Deprecated },
		{ "EOculusXRDeviceType::Quest2_Link", (int64)EOculusXRDeviceType::Quest2_Link },
		{ "EOculusXRDeviceType::MetaQuestProLink", (int64)EOculusXRDeviceType::MetaQuestProLink },
		{ "EOculusXRDeviceType::MetaQuest3Link", (int64)EOculusXRDeviceType::MetaQuest3Link },
		{ "EOculusXRDeviceType::OculusUnknown", (int64)EOculusXRDeviceType::OculusUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MetaQuest3.Name", "EOculusXRDeviceType::MetaQuest3" },
		{ "MetaQuest3Link.Name", "EOculusXRDeviceType::MetaQuest3Link" },
		{ "MetaQuestPro.Name", "EOculusXRDeviceType::MetaQuestPro" },
		{ "MetaQuestProLink.Name", "EOculusXRDeviceType::MetaQuestProLink" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "OculusMobile_Deprecated0.Comment", "//mobile HMDs\n" },
		{ "OculusMobile_Deprecated0.Name", "EOculusXRDeviceType::OculusMobile_Deprecated0" },
		{ "OculusMobile_Deprecated0.ToolTip", "mobile HMDs" },
		{ "OculusQuest2.Name", "EOculusXRDeviceType::OculusQuest2" },
		{ "OculusQuest_Deprecated.Name", "EOculusXRDeviceType::OculusQuest_Deprecated" },
		{ "OculusUnknown.Comment", "//default\n" },
		{ "OculusUnknown.Name", "EOculusXRDeviceType::OculusUnknown" },
		{ "OculusUnknown.ToolTip", "default" },
		{ "Quest2_Link.Name", "EOculusXRDeviceType::Quest2_Link" },
		{ "Quest_Link_Deprecated.Name", "EOculusXRDeviceType::Quest_Link_Deprecated" },
		{ "Rift.Comment", "//PC HMDs\n" },
		{ "Rift.Name", "EOculusXRDeviceType::Rift" },
		{ "Rift.ToolTip", "PC HMDs" },
		{ "Rift_S.Name", "EOculusXRDeviceType::Rift_S" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRDeviceType",
		"EOculusXRDeviceType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRDeviceType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRControllerType;
	static UEnum* EOculusXRControllerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRControllerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRControllerType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRControllerType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRControllerType>()
	{
		return EOculusXRControllerType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enumerators[] = {
		{ "EOculusXRControllerType::None", (int64)EOculusXRControllerType::None },
		{ "EOculusXRControllerType::MetaQuestTouch", (int64)EOculusXRControllerType::MetaQuestTouch },
		{ "EOculusXRControllerType::MetaQuestTouchPro", (int64)EOculusXRControllerType::MetaQuestTouchPro },
		{ "EOculusXRControllerType::MetaQuestTouchPlus", (int64)EOculusXRControllerType::MetaQuestTouchPlus },
		{ "EOculusXRControllerType::Unknown", (int64)EOculusXRControllerType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MetaQuestTouch.Name", "EOculusXRControllerType::MetaQuestTouch" },
		{ "MetaQuestTouchPlus.Name", "EOculusXRControllerType::MetaQuestTouchPlus" },
		{ "MetaQuestTouchPro.Name", "EOculusXRControllerType::MetaQuestTouchPro" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "None.Name", "EOculusXRControllerType::None" },
		{ "Unknown.Name", "EOculusXRControllerType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRControllerType",
		"EOculusXRControllerType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRControllerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRControllerType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRControllerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRXrApi;
	static UEnum* EOculusXRXrApi_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRXrApi.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRXrApi.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRXrApi"));
		}
		return Z_Registration_Info_UEnum_EOculusXRXrApi.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRXrApi>()
	{
		return EOculusXRXrApi_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enumerators[] = {
		{ "EOculusXRXrApi::OVRPluginOpenXR", (int64)EOculusXRXrApi::OVRPluginOpenXR },
		{ "EOculusXRXrApi::NativeOpenXR", (int64)EOculusXRXrApi::NativeOpenXR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "NativeOpenXR.DisplayName", "Epic Native OpenXR with Oculus vendor extensions" },
		{ "NativeOpenXR.Name", "EOculusXRXrApi::NativeOpenXR" },
		{ "NativeOpenXR.ToolTip", "Disable Legacy Oculus in favor of the native OpenXR implementation, with Oculus vendor extensions. Must enable the OpenXR plugin. This will be where Epic focuses XR development going forward. Oculus OpenXR extensions may be moved into a separate plugin (or plugins) in the future to improve modularity. The features supported by OpenXR are listed in the OpenXR specification on khronos.org, and the features supported by a given runtime can be verified with the \\\"OpenXR Explorer\\\" application on GitHub." },
		{ "OVRPluginOpenXR.DisplayName", "Oculus OVRPlugin + OpenXR backend (current recommended)" },
		{ "OVRPluginOpenXR.Name", "EOculusXRXrApi::OVRPluginOpenXR" },
		{ "OVRPluginOpenXR.ToolTip", "Oculus plugin integration using OpenXR backend on both Mobile and PC. All new features will ship on backend for the forseeable future." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRXrApi",
		"EOculusXRXrApi",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRXrApi.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRXrApi.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRXrApi.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult;
class UScriptStruct* FOculusXRGuardianTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("OculusXRGuardianTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.OuterSingleton;
}
template<> OCULUSXRHMD_API UScriptStruct* StaticStruct<FOculusXRGuardianTestResult>()
{
	return FOculusXRGuardianTestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[];
#endif
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Information about relationships between a triggered boundary (EOculusXRBoundaryType::Boundary_Outer or\n* EOculusXRBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space.\n*/" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "* Information about relationships between a triggered boundary (EOculusXRBoundaryType::Boundary_Outer or\n* EOculusXRBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRGuardianTestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Is there a triggering interaction between the device/point and specified boundary? */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Is there a triggering interaction between the device/point and specified boundary?" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FOculusXRGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRGuardianTestResult), &Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering_MetaData), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Device type triggering boundary (EOculusXRTrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device) */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Device type triggering boundary (EOculusXRTrackedDeviceType::None if BoundaryTestResult corresponds to a point rather than a device)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, DeviceType), Z_Construct_UEnum_OculusXRHMD_EOculusXRTrackedDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType_MetaData), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType_MetaData) }; // 3793403805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Distance of device/point to surface of boundary specified by BoundaryType */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Distance of device/point to surface of boundary specified by BoundaryType" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Closest point on surface corresponding to specified boundary */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Closest point on surface corresponding to specified boundary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "Comment", "/** Normal of closest point */" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Normal of closest point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_IsTriggering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewProp_ClosestPointNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		&NewStructOps,
		"OculusXRGuardianTestResult",
		Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::PropPointers),
		sizeof(FOculusXRGuardianTestResult),
		alignof(FOculusXRGuardianTestResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRGuardianTestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment;
	static UEnum* EOculusXRControllerPoseAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRControllerPoseAlignment"));
		}
		return Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRControllerPoseAlignment>()
	{
		return EOculusXRControllerPoseAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enumerators[] = {
		{ "EOculusXRControllerPoseAlignment::Default", (int64)EOculusXRControllerPoseAlignment::Default },
		{ "EOculusXRControllerPoseAlignment::Grip", (int64)EOculusXRControllerPoseAlignment::Grip },
		{ "EOculusXRControllerPoseAlignment::Aim", (int64)EOculusXRControllerPoseAlignment::Aim },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enum_MetaDataParams[] = {
		{ "Aim.Name", "EOculusXRControllerPoseAlignment::Aim" },
		{ "Aim.ToolTip", "Aim pose alignment as defined by OpenXR. Use this for cross-plugin compatibility with assets designed for the native OpenXR aim pose." },
		{ "Default.Name", "EOculusXRControllerPoseAlignment::Default" },
		{ "Default.ToolTip", "Default pose alignment used in all versions of the Meta XR plugin. Recommended pose for compatibility with previous assets designed for the Meta XR plugin." },
		{ "Grip.Name", "EOculusXRControllerPoseAlignment::Grip" },
		{ "Grip.ToolTip", "Grip pose alignment as defined by OpenXR. Use this for cross-plugin compatibility with assets designed for the native OpenXR grip pose." },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRControllerPoseAlignment",
		"EOculusXRControllerPoseAlignment",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRSplashDesc;
class UScriptStruct* FOculusXRSplashDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSplashDesc, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("OculusXRSplashDesc"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.OuterSingleton;
}
template<> OCULUSXRHMD_API UScriptStruct* StaticStruct<FOculusXRSplashDesc>()
{
	return FOculusXRSplashDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSplashDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Texture to display" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TexturePath_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TexturePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "transform of center of quad (meters)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TransformInMeters_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TransformInMeters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Dimensions in meters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "A delta rotation that will be added each rendering frame (half rate of full vsync)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, DeltaRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_DeltaRotation_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_DeltaRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Texture offset amount from the top left corner." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureOffset = { "TextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureOffset_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Texture scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSplashDesc, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureScale_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "ToolTip", "Whether the splash layer uses it's alpha channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((FOculusXRSplashDesc*)Obj)->bNoAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXRSplashDesc), &Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TexturePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TransformInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_QuadSizeInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_TextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewProp_bNoAlphaChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		&NewStructOps,
		"OculusXRSplashDesc",
		Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::PropPointers),
		sizeof(FOculusXRSplashDesc),
		alignof(FOculusXRSplashDesc),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRSplashDesc.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXROcclusionsMode;
	static UEnum* EOculusXROcclusionsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXROcclusionsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXROcclusionsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXROcclusionsMode"));
		}
		return Z_Registration_Info_UEnum_EOculusXROcclusionsMode.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXROcclusionsMode>()
	{
		return EOculusXROcclusionsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enumerators[] = {
		{ "EOculusXROcclusionsMode::Disabled", (int64)EOculusXROcclusionsMode::Disabled },
		{ "EOculusXROcclusionsMode::HardOcclusions", (int64)EOculusXROcclusionsMode::HardOcclusions },
		{ "EOculusXROcclusionsMode::SoftOcclusions", (int64)EOculusXROcclusionsMode::SoftOcclusions },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/// Environment depth occlusions disabled.\n" },
		{ "Disabled.Name", "EOculusXROcclusionsMode::Disabled" },
		{ "Disabled.ToolTip", "Environment depth occlusions disabled." },
		{ "HardOcclusions.Comment", "/// Hard occlusions, good performance, shows hard edges between the real and virtual world.\n" },
		{ "HardOcclusions.Name", "EOculusXROcclusionsMode::HardOcclusions" },
		{ "HardOcclusions.ToolTip", "Hard occlusions, good performance, shows hard edges between the real and virtual world." },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "SoftOcclusions.Comment", "/// Soft occlusions, most expensive, shows soft edges between the real and virtual world.\n" },
		{ "SoftOcclusions.Name", "EOculusXROcclusionsMode::SoftOcclusions" },
		{ "SoftOcclusions.ToolTip", "Soft occlusions, most expensive, shows soft edges between the real and virtual world." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXROcclusionsMode",
		"EOculusXROcclusionsMode",
		Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode()
	{
		if (!Z_Registration_Info_UEnum_EOculusXROcclusionsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXROcclusionsMode.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXROcclusionsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXROcclusionsMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType;
	static UEnum* EOculusXREyeBufferSharpenType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXREyeBufferSharpenType"));
		}
		return Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXREyeBufferSharpenType>()
	{
		return EOculusXREyeBufferSharpenType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enumerators[] = {
		{ "EOculusXREyeBufferSharpenType::SLST_None", (int64)EOculusXREyeBufferSharpenType::SLST_None },
		{ "EOculusXREyeBufferSharpenType::SLST_Normal", (int64)EOculusXREyeBufferSharpenType::SLST_Normal },
		{ "EOculusXREyeBufferSharpenType::SLST_Quality", (int64)EOculusXREyeBufferSharpenType::SLST_Quality },
		{ "EOculusXREyeBufferSharpenType::SLST_Auto", (int64)EOculusXREyeBufferSharpenType::SLST_Auto },
		{ "EOculusXREyeBufferSharpenType::SLST_MAX", (int64)EOculusXREyeBufferSharpenType::SLST_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "SLST_Auto.Comment", "/// Auto Filtering: Runtime automatically chooses the appropriate sharpening filter\n" },
		{ "SLST_Auto.DisplayName", "Auto Filtering" },
		{ "SLST_Auto.Name", "EOculusXREyeBufferSharpenType::SLST_Auto" },
		{ "SLST_Auto.ToolTip", "Auto Filtering: Runtime automatically chooses the appropriate sharpening filter" },
		{ "SLST_MAX.Name", "EOculusXREyeBufferSharpenType::SLST_MAX" },
		{ "SLST_None.Comment", "/// No Sharpening\n" },
		{ "SLST_None.DisplayName", "No Sharpening" },
		{ "SLST_None.Name", "EOculusXREyeBufferSharpenType::SLST_None" },
		{ "SLST_None.ToolTip", "No Sharpening" },
		{ "SLST_Normal.Comment", "/// Normal Sharpening\n" },
		{ "SLST_Normal.DisplayName", "Normal Sharpening" },
		{ "SLST_Normal.Name", "EOculusXREyeBufferSharpenType::SLST_Normal" },
		{ "SLST_Normal.ToolTip", "Normal Sharpening" },
		{ "SLST_Quality.Comment", "/// Quality Sharpening\n" },
		{ "SLST_Quality.DisplayName", "Quality Sharpening" },
		{ "SLST_Quality.Name", "EOculusXREyeBufferSharpenType::SLST_Quality" },
		{ "SLST_Quality.ToolTip", "Quality Sharpening" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXREyeBufferSharpenType",
		"EOculusXREyeBufferSharpenType",
		Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXREyeBufferSharpenType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcessorFavor;
	static UEnum* EProcessorFavor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProcessorFavor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProcessorFavor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EProcessorFavor, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EProcessorFavor"));
		}
		return Z_Registration_Info_UEnum_EProcessorFavor.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EProcessorFavor>()
	{
		return EProcessorFavor_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enumerators[] = {
		{ "EProcessorFavor::FavorEqually", (int64)EProcessorFavor::FavorEqually },
		{ "EProcessorFavor::FavorCPU", (int64)EProcessorFavor::FavorCPU },
		{ "EProcessorFavor::FavorGPU", (int64)EProcessorFavor::FavorGPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enum_MetaDataParams[] = {
		{ "FavorCPU.DisplayName", "Favor CPU" },
		{ "FavorCPU.Name", "EProcessorFavor::FavorCPU" },
		{ "FavorEqually.DisplayName", "Favor Equally" },
		{ "FavorEqually.Name", "EProcessorFavor::FavorEqually" },
		{ "FavorGPU.DisplayName", "Favor GPU" },
		{ "FavorGPU.Name", "EProcessorFavor::FavorGPU" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EProcessorFavor",
		"EProcessorFavor",
		Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor()
	{
		if (!Z_Registration_Info_UEnum_EProcessorFavor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcessorFavor.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EProcessorFavor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProcessorFavor.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity;
	static UEnum* EOculusXRHMDBodyTrackingFidelity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRHMDBodyTrackingFidelity"));
		}
		return Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRHMDBodyTrackingFidelity>()
	{
		return EOculusXRHMDBodyTrackingFidelity_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enumerators[] = {
		{ "EOculusXRHMDBodyTrackingFidelity::Unset", (int64)EOculusXRHMDBodyTrackingFidelity::Unset },
		{ "EOculusXRHMDBodyTrackingFidelity::Low", (int64)EOculusXRHMDBodyTrackingFidelity::Low },
		{ "EOculusXRHMDBodyTrackingFidelity::High", (int64)EOculusXRHMDBodyTrackingFidelity::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EOculusXRHMDBodyTrackingFidelity::High" },
		{ "Low.Name", "EOculusXRHMDBodyTrackingFidelity::Low" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Unset.Hidden", "" },
		{ "Unset.Name", "EOculusXRHMDBodyTrackingFidelity::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRHMDBodyTrackingFidelity",
		"EOculusXRHMDBodyTrackingFidelity",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyTrackingFidelity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet;
	static UEnum* EOculusXRHMDBodyJointSet_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRHMDBodyJointSet"));
		}
		return Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRHMDBodyJointSet>()
	{
		return EOculusXRHMDBodyJointSet_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enumerators[] = {
		{ "EOculusXRHMDBodyJointSet::UpperBody", (int64)EOculusXRHMDBodyJointSet::UpperBody },
		{ "EOculusXRHMDBodyJointSet::FullBody", (int64)EOculusXRHMDBodyJointSet::FullBody },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullBody.Name", "EOculusXRHMDBodyJointSet::FullBody" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "UpperBody.Name", "EOculusXRHMDBodyJointSet::UpperBody" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRHMDBodyJointSet",
		"EOculusXRHMDBodyJointSet",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRHMDBodyJointSet_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig;
	static UEnum* EFaceTrackingDataSourceConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EFaceTrackingDataSourceConfig"));
		}
		return Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EFaceTrackingDataSourceConfig>()
	{
		return EFaceTrackingDataSourceConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enumerators[] = {
		{ "EFaceTrackingDataSourceConfig::Visual", (int64)EFaceTrackingDataSourceConfig::Visual },
		{ "EFaceTrackingDataSourceConfig::Audio", (int64)EFaceTrackingDataSourceConfig::Audio },
		{ "EFaceTrackingDataSourceConfig::MAX", (int64)EFaceTrackingDataSourceConfig::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enum_MetaDataParams[] = {
		{ "Audio.DisplayName", "Audio" },
		{ "Audio.Name", "EFaceTrackingDataSourceConfig::Audio" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EFaceTrackingDataSourceConfig::MAX" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
		{ "Visual.DisplayName", "Visual" },
		{ "Visual.Name", "EFaceTrackingDataSourceConfig::Visual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EFaceTrackingDataSourceConfig",
		"EFaceTrackingDataSourceConfig",
		Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig()
	{
		if (!Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESystemSplashBackgroundType;
	static UEnum* ESystemSplashBackgroundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESystemSplashBackgroundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESystemSplashBackgroundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("ESystemSplashBackgroundType"));
		}
		return Z_Registration_Info_UEnum_ESystemSplashBackgroundType.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<ESystemSplashBackgroundType>()
	{
		return ESystemSplashBackgroundType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enumerators[] = {
		{ "ESystemSplashBackgroundType::Black", (int64)ESystemSplashBackgroundType::Black },
		{ "ESystemSplashBackgroundType::Contextual", (int64)ESystemSplashBackgroundType::Contextual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enum_MetaDataParams[] = {
		{ "Black.DisplayName", "Black" },
		{ "Black.Name", "ESystemSplashBackgroundType::Black" },
		{ "Contextual.DisplayName", "Passthrough (Contextual)" },
		{ "Contextual.Name", "ESystemSplashBackgroundType::Contextual" },
		{ "ModuleRelativePath", "Public/OculusXRHMDTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"ESystemSplashBackgroundType",
		"ESystemSplashBackgroundType",
		Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType()
	{
		if (!Z_Registration_Info_UEnum_ESystemSplashBackgroundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESystemSplashBackgroundType.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESystemSplashBackgroundType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::EnumInfo[] = {
		{ EOculusXRTrackedDeviceType_StaticEnum, TEXT("EOculusXRTrackedDeviceType"), &Z_Registration_Info_UEnum_EOculusXRTrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3793403805U) },
		{ EOculusXRFoveatedRenderingMethod_StaticEnum, TEXT("EOculusXRFoveatedRenderingMethod"), &Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3859704462U) },
		{ EOculusXRFoveatedRenderingLevel_StaticEnum, TEXT("EOculusXRFoveatedRenderingLevel"), &Z_Registration_Info_UEnum_EOculusXRFoveatedRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3472220838U) },
		{ EOculusXRBoundaryType_StaticEnum, TEXT("EOculusXRBoundaryType"), &Z_Registration_Info_UEnum_EOculusXRBoundaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2911277257U) },
		{ EOculusXRColorSpace_StaticEnum, TEXT("EOculusXRColorSpace"), &Z_Registration_Info_UEnum_EOculusXRColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3733253032U) },
		{ EOculusXRHandTrackingSupport_StaticEnum, TEXT("EOculusXRHandTrackingSupport"), &Z_Registration_Info_UEnum_EOculusXRHandTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1961653055U) },
		{ EOculusXRHandTrackingFrequency_StaticEnum, TEXT("EOculusXRHandTrackingFrequency"), &Z_Registration_Info_UEnum_EOculusXRHandTrackingFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 104216032U) },
		{ EOculusXRHandTrackingVersion_StaticEnum, TEXT("EOculusXRHandTrackingVersion"), &Z_Registration_Info_UEnum_EOculusXRHandTrackingVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 293394772U) },
		{ EOculusXRProcessorPerformanceLevel_StaticEnum, TEXT("EOculusXRProcessorPerformanceLevel"), &Z_Registration_Info_UEnum_EOculusXRProcessorPerformanceLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 542758215U) },
		{ EOculusXRDeviceType_StaticEnum, TEXT("EOculusXRDeviceType"), &Z_Registration_Info_UEnum_EOculusXRDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4272322607U) },
		{ EOculusXRControllerType_StaticEnum, TEXT("EOculusXRControllerType"), &Z_Registration_Info_UEnum_EOculusXRControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3865424687U) },
		{ EOculusXRXrApi_StaticEnum, TEXT("EOculusXRXrApi"), &Z_Registration_Info_UEnum_EOculusXRXrApi, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 639612870U) },
		{ EOculusXRControllerPoseAlignment_StaticEnum, TEXT("EOculusXRControllerPoseAlignment"), &Z_Registration_Info_UEnum_EOculusXRControllerPoseAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3515864375U) },
		{ EOculusXROcclusionsMode_StaticEnum, TEXT("EOculusXROcclusionsMode"), &Z_Registration_Info_UEnum_EOculusXROcclusionsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1223326230U) },
		{ EOculusXREyeBufferSharpenType_StaticEnum, TEXT("EOculusXREyeBufferSharpenType"), &Z_Registration_Info_UEnum_EOculusXREyeBufferSharpenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2702688303U) },
		{ EProcessorFavor_StaticEnum, TEXT("EProcessorFavor"), &Z_Registration_Info_UEnum_EProcessorFavor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2300531910U) },
		{ EOculusXRHMDBodyTrackingFidelity_StaticEnum, TEXT("EOculusXRHMDBodyTrackingFidelity"), &Z_Registration_Info_UEnum_EOculusXRHMDBodyTrackingFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 423643350U) },
		{ EOculusXRHMDBodyJointSet_StaticEnum, TEXT("EOculusXRHMDBodyJointSet"), &Z_Registration_Info_UEnum_EOculusXRHMDBodyJointSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1752728270U) },
		{ EFaceTrackingDataSourceConfig_StaticEnum, TEXT("EFaceTrackingDataSourceConfig"), &Z_Registration_Info_UEnum_EFaceTrackingDataSourceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1820251538U) },
		{ ESystemSplashBackgroundType_StaticEnum, TEXT("ESystemSplashBackgroundType"), &Z_Registration_Info_UEnum_ESystemSplashBackgroundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4185478579U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRHmdUserProfileField::StaticStruct, Z_Construct_UScriptStruct_FOculusXRHmdUserProfileField_Statics::NewStructOps, TEXT("OculusXRHmdUserProfileField"), &Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfileField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRHmdUserProfileField), 785545490U) },
		{ FOculusXRHmdUserProfile::StaticStruct, Z_Construct_UScriptStruct_FOculusXRHmdUserProfile_Statics::NewStructOps, TEXT("OculusXRHmdUserProfile"), &Z_Registration_Info_UScriptStruct_OculusXRHmdUserProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRHmdUserProfile), 3799169643U) },
		{ FOculusXRGuardianTestResult::StaticStruct, Z_Construct_UScriptStruct_FOculusXRGuardianTestResult_Statics::NewStructOps, TEXT("OculusXRGuardianTestResult"), &Z_Registration_Info_UScriptStruct_OculusXRGuardianTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRGuardianTestResult), 763300129U) },
		{ FOculusXRSplashDesc::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSplashDesc_Statics::NewStructOps, TEXT("OculusXRSplashDesc"), &Z_Registration_Info_UScriptStruct_OculusXRSplashDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSplashDesc), 1279870425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_3945226220(TEXT("/Script/OculusXRHMD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXRHMDTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

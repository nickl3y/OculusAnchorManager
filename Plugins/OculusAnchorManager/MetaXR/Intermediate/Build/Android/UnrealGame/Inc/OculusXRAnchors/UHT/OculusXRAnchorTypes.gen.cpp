// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorTypes() {}
// Cross Module References
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
	UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRAnchorResult;
	static UEnum* EOculusXRAnchorResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRAnchorResult"));
		}
		return Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRAnchorResult::Type>()
	{
		return EOculusXRAnchorResult_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enumerators[] = {
		{ "EOculusXRAnchorResult::Success", (int64)EOculusXRAnchorResult::Success },
		{ "EOculusXRAnchorResult::Success_EventUnavailable", (int64)EOculusXRAnchorResult::Success_EventUnavailable },
		{ "EOculusXRAnchorResult::Success_Pending", (int64)EOculusXRAnchorResult::Success_Pending },
		{ "EOculusXRAnchorResult::Failure", (int64)EOculusXRAnchorResult::Failure },
		{ "EOculusXRAnchorResult::Failure_InvalidParameter", (int64)EOculusXRAnchorResult::Failure_InvalidParameter },
		{ "EOculusXRAnchorResult::Failure_NotInitialized", (int64)EOculusXRAnchorResult::Failure_NotInitialized },
		{ "EOculusXRAnchorResult::Failure_InvalidOperation", (int64)EOculusXRAnchorResult::Failure_InvalidOperation },
		{ "EOculusXRAnchorResult::Failure_Unsupported", (int64)EOculusXRAnchorResult::Failure_Unsupported },
		{ "EOculusXRAnchorResult::Failure_NotYetImplemented", (int64)EOculusXRAnchorResult::Failure_NotYetImplemented },
		{ "EOculusXRAnchorResult::Failure_OperationFailed", (int64)EOculusXRAnchorResult::Failure_OperationFailed },
		{ "EOculusXRAnchorResult::Failure_InsufficientSize", (int64)EOculusXRAnchorResult::Failure_InsufficientSize },
		{ "EOculusXRAnchorResult::Failure_DataIsInvalid", (int64)EOculusXRAnchorResult::Failure_DataIsInvalid },
		{ "EOculusXRAnchorResult::Failure_DeprecatedOperation", (int64)EOculusXRAnchorResult::Failure_DeprecatedOperation },
		{ "EOculusXRAnchorResult::Failure_ErrorLimitReached", (int64)EOculusXRAnchorResult::Failure_ErrorLimitReached },
		{ "EOculusXRAnchorResult::Failure_ErrorInitializationFailed", (int64)EOculusXRAnchorResult::Failure_ErrorInitializationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled", (int64)EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled },
		{ "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient", (int64)EOculusXRAnchorResult::Failure_SpaceMappingInsufficient },
		{ "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed", (int64)EOculusXRAnchorResult::Failure_SpaceLocalizationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkTimeout },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Comment", "/// Failure\n" },
		{ "Failure.Name", "EOculusXRAnchorResult::Failure" },
		{ "Failure.ToolTip", "Failure" },
		{ "Failure_DataIsInvalid.Name", "EOculusXRAnchorResult::Failure_DataIsInvalid" },
		{ "Failure_DeprecatedOperation.Name", "EOculusXRAnchorResult::Failure_DeprecatedOperation" },
		{ "Failure_ErrorInitializationFailed.Name", "EOculusXRAnchorResult::Failure_ErrorInitializationFailed" },
		{ "Failure_ErrorLimitReached.Name", "EOculusXRAnchorResult::Failure_ErrorLimitReached" },
		{ "Failure_InsufficientSize.Name", "EOculusXRAnchorResult::Failure_InsufficientSize" },
		{ "Failure_InvalidOperation.Name", "EOculusXRAnchorResult::Failure_InvalidOperation" },
		{ "Failure_InvalidParameter.Name", "EOculusXRAnchorResult::Failure_InvalidParameter" },
		{ "Failure_NotInitialized.Name", "EOculusXRAnchorResult::Failure_NotInitialized" },
		{ "Failure_NotYetImplemented.Name", "EOculusXRAnchorResult::Failure_NotYetImplemented" },
		{ "Failure_OperationFailed.Name", "EOculusXRAnchorResult::Failure_OperationFailed" },
		{ "Failure_SpaceCloudStorageDisabled.Comment", "/// Space error cases\n" },
		{ "Failure_SpaceCloudStorageDisabled.Name", "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled" },
		{ "Failure_SpaceCloudStorageDisabled.ToolTip", "Space error cases" },
		{ "Failure_SpaceLocalizationFailed.Name", "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed" },
		{ "Failure_SpaceMappingInsufficient.Name", "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient" },
		{ "Failure_SpaceNetworkRequestFailed.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed" },
		{ "Failure_SpaceNetworkTimeout.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout" },
		{ "Failure_Unsupported.Name", "EOculusXRAnchorResult::Failure_Unsupported" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "Success.Name", "EOculusXRAnchorResult::Success" },
		{ "Success_EventUnavailable.Name", "EOculusXRAnchorResult::Success_EventUnavailable" },
		{ "Success_Pending.Name", "EOculusXRAnchorResult::Success_Pending" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		"EOculusXRAnchorResult",
		"EOculusXRAnchorResult::Type",
		Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRUUID;
class UScriptStruct* FOculusXRUUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRUUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRUUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUUID, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRUUID"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRUUID.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRUUID>()
{
	return FOculusXRUUID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRUUID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRUUID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace EOculusXRAnchorResult\n" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "ToolTip", "namespace EOculusXRAnchorResult" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRUUID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUUID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRUUID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRUUID",
		nullptr,
		0,
		sizeof(FOculusXRUUID),
		alignof(FOculusXRUUID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUUID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRUUID_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRUUID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRUUID.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRUUID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRUUID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRUInt64;
class UScriptStruct* FOculusXRUInt64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRUInt64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRUInt64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUInt64, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRUInt64"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRUInt64.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRUInt64>()
{
	return FOculusXRUInt64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRUInt64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUInt64>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRUInt64, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRUInt64",
		Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers),
		sizeof(FOculusXRUInt64),
		alignof(FOculusXRUInt64),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRUInt64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRUInt64.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRUInt64.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType;
	static UEnum* EOculusXRSpaceQueryFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceQueryFilterType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceQueryFilterType>()
	{
		return EOculusXRSpaceQueryFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enumerators[] = {
		{ "EOculusXRSpaceQueryFilterType::None", (int64)EOculusXRSpaceQueryFilterType::None },
		{ "EOculusXRSpaceQueryFilterType::FilterByIds", (int64)EOculusXRSpaceQueryFilterType::FilterByIds },
		{ "EOculusXRSpaceQueryFilterType::FilterByComponentType", (int64)EOculusXRSpaceQueryFilterType::FilterByComponentType },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FilterByComponentType.DisplayName", "Filter queries by component type" },
		{ "FilterByComponentType.Name", "EOculusXRSpaceQueryFilterType::FilterByComponentType" },
		{ "FilterByIds.DisplayName", "Filter queries by UUIDs" },
		{ "FilterByIds.Name", "EOculusXRSpaceQueryFilterType::FilterByIds" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "None.DisplayName", "No Filter" },
		{ "None.Name", "EOculusXRSpaceQueryFilterType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		"EOculusXRSpaceQueryFilterType",
		"EOculusXRSpaceQueryFilterType",
		Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation;
	static UEnum* EOculusXRSpaceStorageLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceStorageLocation"));
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStorageLocation>()
	{
		return EOculusXRSpaceStorageLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enumerators[] = {
		{ "EOculusXRSpaceStorageLocation::Invalid", (int64)EOculusXRSpaceStorageLocation::Invalid },
		{ "EOculusXRSpaceStorageLocation::Local", (int64)EOculusXRSpaceStorageLocation::Local },
		{ "EOculusXRSpaceStorageLocation::Cloud", (int64)EOculusXRSpaceStorageLocation::Cloud },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cloud.DisplayName", "Cloud" },
		{ "Cloud.Name", "EOculusXRSpaceStorageLocation::Cloud" },
		{ "Comment", "// This is used as a bit-mask\n" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EOculusXRSpaceStorageLocation::Invalid" },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EOculusXRSpaceStorageLocation::Local" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "ToolTip", "This is used as a bit-mask" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		"EOculusXRSpaceStorageLocation",
		"EOculusXRSpaceStorageLocation",
		Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode;
	static UEnum* EOculusXRSpaceStoragePersistenceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceStoragePersistenceMode"));
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStoragePersistenceMode>()
	{
		return EOculusXRSpaceStoragePersistenceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enumerators[] = {
		{ "EOculusXRSpaceStoragePersistenceMode::Invalid", (int64)EOculusXRSpaceStoragePersistenceMode::Invalid },
		{ "EOculusXRSpaceStoragePersistenceMode::Indefinite", (int64)EOculusXRSpaceStoragePersistenceMode::Indefinite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Indefinite.DisplayName", "Indefinite" },
		{ "Indefinite.Name", "EOculusXRSpaceStoragePersistenceMode::Indefinite" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EOculusXRSpaceStoragePersistenceMode::Invalid" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		"EOculusXRSpaceStoragePersistenceMode",
		"EOculusXRSpaceStoragePersistenceMode",
		Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceComponentType;
	static UEnum* EOculusXRSpaceComponentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceComponentType"));
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceComponentType>()
	{
		return EOculusXRSpaceComponentType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enumerators[] = {
		{ "EOculusXRSpaceComponentType::Locatable", (int64)EOculusXRSpaceComponentType::Locatable },
		{ "EOculusXRSpaceComponentType::Storable", (int64)EOculusXRSpaceComponentType::Storable },
		{ "EOculusXRSpaceComponentType::Sharable", (int64)EOculusXRSpaceComponentType::Sharable },
		{ "EOculusXRSpaceComponentType::ScenePlane", (int64)EOculusXRSpaceComponentType::ScenePlane },
		{ "EOculusXRSpaceComponentType::SceneVolume", (int64)EOculusXRSpaceComponentType::SceneVolume },
		{ "EOculusXRSpaceComponentType::SemanticClassification", (int64)EOculusXRSpaceComponentType::SemanticClassification },
		{ "EOculusXRSpaceComponentType::RoomLayout", (int64)EOculusXRSpaceComponentType::RoomLayout },
		{ "EOculusXRSpaceComponentType::SpaceContainer", (int64)EOculusXRSpaceComponentType::SpaceContainer },
		{ "EOculusXRSpaceComponentType::Undefined", (int64)EOculusXRSpaceComponentType::Undefined },
		{ "EOculusXRSpaceComponentType::TriangleMesh", (int64)EOculusXRSpaceComponentType::TriangleMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Locatable.DisplayName", "Locatable" },
		{ "Locatable.Name", "EOculusXRSpaceComponentType::Locatable" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "RoomLayout.DisplayName", "RoomLayout" },
		{ "RoomLayout.Name", "EOculusXRSpaceComponentType::RoomLayout" },
		{ "ScenePlane.DisplayName", "ScenePlane" },
		{ "ScenePlane.Name", "EOculusXRSpaceComponentType::ScenePlane" },
		{ "SceneVolume.DisplayName", "SceneVolume" },
		{ "SceneVolume.Name", "EOculusXRSpaceComponentType::SceneVolume" },
		{ "SemanticClassification.DisplayName", "SemanticClassification" },
		{ "SemanticClassification.Name", "EOculusXRSpaceComponentType::SemanticClassification" },
		{ "Sharable.DisplayName", "Sharable" },
		{ "Sharable.Name", "EOculusXRSpaceComponentType::Sharable" },
		{ "SpaceContainer.DisplayName", "SpaceContainer" },
		{ "SpaceContainer.Name", "EOculusXRSpaceComponentType::SpaceContainer" },
		{ "Storable.DisplayName", "Storable" },
		{ "Storable.Name", "EOculusXRSpaceComponentType::Storable" },
		{ "TriangleMesh.DisplayName", "TriangleMesh" },
		{ "TriangleMesh.Name", "EOculusXRSpaceComponentType::TriangleMesh" },
		{ "Undefined.DisplayName", "Not defined" },
		{ "Undefined.Name", "EOculusXRSpaceComponentType::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		"EOculusXRSpaceComponentType",
		"EOculusXRSpaceComponentType",
		Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo;
class UScriptStruct* FOculusXRSpaceQueryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRSpaceQueryInfo>()
{
	return FOculusXRSpaceQueryInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuerySpaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQuerySpaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IDFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IDFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IDFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentFilter_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces = { "MaxQuerySpaces", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, MaxQuerySpaces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_MetaData) }; // 1719502288
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, FilterType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_MetaData) }; // 2978772482
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_Inner = { "IDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter = { "IDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, IDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_MetaData) }; // 4053324016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner = { "ComponentFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 2303346494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, ComponentFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_MetaData) }; // 2303346494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRSpaceQueryInfo",
		Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers),
		sizeof(FOculusXRSpaceQueryInfo),
		alignof(FOculusXRSpaceQueryInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult;
class UScriptStruct* FOculusXRSpaceQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRSpaceQueryResult>()
{
	return FOculusXRSpaceQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space_MetaData) }; // 2105598926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID_MetaData) }; // 4053324016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_MetaData) }; // 1719502288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRSpaceQueryResult",
		Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers),
		sizeof(FOculusXRSpaceQueryResult),
		alignof(FOculusXRSpaceQueryResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues;
class UScriptStruct* FOculusXRSpaceQueryFilterValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryFilterValues"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRSpaceQueryFilterValues>()
{
	return FOculusXRSpaceQueryFilterValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryFilterValues>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRSpaceQueryFilterValues",
		nullptr,
		0,
		sizeof(FOculusXRSpaceQueryFilterValues),
		alignof(FOculusXRSpaceQueryFilterValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRRoomLayout;
class UScriptStruct* FOculusXRRoomLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRoomLayout, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRRoomLayout"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<FOculusXRRoomLayout>()
{
	return FOculusXRRoomLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomAnchorHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomAnchorHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomUuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorUuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorUuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingUuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CeilingUuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallsUuid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallsUuid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WallsUuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomObjectUUIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomObjectUUIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomObjectUUIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents a room layout within a specific space\n" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "ToolTip", "Represents a room layout within a specific space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRoomLayout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle = { "RoomAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomAnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle_MetaData) }; // 2105598926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid = { "RoomUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid_MetaData) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid = { "FloorUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, FloorUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid_MetaData) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid = { "CeilingUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, CeilingUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid_MetaData) }; // 4053324016
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_Inner = { "WallsUuid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid = { "WallsUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, WallsUuid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_MetaData) }; // 4053324016
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_Inner = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomObjectUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_MetaData), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_MetaData) }; // 4053324016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
		nullptr,
		&NewStructOps,
		"OculusXRRoomLayout",
		Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers),
		sizeof(FOculusXRRoomLayout),
		alignof(FOculusXRRoomLayout),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRRoomLayout.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::EnumInfo[] = {
		{ EOculusXRAnchorResult_StaticEnum, TEXT("EOculusXRAnchorResult"), &Z_Registration_Info_UEnum_EOculusXRAnchorResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 776896357U) },
		{ EOculusXRSpaceQueryFilterType_StaticEnum, TEXT("EOculusXRSpaceQueryFilterType"), &Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2978772482U) },
		{ EOculusXRSpaceStorageLocation_StaticEnum, TEXT("EOculusXRSpaceStorageLocation"), &Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1719502288U) },
		{ EOculusXRSpaceStoragePersistenceMode_StaticEnum, TEXT("EOculusXRSpaceStoragePersistenceMode"), &Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 750599451U) },
		{ EOculusXRSpaceComponentType_StaticEnum, TEXT("EOculusXRSpaceComponentType"), &Z_Registration_Info_UEnum_EOculusXRSpaceComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2303346494U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRUUID::StaticStruct, Z_Construct_UScriptStruct_FOculusXRUUID_Statics::NewStructOps, TEXT("OculusXRUUID"), &Z_Registration_Info_UScriptStruct_OculusXRUUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUUID), 4053324016U) },
		{ FOculusXRUInt64::StaticStruct, Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewStructOps, TEXT("OculusXRUInt64"), &Z_Registration_Info_UScriptStruct_OculusXRUInt64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUInt64), 2105598926U) },
		{ FOculusXRSpaceQueryInfo::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewStructOps, TEXT("OculusXRSpaceQueryInfo"), &Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryInfo), 598813743U) },
		{ FOculusXRSpaceQueryResult::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewStructOps, TEXT("OculusXRSpaceQueryResult"), &Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryResult), 4111585324U) },
		{ FOculusXRSpaceQueryFilterValues::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::NewStructOps, TEXT("OculusXRSpaceQueryFilterValues"), &Z_Registration_Info_UScriptStruct_OculusXRSpaceQueryFilterValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryFilterValues), 329624882U) },
		{ FOculusXRRoomLayout::StaticStruct, Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewStructOps, TEXT("OculusXRRoomLayout"), &Z_Registration_Info_UScriptStruct_OculusXRRoomLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRoomLayout), 3858275171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_4289150274(TEXT("/Script/OculusXRAnchors"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

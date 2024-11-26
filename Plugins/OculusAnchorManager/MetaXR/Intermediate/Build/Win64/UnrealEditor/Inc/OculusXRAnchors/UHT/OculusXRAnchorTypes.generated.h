// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSXRANCHORS_OculusXRAnchorTypes_generated_h
#error "OculusXRAnchorTypes.generated.h already included, missing '#pragma once' in OculusXRAnchorTypes.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorTypes_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRUUID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRUUID>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRUInt64_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRUInt64>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRSpaceQueryInfo>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRSpaceQueryResult>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRSpaceQueryFilterValues>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRRoomLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h


#define FOREACH_ENUM_EOCULUSXRANCHORRESULT(op) \
	op(EOculusXRAnchorResult::Success) \
	op(EOculusXRAnchorResult::Success_EventUnavailable) \
	op(EOculusXRAnchorResult::Success_Pending) \
	op(EOculusXRAnchorResult::Failure) \
	op(EOculusXRAnchorResult::Failure_InvalidParameter) \
	op(EOculusXRAnchorResult::Failure_NotInitialized) \
	op(EOculusXRAnchorResult::Failure_InvalidOperation) \
	op(EOculusXRAnchorResult::Failure_Unsupported) \
	op(EOculusXRAnchorResult::Failure_NotYetImplemented) \
	op(EOculusXRAnchorResult::Failure_OperationFailed) \
	op(EOculusXRAnchorResult::Failure_InsufficientSize) \
	op(EOculusXRAnchorResult::Failure_DataIsInvalid) \
	op(EOculusXRAnchorResult::Failure_DeprecatedOperation) \
	op(EOculusXRAnchorResult::Failure_ErrorLimitReached) \
	op(EOculusXRAnchorResult::Failure_ErrorInitializationFailed) \
	op(EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled) \
	op(EOculusXRAnchorResult::Failure_SpaceMappingInsufficient) \
	op(EOculusXRAnchorResult::Failure_SpaceLocalizationFailed) \
	op(EOculusXRAnchorResult::Failure_SpaceNetworkTimeout) \
	op(EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed) 
#define FOREACH_ENUM_EOCULUSXRSPACEQUERYFILTERTYPE(op) \
	op(EOculusXRSpaceQueryFilterType::None) \
	op(EOculusXRSpaceQueryFilterType::FilterByIds) \
	op(EOculusXRSpaceQueryFilterType::FilterByComponentType) 

enum class EOculusXRSpaceQueryFilterType : uint8;
template<> struct TIsUEnumClass<EOculusXRSpaceQueryFilterType> { enum { Value = true }; };
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceQueryFilterType>();

#define FOREACH_ENUM_EOCULUSXRSPACESTORAGELOCATION(op) \
	op(EOculusXRSpaceStorageLocation::Invalid) \
	op(EOculusXRSpaceStorageLocation::Local) \
	op(EOculusXRSpaceStorageLocation::Cloud) 

enum class EOculusXRSpaceStorageLocation : uint8;
template<> struct TIsUEnumClass<EOculusXRSpaceStorageLocation> { enum { Value = true }; };
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStorageLocation>();

#define FOREACH_ENUM_EOCULUSXRSPACESTORAGEPERSISTENCEMODE(op) \
	op(EOculusXRSpaceStoragePersistenceMode::Invalid) \
	op(EOculusXRSpaceStoragePersistenceMode::Indefinite) 

enum class EOculusXRSpaceStoragePersistenceMode : uint8;
template<> struct TIsUEnumClass<EOculusXRSpaceStoragePersistenceMode> { enum { Value = true }; };
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStoragePersistenceMode>();

#define FOREACH_ENUM_EOCULUSXRSPACECOMPONENTTYPE(op) \
	op(EOculusXRSpaceComponentType::Locatable) \
	op(EOculusXRSpaceComponentType::Storable) \
	op(EOculusXRSpaceComponentType::Sharable) \
	op(EOculusXRSpaceComponentType::ScenePlane) \
	op(EOculusXRSpaceComponentType::SceneVolume) \
	op(EOculusXRSpaceComponentType::SemanticClassification) \
	op(EOculusXRSpaceComponentType::RoomLayout) \
	op(EOculusXRSpaceComponentType::SpaceContainer) \
	op(EOculusXRSpaceComponentType::Undefined) \
	op(EOculusXRSpaceComponentType::TriangleMesh) 

enum class EOculusXRSpaceComponentType : uint8;
template<> struct TIsUEnumClass<EOculusXRSpaceComponentType> { enum { Value = true }; };
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceComponentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

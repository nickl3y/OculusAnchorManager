// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPlatformToolSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCULUSXREDITOR_OculusXRPlatformToolSettings_generated_h
#error "OculusXRPlatformToolSettings.generated.h already included, missing '#pragma once' in OculusXRPlatformToolSettings.h"
#endif
#define OCULUSXREDITOR_OculusXRPlatformToolSettings_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRRedistPackage_Statics; \
	OCULUSXREDITOR_API static class UScriptStruct* StaticStruct();


template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<struct FOculusXRRedistPackage>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRAssetConfig_Statics; \
	OCULUSXREDITOR_API static class UScriptStruct* StaticStruct();


template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<struct FOculusXRAssetConfig>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRAssetConfigArray_Statics; \
	OCULUSXREDITOR_API static class UScriptStruct* StaticStruct();


template<> OCULUSXREDITOR_API UScriptStruct* StaticStruct<struct FOculusXRAssetConfigArray>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPlatformToolSettings(); \
	friend struct Z_Construct_UClass_UOculusXRPlatformToolSettings_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPlatformToolSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXREditor"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPlatformToolSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRPlatformToolSettings(UOculusXRPlatformToolSettings&&); \
	NO_API UOculusXRPlatformToolSettings(const UOculusXRPlatformToolSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPlatformToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPlatformToolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRPlatformToolSettings) \
	NO_API virtual ~UOculusXRPlatformToolSettings();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_82_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXREDITOR_API UClass* StaticClass<class UOculusXRPlatformToolSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXRPlatformToolSettings_h


#define FOREACH_ENUM_EOCULUSXRPLATFORMTARGET(op) \
	op(EOculusXRPlatformTarget::Rift) \
	op(EOculusXRPlatformTarget::Quest) \
	op(EOculusXRPlatformTarget::Length) 

enum class EOculusXRPlatformTarget : uint8;
template<> struct TIsUEnumClass<EOculusXRPlatformTarget> { enum { Value = true }; };
template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRPlatformTarget>();

#define FOREACH_ENUM_EOCULUSXRGAMEPADEMULATION(op) \
	op(EOculusXRGamepadEmulation::Off) \
	op(EOculusXRGamepadEmulation::Twinstick) \
	op(EOculusXRGamepadEmulation::RightDPad) \
	op(EOculusXRGamepadEmulation::LeftDPad) \
	op(EOculusXRGamepadEmulation::Length) 

enum class EOculusXRGamepadEmulation : uint8;
template<> struct TIsUEnumClass<EOculusXRGamepadEmulation> { enum { Value = true }; };
template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRGamepadEmulation>();

#define FOREACH_ENUM_EOCULUSXRASSETTYPE(op) \
	op(EOculusXRAssetType::Default) \
	op(EOculusXRAssetType::Store) \
	op(EOculusXRAssetType::Language_Pack) \
	op(EOculusXRAssetType::Length) 

enum class EOculusXRAssetType : uint8;
template<> struct TIsUEnumClass<EOculusXRAssetType> { enum { Value = true }; };
template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRAssetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

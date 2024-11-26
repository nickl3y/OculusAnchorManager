// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorComponent.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
	UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execIsSaved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSaved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execIsStoredAtLocation)
	{
		P_GET_ENUM(EOculusXRSpaceStorageLocation,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStoredAtLocation(EOculusXRSpaceStorageLocation(Z_Param_Location));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execGetUUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOculusXRUUID*)Z_Param__Result=P_THIS->GetUUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execHasValidHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execSetHandle)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorComponent::execGetHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOculusXRUInt64*)Z_Param__Result=P_THIS->GetHandle();
		P_NATIVE_END;
	}
	void UOculusXRAnchorComponent::StaticRegisterNativesUOculusXRAnchorComponent()
	{
		UClass* Class = UOculusXRAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandle", &UOculusXRAnchorComponent::execGetHandle },
			{ "GetUUID", &UOculusXRAnchorComponent::execGetUUID },
			{ "HasValidHandle", &UOculusXRAnchorComponent::execHasValidHandle },
			{ "IsSaved", &UOculusXRAnchorComponent::execIsSaved },
			{ "IsStoredAtLocation", &UOculusXRAnchorComponent::execIsStoredAtLocation },
			{ "SetHandle", &UOculusXRAnchorComponent::execSetHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics
	{
		struct OculusXRAnchorComponent_eventGetHandle_Parms
		{
			FOculusXRUInt64 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventGetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "GetHandle", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::OculusXRAnchorComponent_eventGetHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::OculusXRAnchorComponent_eventGetHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics
	{
		struct OculusXRAnchorComponent_eventGetUUID_Parms
		{
			FOculusXRUUID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventGetUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "GetUUID", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::OculusXRAnchorComponent_eventGetUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::OculusXRAnchorComponent_eventGetUUID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics
	{
		struct OculusXRAnchorComponent_eventHasValidHandle_Parms
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
	void Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventHasValidHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventHasValidHandle_Parms), &Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "HasValidHandle", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::OculusXRAnchorComponent_eventHasValidHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::OculusXRAnchorComponent_eventHasValidHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics
	{
		struct OculusXRAnchorComponent_eventIsSaved_Parms
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
	void Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventIsSaved_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventIsSaved_Parms), &Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "IsSaved", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::OculusXRAnchorComponent_eventIsSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::OculusXRAnchorComponent_eventIsSaved_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics
	{
		struct OculusXRAnchorComponent_eventIsStoredAtLocation_Parms
		{
			EOculusXRSpaceStorageLocation Location;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventIsStoredAtLocation_Parms, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(0, nullptr) }; // 1719502288
	void Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorComponent_eventIsStoredAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorComponent_eventIsStoredAtLocation_Parms), &Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_Location_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "IsStoredAtLocation", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::OculusXRAnchorComponent_eventIsStoredAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::OculusXRAnchorComponent_eventIsStoredAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics
	{
		struct OculusXRAnchorComponent_eventSetHandle_Parms
		{
			FOculusXRUInt64 Handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorComponent_eventSetHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Anchor" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorComponent, nullptr, "SetHandle", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::OculusXRAnchorComponent_eventSetHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::OculusXRAnchorComponent_eventSetHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRAnchorComponent);
	UClass* Z_Construct_UClass_UOculusXRAnchorComponent_NoRegister()
	{
		return UOculusXRAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_GetHandle, "GetHandle" }, // 2742856209
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_GetUUID, "GetUUID" }, // 3468294499
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_HasValidHandle, "HasValidHandle" }, // 661398938
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_IsSaved, "IsSaved" }, // 576491670
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_IsStoredAtLocation, "IsStoredAtLocation" }, // 2893551246
		{ &Z_Construct_UFunction_UOculusXRAnchorComponent_SetHandle, "SetHandle" }, // 2699249718
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Oculus Anchor Component" },
		{ "IncludePath", "OculusXRAnchorComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRAnchorComponent_Statics::NewProp_PlayerCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRAnchorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRAnchorComponent_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAnchorComponent, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::NewProp_PlayerCameraManager_MetaData), Z_Construct_UClass_UOculusXRAnchorComponent_Statics::NewProp_PlayerCameraManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRAnchorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAnchorComponent_Statics::NewProp_PlayerCameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAnchorComponent_Statics::ClassParams = {
		&UOculusXRAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRAnchorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAnchorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton, Z_Construct_UClass_UOculusXRAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRAnchorComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRAnchorComponent>()
	{
		return UOculusXRAnchorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAnchorComponent);
	UOculusXRAnchorComponent::~UOculusXRAnchorComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAnchorComponent, UOculusXRAnchorComponent::StaticClass, TEXT("UOculusXRAnchorComponent"), &Z_Registration_Info_UClass_UOculusXRAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAnchorComponent), 1464743119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_179201441(TEXT("/Script/OculusXRAnchors"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

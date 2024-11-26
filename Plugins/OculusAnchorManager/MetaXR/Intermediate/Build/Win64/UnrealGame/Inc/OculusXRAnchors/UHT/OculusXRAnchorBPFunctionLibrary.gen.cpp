// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorBPFunctionLibrary.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorBPFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_NoRegister();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
	OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
	UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetRoomLayout)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Space);
		P_GET_STRUCT_REF(FOculusXRRoomLayout,Z_Param_Out_RoomLayoutOut);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxWallsCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetRoomLayout(Z_Param_Space,Z_Param_Out_RoomLayoutOut,Z_Param_MaxWallsCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponent)
	{
		P_GET_STRUCT_REF(FOculusXRSpaceQueryResult,Z_Param_Out_QueryResult);
		P_GET_ENUM(EOculusXRSpaceComponentType,Z_Param_ComponentType);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UOculusXRBaseAnchorComponent**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorComponent(Z_Param_Out_QueryResult,EOculusXRSpaceComponentType(Z_Param_ComponentType),Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsAnchorResultSuccess)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsAnchorResultSuccess(EOculusXRAnchorResult::Type(Z_Param_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUUID)
	{
		P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Left);
		P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsEqual_FOculusXRUUID(Z_Param_Out_Left,Z_Param_Out_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUInt64)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Left);
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::IsEqual_FOculusXRUInt64(Z_Param_Left,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execStringToAnchorUUID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOculusXRUUID*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::StringToAnchorUUID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execAnchorUUIDToString)
	{
		P_GET_STRUCT_REF(FOculusXRUUID,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::AnchorUUIDToString(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execAnchorHandleToString)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::AnchorHandleToString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorTransformByHandle)
	{
		P_GET_STRUCT_REF(FOculusXRUInt64,Z_Param_Out_Handle);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorTransformByHandle(Z_Param_Out_Handle,Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponentStatus)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_ENUM(EOculusXRSpaceComponentType,Z_Param_ComponentType);
		P_GET_UBOOL_REF(Z_Param_Out_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::GetAnchorComponentStatus(Z_Param_TargetActor,EOculusXRSpaceComponentType(Z_Param_ComponentType),Z_Param_Out_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorQueryResults)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FOculusXRSpaceQueryResult,Z_Param_Out_QueryResult);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::SpawnActorWithAnchorQueryResults(Z_Param_WorldContextObject,Z_Param_Out_QueryResult,Z_Param_ActorClass,Z_Param_Owner,Z_Param_Instigator,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Handle);
		P_GET_STRUCT(FOculusXRUUID,Z_Param_UUID);
		P_GET_ENUM(EOculusXRSpaceStorageLocation,Z_Param_AnchorLocation);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UOculusXRAnchorBPFunctionLibrary::SpawnActorWithAnchorHandle(Z_Param_WorldContextObject,Z_Param_Handle,Z_Param_UUID,EOculusXRSpaceStorageLocation(Z_Param_AnchorLocation),Z_Param_ActorClass,Z_Param_Owner,Z_Param_Instigator,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingMethod));
		P_NATIVE_END;
	}
	void UOculusXRAnchorBPFunctionLibrary::StaticRegisterNativesUOculusXRAnchorBPFunctionLibrary()
	{
		UClass* Class = UOculusXRAnchorBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnchorHandleToString", &UOculusXRAnchorBPFunctionLibrary::execAnchorHandleToString },
			{ "AnchorUUIDToString", &UOculusXRAnchorBPFunctionLibrary::execAnchorUUIDToString },
			{ "GetAnchorComponent", &UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponent },
			{ "GetAnchorComponentStatus", &UOculusXRAnchorBPFunctionLibrary::execGetAnchorComponentStatus },
			{ "GetAnchorTransformByHandle", &UOculusXRAnchorBPFunctionLibrary::execGetAnchorTransformByHandle },
			{ "GetRoomLayout", &UOculusXRAnchorBPFunctionLibrary::execGetRoomLayout },
			{ "IsAnchorResultSuccess", &UOculusXRAnchorBPFunctionLibrary::execIsAnchorResultSuccess },
			{ "IsEqual_FOculusXRUInt64", &UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUInt64 },
			{ "IsEqual_FOculusXRUUID", &UOculusXRAnchorBPFunctionLibrary::execIsEqual_FOculusXRUUID },
			{ "SpawnActorWithAnchorHandle", &UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorHandle },
			{ "SpawnActorWithAnchorQueryResults", &UOculusXRAnchorBPFunctionLibrary::execSpawnActorWithAnchorQueryResults },
			{ "StringToAnchorUUID", &UOculusXRAnchorBPFunctionLibrary::execStringToAnchorUUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms
		{
			FOculusXRUInt64 Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms, Value), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_Value_MetaData) }; // 2105598926
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "FOculusXRUInt64 To String" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "AnchorHandleToString", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::OculusXRAnchorBPFunctionLibrary_eventAnchorHandleToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms
		{
			FOculusXRUUID Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms, Value), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_Value_MetaData) }; // 4053324016
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "FOculusXRUUID To String" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "AnchorUUIDToString", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::OculusXRAnchorBPFunctionLibrary_eventAnchorUUIDToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms
		{
			FOculusXRSpaceQueryResult QueryResult;
			EOculusXRSpaceComponentType ComponentType;
			UObject* Outer;
			const UOculusXRBaseAnchorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_QueryResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, QueryResult), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_QueryResult_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_QueryResult_MetaData) }; // 4111585324
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 2303346494
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms, ReturnValue), Z_Construct_UClass_UOculusXRBaseAnchorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_QueryResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ComponentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ComponentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorComponent", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms
		{
			AActor* TargetActor;
			EOculusXRSpaceComponentType ComponentType;
			bool bIsEnabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 2303346494
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ComponentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ComponentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorComponentStatus", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorComponentStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms
		{
			FOculusXRUInt64 Handle;
			FTransform OutTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_Handle_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_Handle_MetaData) }; // 2105598926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetAnchorTransformByHandle", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::OculusXRAnchorBPFunctionLibrary_eventGetAnchorTransformByHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms
		{
			FOculusXRUInt64 Space;
			FOculusXRRoomLayout RoomLayoutOut;
			int32 MaxWallsCapacity;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayoutOut;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWallsCapacity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_RoomLayoutOut = { "RoomLayoutOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms, RoomLayoutOut), Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 3858275171
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_MaxWallsCapacity = { "MaxWallsCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms, MaxWallsCapacity), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_RoomLayoutOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_MaxWallsCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CPP_Default_MaxWallsCapacity", "64" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "GetRoomLayout", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::OculusXRAnchorBPFunctionLibrary_eventGetRoomLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms
		{
			TEnumAsByte<EOculusXRAnchorResult::Type> result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms, result), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, METADATA_PARAMS(0, nullptr) }; // 776896357
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsAnchorResultSuccess", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::OculusXRAnchorBPFunctionLibrary_eventIsAnchorResultSuccess_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms
		{
			FOculusXRUInt64 Left;
			FOculusXRUInt64 Right;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms, Left), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Left_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Left_MetaData) }; // 2105598926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms, Right), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Right_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Right_MetaData) }; // 2105598926
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "FOculusXRUInt64 equal" },
		{ "Keywords", "equal" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsEqual_FOculusXRUInt64", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms
		{
			FOculusXRUUID Left;
			FOculusXRUUID Right;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms, Left), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Left_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Left_MetaData) }; // 4053324016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms, Right), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Right_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Right_MetaData) }; // 4053324016
	void Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms), &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "FOculusXRUUID equal" },
		{ "Keywords", "equal" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "IsEqual_FOculusXRUUID", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::OculusXRAnchorBPFunctionLibrary_eventIsEqual_FOculusXRUUID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms
		{
			UObject* WorldContextObject;
			FOculusXRUInt64 Handle;
			FOculusXRUUID UUID;
			EOculusXRSpaceStorageLocation AnchorLocation;
			UClass* ActorClass;
			AActor* Owner;
			APawn* Instigator;
			ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnchorLocation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnchorLocation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Handle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_AnchorLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_AnchorLocation = { "AnchorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, AnchorLocation), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(0, nullptr) }; // 1719502288
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 1983674720
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_UUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_AnchorLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_AnchorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_CollisionHandlingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_CollisionHandlingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "DisplayName", "Spawn Oculus Anchor Actor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "SpawnActorWithAnchorHandle", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms
		{
			UObject* WorldContextObject;
			FOculusXRSpaceQueryResult QueryResult;
			UClass* ActorClass;
			AActor* Owner;
			APawn* Instigator;
			ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryResult;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingMethod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_QueryResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_QueryResult = { "QueryResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, QueryResult), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_QueryResult_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_QueryResult_MetaData) }; // 4111585324
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_CollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_CollisionHandlingMethod = { "CollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, CollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 1983674720
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_QueryResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_CollisionHandlingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_CollisionHandlingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "DisplayName", "Spawn Oculus Anchor Actor From Query" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "SpawnActorWithAnchorQueryResults", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::OculusXRAnchorBPFunctionLibrary_eventSpawnActorWithAnchorQueryResults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics
	{
		struct OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms
		{
			FString Value;
			FOculusXRUUID ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 4053324016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, nullptr, "StringToAnchorUUID", nullptr, nullptr, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::OculusXRAnchorBPFunctionLibrary_eventStringToAnchorUUID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRAnchorBPFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_NoRegister()
	{
		return UOculusXRAnchorBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorHandleToString, "AnchorHandleToString" }, // 1808932486
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_AnchorUUIDToString, "AnchorUUIDToString" }, // 3859664554
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponent, "GetAnchorComponent" }, // 339260217
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorComponentStatus, "GetAnchorComponentStatus" }, // 275767352
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetAnchorTransformByHandle, "GetAnchorTransformByHandle" }, // 1249753931
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_GetRoomLayout, "GetRoomLayout" }, // 1930824082
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsAnchorResultSuccess, "IsAnchorResultSuccess" }, // 4235122931
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUInt64, "IsEqual_FOculusXRUInt64" }, // 2471997492
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_IsEqual_FOculusXRUUID, "IsEqual_FOculusXRUUID" }, // 3249206948
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorHandle, "SpawnActorWithAnchorHandle" }, // 1134969408
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_SpawnActorWithAnchorQueryResults, "SpawnActorWithAnchorQueryResults" }, // 3178870013
		{ &Z_Construct_UFunction_UOculusXRAnchorBPFunctionLibrary_StringToAnchorUUID, "StringToAnchorUUID" }, // 536690681
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Helper\n" },
		{ "IncludePath", "OculusXRAnchorBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorBPFunctionLibrary.h" },
		{ "ToolTip", "Helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAnchorBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::ClassParams = {
		&UOculusXRAnchorBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRAnchorBPFunctionLibrary>()
	{
		return UOculusXRAnchorBPFunctionLibrary::StaticClass();
	}
	UOculusXRAnchorBPFunctionLibrary::UOculusXRAnchorBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAnchorBPFunctionLibrary);
	UOculusXRAnchorBPFunctionLibrary::~UOculusXRAnchorBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAnchorBPFunctionLibrary, UOculusXRAnchorBPFunctionLibrary::StaticClass, TEXT("UOculusXRAnchorBPFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRAnchorBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAnchorBPFunctionLibrary), 1721530830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h_3265345354(TEXT("/Script/OculusXRAnchors"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

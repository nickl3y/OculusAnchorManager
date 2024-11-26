// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRRoomLayoutManagerComponent.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRAnchors/Public/OculusXRAnchorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRRoomLayoutManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent();
	OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_NoRegister();
	OCULUSXRANCHORS_API UFunction* Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout();
	OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics
	{
		struct OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms
		{
			FOculusXRUInt64 requestId;
			bool result;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_requestId;
		static void NewProp_result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_requestId = { "requestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms, requestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	void Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_result_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms*)Obj)->result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms), &Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_requestId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UOculusXRRoomLayoutManagerComponent::FOculusXRRoomLayoutSceneCaptureCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OculusXRRoomLayoutSceneCaptureCompleteDelegate, FOculusXRUInt64 requestId, bool result)
{
	struct OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms
	{
		FOculusXRUInt64 requestId;
		bool result;
	};
	OculusXRRoomLayoutManagerComponent_eventOculusXRRoomLayoutSceneCaptureCompleteDelegate_Parms Parms;
	Parms.requestId=requestId;
	Parms.result=result ? true : false;
	OculusXRRoomLayoutSceneCaptureCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execOculusRoomLayoutSceneCaptureComplete_Handler)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_RequestId);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OculusRoomLayoutSceneCaptureComplete_Handler(Z_Param_RequestId,Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execLoadTriangleMesh)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Space);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
		P_GET_UBOOL(Z_Param_CreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadTriangleMesh(Z_Param_Space,Z_Param_Mesh,Z_Param_CreateCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execGetRoomLayout)
	{
		P_GET_STRUCT(FOculusXRUInt64,Z_Param_Space);
		P_GET_STRUCT_REF(FOculusXRRoomLayout,Z_Param_Out_RoomLayoutOut);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxWallsCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRoomLayout(Z_Param_Space,Z_Param_Out_RoomLayoutOut,Z_Param_MaxWallsCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRRoomLayoutManagerComponent::execLaunchCaptureFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LaunchCaptureFlow();
		P_NATIVE_END;
	}
	void UOculusXRRoomLayoutManagerComponent::StaticRegisterNativesUOculusXRRoomLayoutManagerComponent()
	{
		UClass* Class = UOculusXRRoomLayoutManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRoomLayout", &UOculusXRRoomLayoutManagerComponent::execGetRoomLayout },
			{ "LaunchCaptureFlow", &UOculusXRRoomLayoutManagerComponent::execLaunchCaptureFlow },
			{ "LoadTriangleMesh", &UOculusXRRoomLayoutManagerComponent::execLoadTriangleMesh },
			{ "OculusRoomLayoutSceneCaptureComplete_Handler", &UOculusXRRoomLayoutManagerComponent::execOculusRoomLayoutSceneCaptureComplete_Handler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics
	{
		struct OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_RoomLayoutOut = { "RoomLayoutOut", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, RoomLayoutOut), Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 3858275171
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_MaxWallsCapacity = { "MaxWallsCapacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms, MaxWallsCapacity), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_RoomLayoutOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_MaxWallsCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
		{ "Comment", "// Gets room layout for a specific space\n" },
		{ "CPP_Default_MaxWallsCapacity", "64" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
		{ "ToolTip", "Gets room layout for a specific space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "GetRoomLayout", nullptr, nullptr, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::OculusXRRoomLayoutManagerComponent_eventGetRoomLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics
	{
		struct OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms
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
	void Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
		{ "Comment", "// Requests to launch Capture Flow\n" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
		{ "ToolTip", "Requests to launch Capture Flow" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "LaunchCaptureFlow", nullptr, nullptr, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::OculusXRRoomLayoutManagerComponent_eventLaunchCaptureFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics
	{
		struct OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms
		{
			FOculusXRUInt64 Space;
			UProceduralMeshComponent* Mesh;
			bool CreateCollision;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_CreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Mesh_MetaData) };
	void Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_CreateCollision_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms*)Obj)->CreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_CreateCollision_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_CreateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
		{ "Comment", "// Loads mesh data (vertices, indeces) associated with the space into UProceduralMeshComponent\n" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
		{ "ToolTip", "Loads mesh data (vertices, indeces) associated with the space into UProceduralMeshComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "LoadTriangleMesh", nullptr, nullptr, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::OculusXRRoomLayoutManagerComponent_eventLoadTriangleMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics
	{
		struct OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms
		{
			FOculusXRUInt64 RequestId;
			bool bSuccess;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestId;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms, RequestId), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
	void Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms), &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_RequestId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, nullptr, "OculusRoomLayoutSceneCaptureComplete_Handler", nullptr, nullptr, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::OculusXRRoomLayoutManagerComponent_eventOculusRoomLayoutSceneCaptureComplete_Handler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRRoomLayoutManagerComponent);
	UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_NoRegister()
	{
		return UOculusXRRoomLayoutManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OculusXRRoomLayoutSceneCaptureComplete;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_EntityRequestList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityRequestList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_EntityRequestList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLayouts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayouts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoomLayouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_GetRoomLayout, "GetRoomLayout" }, // 1150328606
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LaunchCaptureFlow, "LaunchCaptureFlow" }, // 2612667585
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_LoadTriangleMesh, "LoadTriangleMesh" }, // 3278835639
		{ &Z_Construct_UFunction_UOculusXRRoomLayoutManagerComponent_OculusRoomLayoutSceneCaptureComplete_Handler, "OculusRoomLayoutSceneCaptureComplete_Handler" }, // 2005432466
		{ &Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature, "OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature" }, // 155423491
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "DisplayName", "OculusXR Room Layout Manager Component" },
		{ "IncludePath", "OculusXRRoomLayoutManagerComponent.h" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData[] = {
		{ "Category", "OculusXR|Room Layout Manager" },
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_OculusXRRoomLayoutSceneCaptureComplete = { "OculusXRRoomLayoutSceneCaptureComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, OculusXRRoomLayoutSceneCaptureComplete), Z_Construct_UDelegateFunction_UOculusXRRoomLayoutManagerComponent_OculusXRRoomLayoutSceneCaptureCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_OculusXRRoomLayoutSceneCaptureComplete_MetaData) }; // 155423491
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList_ElementProp = { "EntityRequestList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList = { "EntityRequestList", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, EntityRequestList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList_MetaData), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_ValueProp = { "RoomLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRRoomLayout, METADATA_PARAMS(0, nullptr) }; // 3858275171
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_Key_KeyProp = { "RoomLayouts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(0, nullptr) }; // 2105598926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRRoomLayoutManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts = { "RoomLayouts", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRRoomLayoutManagerComponent, RoomLayouts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_MetaData), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_MetaData) }; // 2105598926 3858275171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_OculusXRRoomLayoutSceneCaptureComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_EntityRequestList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::NewProp_RoomLayouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRoomLayoutManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::ClassParams = {
		&UOculusXRRoomLayoutManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton, Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent.OuterSingleton;
	}
	template<> OCULUSXRANCHORS_API UClass* StaticClass<UOculusXRRoomLayoutManagerComponent>()
	{
		return UOculusXRRoomLayoutManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRoomLayoutManagerComponent);
	UOculusXRRoomLayoutManagerComponent::~UOculusXRRoomLayoutManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent, UOculusXRRoomLayoutManagerComponent::StaticClass, TEXT("UOculusXRRoomLayoutManagerComponent"), &Z_Registration_Info_UClass_UOculusXRRoomLayoutManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRoomLayoutManagerComponent), 803164470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_194335460(TEXT("/Script/OculusXRAnchors"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRMR/Private/OculusXRMR_PlaneMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMR_PlaneMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent();
	OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_NoRegister();
	OCULUSXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle();
	UPackage* Z_Construct_UPackage__Script_OculusXRMR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle;
class UScriptStruct* FOculusXRMR_PlaneMeshTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle, (UObject*)Z_Construct_UPackage__Script_OculusXRMR(), TEXT("OculusXRMR_PlaneMeshTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.OuterSingleton;
}
template<> OCULUSXRMR_API UScriptStruct* StaticStruct<FOculusXRMR_PlaneMeshTriangle>()
{
	return FOculusXRMR_PlaneMeshTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRMR_PlaneMeshTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, Vertex0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRMR_PlaneMeshTriangle, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_Vertex2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewProp_UV2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
		nullptr,
		&NewStructOps,
		"OculusXRMR_PlaneMeshTriangle",
		Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::PropPointers),
		sizeof(FOculusXRMR_PlaneMeshTriangle),
		alignof(FOculusXRMR_PlaneMeshTriangle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusXRMR_PlaneMeshComponent::execClearCustomMeshTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomMeshTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_PlaneMeshComponent::execAddCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusXRMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMR_PlaneMeshComponent::execSetCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusXRMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	void UOculusXRMR_PlaneMeshComponent::StaticRegisterNativesUOculusXRMR_PlaneMeshComponent()
	{
		UClass* Class = UOculusXRMR_PlaneMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomMeshTriangles", &UOculusXRMR_PlaneMeshComponent::execAddCustomMeshTriangles },
			{ "ClearCustomMeshTriangles", &UOculusXRMR_PlaneMeshComponent::execClearCustomMeshTriangles },
			{ "SetCustomMeshTriangles", &UOculusXRMR_PlaneMeshComponent::execSetCustomMeshTriangles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics
	{
		struct OculusXRMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms
		{
			TArray<FOculusXRMR_PlaneMeshTriangle> Triangles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle, METADATA_PARAMS(0, nullptr) }; // 4181533220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData), Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData) }; // 4181533220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations. */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent, nullptr, "AddCustomMeshTriangles", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::OculusXRMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::OculusXRMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation. */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent, nullptr, "ClearCustomMeshTriangles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics
	{
		struct OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms
		{
			TArray<FOculusXRMR_PlaneMeshTriangle> Triangles;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle, METADATA_PARAMS(0, nullptr) }; // 4181533220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData), Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData) }; // 4181533220
	void Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), &Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Set the geometry to use on this triangle mesh */" },
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Set the geometry to use on this triangle mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent, nullptr, "SetCustomMeshTriangles", nullptr, nullptr, Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::OculusXRMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRMR_PlaneMeshComponent);
	UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_NoRegister()
	{
		return UOculusXRMR_PlaneMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_AddCustomMeshTriangles, "AddCustomMeshTriangles" }, // 1579674568
		{ &Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_ClearCustomMeshTriangles, "ClearCustomMeshTriangles" }, // 3975734197
		{ &Z_Construct_UFunction_UOculusXRMR_PlaneMeshComponent_SetCustomMeshTriangles, "SetCustomMeshTriangles" }, // 1986558561
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "OculusXRMR_PlaneMeshComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusXRMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMR_PlaneMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::ClassParams = {
		&UOculusXRMR_PlaneMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A012A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRMR_PlaneMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMR_PlaneMeshComponent.OuterSingleton, Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRMR_PlaneMeshComponent.OuterSingleton;
	}
	template<> OCULUSXRMR_API UClass* StaticClass<UOculusXRMR_PlaneMeshComponent>()
	{
		return UOculusXRMR_PlaneMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMR_PlaneMeshComponent);
	UOculusXRMR_PlaneMeshComponent::~UOculusXRMR_PlaneMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRMR_PlaneMeshTriangle::StaticStruct, Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics::NewStructOps, TEXT("OculusXRMR_PlaneMeshTriangle"), &Z_Registration_Info_UScriptStruct_OculusXRMR_PlaneMeshTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRMR_PlaneMeshTriangle), 4181533220U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent, UOculusXRMR_PlaneMeshComponent::StaticClass, TEXT("UOculusXRMR_PlaneMeshComponent"), &Z_Registration_Info_UClass_UOculusXRMR_PlaneMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMR_PlaneMeshComponent), 3996852488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_692202578(TEXT("/Script/OculusXRMR"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

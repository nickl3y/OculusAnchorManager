// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/OculusXR-release/HostProject/Plugins/OculusXR/Source/OculusXRScene/Public/OculusXRSceneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRSceneTypes() {}
// Cross Module References
	OCULUSXRSCENE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneTypesPlaceholder();
	UPackage* Z_Construct_UPackage__Script_OculusXRScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder;
class UScriptStruct* FSceneTypesPlaceholder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneTypesPlaceholder, (UObject*)Z_Construct_UPackage__Script_OculusXRScene(), TEXT("SceneTypesPlaceholder"));
	}
	return Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.OuterSingleton;
}
template<> OCULUSXRSCENE_API UScriptStruct* StaticStruct<FSceneTypesPlaceholder>()
{
	return FSceneTypesPlaceholder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRSceneTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneTypesPlaceholder>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRScene,
		nullptr,
		&NewStructOps,
		"SceneTypesPlaceholder",
		nullptr,
		0,
		sizeof(FSceneTypesPlaceholder),
		alignof(FSceneTypesPlaceholder),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneTypesPlaceholder()
	{
		if (!Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.InnerSingleton, Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_Statics::ScriptStructInfo[] = {
		{ FSceneTypesPlaceholder::StaticStruct, Z_Construct_UScriptStruct_FSceneTypesPlaceholder_Statics::NewStructOps, TEXT("SceneTypesPlaceholder"), &Z_Registration_Info_UScriptStruct_SceneTypesPlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneTypesPlaceholder), 4214710216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_4063567226(TEXT("/Script/OculusXRScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRScene_Public_OculusXRSceneTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

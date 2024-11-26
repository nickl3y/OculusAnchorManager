// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXREditor/Public/OculusXREditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXREditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXREditorSettings();
	OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXREditorSettings_NoRegister();
	OCULUSXREDITOR_API UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform();
	UPackage* Z_Construct_UPackage__Script_OculusXREditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRPlatform;
	static UEnum* EOculusXRPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform, (UObject*)Z_Construct_UPackage__Script_OculusXREditor(), TEXT("EOculusXRPlatform"));
		}
		return Z_Registration_Info_UEnum_EOculusXRPlatform.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UEnum* StaticEnum<EOculusXRPlatform>()
	{
		return EOculusXRPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enumerators[] = {
		{ "EOculusXRPlatform::PC", (int64)EOculusXRPlatform::PC },
		{ "EOculusXRPlatform::Mobile", (int64)EOculusXRPlatform::Mobile },
		{ "EOculusXRPlatform::Length", (int64)EOculusXRPlatform::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enum_MetaDataParams[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusXRPlatform::Length" },
		{ "Mobile.DisplayName", "Mobile" },
		{ "Mobile.Name", "EOculusXRPlatform::Mobile" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
		{ "PC.DisplayName", "PC" },
		{ "PC.Name", "EOculusXRPlatform::PC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXREditor,
		nullptr,
		"EOculusXRPlatform",
		"EOculusXRPlatform",
		Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRPlatform.InnerSingleton, Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRPlatform.InnerSingleton;
	}
	void UOculusXREditorSettings::StaticRegisterNativesUOculusXREditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXREditorSettings);
	UClass* Z_Construct_UClass_UOculusXREditorSettings_NoRegister()
	{
		return UOculusXREditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXREditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PerfToolIgnoreList_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerfToolIgnoreList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolIgnoreList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerfToolIgnoreList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerfToolTargetPlatform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolTargetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerfToolTargetPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddMenuOption_MetaData[];
#endif
		static void NewProp_bAddMenuOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddMenuOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXREditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OculusXREditorSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_ValueProp = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_Key_KeyProp = { "PerfToolIgnoreList_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREditorSettings, PerfToolIgnoreList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData), Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform = { "PerfToolTargetPlatform", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXREditorSettings, PerfToolTargetPlatform), Z_Construct_UEnum_OculusXREditor_EOculusXRPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData), Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData) }; // 1438607002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption_MetaData[] = {
		{ "Category", "MetaXR" },
		{ "ModuleRelativePath", "Public/OculusXREditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption_SetBit(void* Obj)
	{
		((UOculusXREditorSettings*)Obj)->bAddMenuOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption = { "bAddMenuOption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXREditorSettings), &Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption_MetaData), Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXREditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolIgnoreList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_PerfToolTargetPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXREditorSettings_Statics::NewProp_bAddMenuOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXREditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXREditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXREditorSettings_Statics::ClassParams = {
		&UOculusXREditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXREditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXREditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXREditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXREditorSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton, Z_Construct_UClass_UOculusXREditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXREditorSettings.OuterSingleton;
	}
	template<> OCULUSXREDITOR_API UClass* StaticClass<UOculusXREditorSettings>()
	{
		return UOculusXREditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXREditorSettings);
	UOculusXREditorSettings::~UOculusXREditorSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::EnumInfo[] = {
		{ EOculusXRPlatform_StaticEnum, TEXT("EOculusXRPlatform"), &Z_Registration_Info_UEnum_EOculusXRPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1438607002U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXREditorSettings, UOculusXREditorSettings::StaticClass, TEXT("UOculusXREditorSettings"), &Z_Registration_Info_UClass_UOculusXREditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXREditorSettings), 2267518739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_1093272819(TEXT("/Script/OculusXREditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXREditor_Public_OculusXREditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

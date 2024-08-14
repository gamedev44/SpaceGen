// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoise/Public/CubeNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeNoise() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCubeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCubeNoise_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCubeNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCubeNoiseParameter_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
// End Cross Module References
	void UCubeNoiseParameter::StaticRegisterNativesUCubeNoiseParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeNoiseParameter);
	UClass* Z_Construct_UClass_UCubeNoiseParameter_NoRegister()
	{
		return UCubeNoiseParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCubeNoiseParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeNoiseParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "CubeNoise.h" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "//You can add any parameters you need for your planet\n" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
		{ "ToolTip", "You can add any parameters you need for your planet" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_TemperatureOffset = { "TemperatureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoiseParameter, TemperatureOffset), METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityOffset = { "HumidityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoiseParameter, HumidityOffset), METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityScale = { "HumidityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoiseParameter, HumidityScale), METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeWidth_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeWidth = { "CubeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoiseParameter, CubeWidth), METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeHeight = { "CubeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoiseParameter, CubeHeight), METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeNoiseParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_TemperatureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_HumidityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoiseParameter_Statics::NewProp_CubeHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeNoiseParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeNoiseParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeNoiseParameter_Statics::ClassParams = {
		&UCubeNoiseParameter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeNoiseParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeNoiseParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoiseParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeNoiseParameter()
	{
		if (!Z_Registration_Info_UClass_UCubeNoiseParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeNoiseParameter.OuterSingleton, Z_Construct_UClass_UCubeNoiseParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeNoiseParameter.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UCubeNoiseParameter>()
	{
		return UCubeNoiseParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeNoiseParameter);
	UCubeNoiseParameter::~UCubeNoiseParameter() {}
	void UCubeNoise::StaticRegisterNativesUCubeNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeNoise);
	UClass* Z_Construct_UClass_UCubeNoise_NoRegister()
	{
		return UCubeNoise::StaticClass();
	}
	struct Z_Construct_UClass_UCubeNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeNoise.h" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeNoise_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CubeNoise.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubeNoise_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeNoise, NoiseParameters), Z_Construct_UClass_UCubeNoiseParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeNoise_Statics::NewProp_NoiseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoise_Statics::NewProp_NoiseParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeNoise_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeNoise_Statics::ClassParams = {
		&UCubeNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoise_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeNoise()
	{
		if (!Z_Registration_Info_UClass_UCubeNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeNoise.OuterSingleton, Z_Construct_UClass_UCubeNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeNoise.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UCubeNoise>()
	{
		return UCubeNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeNoise);
	UCubeNoise::~UCubeNoise() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_CubeNoise_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_CubeNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCubeNoiseParameter, UCubeNoiseParameter::StaticClass, TEXT("UCubeNoiseParameter"), &Z_Registration_Info_UClass_UCubeNoiseParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeNoiseParameter), 4117917592U) },
		{ Z_Construct_UClass_UCubeNoise, UCubeNoise::StaticClass, TEXT("UCubeNoise"), &Z_Registration_Info_UClass_UCubeNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeNoise), 1330160120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_CubeNoise_h_3441297292(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_CubeNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_CubeNoise_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

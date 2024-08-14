// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/NoiseVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseVolume() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ANoiseVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ANoiseVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface();
// End Cross Module References
	void ANoiseVolume::StaticRegisterNativesANoiseVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoiseVolume);
	UClass* Z_Construct_UClass_ANoiseVolume_NoRegister()
	{
		return ANoiseVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANoiseVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScapeNoise_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScapeNoise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoiseVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolumeInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "NoiseVolume.h" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_EdgeFalloff_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_EdgeFalloff = { "EdgeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, EdgeFalloff), METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_EdgeFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_EdgeFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Noise Properties\n//The Scale of the noise, Higger value = wide details\n" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
		{ "ToolTip", "Noise Properties\nThe Scale of the noise, Higger value = wide details" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseIntensity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Intensity of the noise in cm, Higger value = Higger montains\n" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
		{ "ToolTip", "Intensity of the noise in cm, Higger value = Higger montains" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseIntensity = { "NoiseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, NoiseIntensity), METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseHeightOffset_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseHeightOffset = { "NoiseHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, NoiseHeightOffset), METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Seed value\n" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
		{ "ToolTip", "Seed value" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, Seed), METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseOffset_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/*\n\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Noise\")\n\x09\x09""FRotator LattitudeRotation;\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Noise\")\n        FRotator LattitudeRotation;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseOffset = { "NoiseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, NoiseOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoiseVolume_Statics::NewProp_WorldScapeNoise_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Custom Noise Subclass\n" },
		{ "ModuleRelativePath", "Public/NoiseVolume.h" },
		{ "ToolTip", "Custom Noise Subclass" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoiseVolume_Statics::NewProp_WorldScapeNoise = { "WorldScapeNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANoiseVolume, WorldScapeNoise), Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_WorldScapeNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::NewProp_WorldScapeNoise_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoiseVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_EdgeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_NoiseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoiseVolume_Statics::NewProp_WorldScapeNoise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoiseVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoiseVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoiseVolume_Statics::ClassParams = {
		&ANoiseVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANoiseVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANoiseVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoiseVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoiseVolume()
	{
		if (!Z_Registration_Info_UClass_ANoiseVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoiseVolume.OuterSingleton, Z_Construct_UClass_ANoiseVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoiseVolume.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<ANoiseVolume>()
	{
		return ANoiseVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoiseVolume);
	ANoiseVolume::~ANoiseVolume() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_NoiseVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_NoiseVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoiseVolume, ANoiseVolume::StaticClass, TEXT("ANoiseVolume"), &Z_Registration_Info_UClass_ANoiseVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoiseVolume), 618535240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_NoiseVolume_h_3945517716(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_NoiseVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_NoiseVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

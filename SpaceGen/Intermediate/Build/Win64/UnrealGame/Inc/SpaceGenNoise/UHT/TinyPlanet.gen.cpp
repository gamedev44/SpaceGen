// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoise/Public/TinyPlanet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinyPlanet() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTinyPlanet();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTinyPlanet_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTinyPlanetExample();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTinyPlanetExample_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
// End Cross Module References
	void UTinyPlanet::StaticRegisterNativesUTinyPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTinyPlanet);
	UClass* Z_Construct_UClass_UTinyPlanet_NoRegister()
	{
		return UTinyPlanet::StaticClass();
	}
	struct Z_Construct_UClass_UTinyPlanet_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp2Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp2Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpScale2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpScale2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp2Scale2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp2Scale2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpIntensity2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpIntensity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePlanetaryHeightmap_MetaData[];
#endif
		static void NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePlanetaryHeightmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverVienScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverVienScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverHeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverHeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverSharpness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverSharpness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverBumpiness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverBumpiness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverBumpinessOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverBumpinessOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverWarpIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverWarpIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp3Scape_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp3Scape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverWarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverWarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverBranchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverBranchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverBranchSharpness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverBranchSharpness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MountainOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HillOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillPersistence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTinyPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "TinyPlanet.h" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_TemperatureOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_TemperatureOffset = { "TemperatureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, TemperatureOffset), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_TemperatureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_TemperatureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityOffset = { "HumidityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HumidityOffset), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityScale = { "HumidityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HumidityScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity = { "WarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, WarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale = { "WarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, WarpScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale = { "Warp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, Warp2Scale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale2 = { "WarpScale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, WarpScale2), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale2 = { "Warp2Scale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, Warp2Scale2), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity2 = { "WarpIntensity2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, WarpIntensity2), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	void Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj)
	{
		((UTinyPlanet*)Obj)->bIgnorePlanetaryHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap = { "bIgnorePlanetaryHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTinyPlanet), &Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverVienScale_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverVienScale = { "RiverVienScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverVienScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverVienScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverVienScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverHeightScale_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverHeightScale = { "RiverHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverHeightScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverHeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverSharpness_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverSharpness = { "RiverSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverSharpness), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverSharpness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpiness_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpiness = { "RiverBumpiness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverBumpiness), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpiness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpinessOffset_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpinessOffset = { "RiverBumpinessOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverBumpinessOffset), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpinessOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpinessOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpIntensity_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpIntensity = { "RiverWarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverWarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp3Scape_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp3Scape = { "Warp3Scape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, Warp3Scape), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp3Scape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp3Scape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpScale_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpScale = { "RiverWarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverWarpScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchScale_MetaData[] = {
		{ "Category", "General|River2|RiverBranches" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchScale = { "RiverBranchScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverBranchScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchSharpness_MetaData[] = {
		{ "Category", "General|River2|RiverBranches" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchSharpness = { "RiverBranchSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, RiverBranchSharpness), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchSharpness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeight = { "MountainHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainHeight), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeightPower = { "MountainHeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainHeightPower), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainScale = { "MountainScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainOctave_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainOctave = { "MountainOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainOctave), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainLacunarity_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainLacunarity = { "MountainLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainLacunarity), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainPersistence_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainPersistence = { "MountainPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainPersistence), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeight = { "MountainWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainWeight), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightScale = { "MountainWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainWeightScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightPower = { "MountainWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, MountainWeightPower), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillHeight_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillHeight = { "HillHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HillHeight), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillScale_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillScale = { "HillScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HillScale), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillOctave_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillOctave = { "HillOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HillOctave), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillLacunarity_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillLacunarity = { "HillLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HillLacunarity), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillPersistence_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillPersistence = { "HillPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanet, HillPersistence), METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillPersistence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTinyPlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_TemperatureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HumidityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpScale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp2Scale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_WarpIntensity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_bIgnorePlanetaryHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverVienScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverHeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverSharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpiness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBumpinessOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_Warp3Scape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_RiverBranchSharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainHeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_MountainWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanet_Statics::NewProp_HillPersistence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTinyPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTinyPlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTinyPlanet_Statics::ClassParams = {
		&UTinyPlanet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTinyPlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTinyPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTinyPlanet()
	{
		if (!Z_Registration_Info_UClass_UTinyPlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTinyPlanet.OuterSingleton, Z_Construct_UClass_UTinyPlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTinyPlanet.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UTinyPlanet>()
	{
		return UTinyPlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTinyPlanet);
	UTinyPlanet::~UTinyPlanet() {}
	void UTinyPlanetExample::StaticRegisterNativesUTinyPlanetExample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTinyPlanetExample);
	UClass* Z_Construct_UClass_UTinyPlanetExample_NoRegister()
	{
		return UTinyPlanetExample::StaticClass();
	}
	struct Z_Construct_UClass_UTinyPlanetExample_Statics
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
	UObject* (*const Z_Construct_UClass_UTinyPlanetExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanetExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TinyPlanet.h" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTinyPlanetExample_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TinyPlanet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTinyPlanetExample_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTinyPlanetExample, NoiseParameters), Z_Construct_UClass_UTinyPlanet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTinyPlanetExample_Statics::NewProp_NoiseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanetExample_Statics::NewProp_NoiseParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTinyPlanetExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTinyPlanetExample_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTinyPlanetExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTinyPlanetExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTinyPlanetExample_Statics::ClassParams = {
		&UTinyPlanetExample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTinyPlanetExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanetExample_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTinyPlanetExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTinyPlanetExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTinyPlanetExample()
	{
		if (!Z_Registration_Info_UClass_UTinyPlanetExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTinyPlanetExample.OuterSingleton, Z_Construct_UClass_UTinyPlanetExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTinyPlanetExample.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UTinyPlanetExample>()
	{
		return UTinyPlanetExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTinyPlanetExample);
	UTinyPlanetExample::~UTinyPlanetExample() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_TinyPlanet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_TinyPlanet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTinyPlanet, UTinyPlanet::StaticClass, TEXT("UTinyPlanet"), &Z_Registration_Info_UClass_UTinyPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTinyPlanet), 707093578U) },
		{ Z_Construct_UClass_UTinyPlanetExample, UTinyPlanetExample::StaticClass, TEXT("UTinyPlanetExample"), &Z_Registration_Info_UClass_UTinyPlanetExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTinyPlanetExample), 2259207836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_TinyPlanet_h_1741577755(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_TinyPlanet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_TinyPlanet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

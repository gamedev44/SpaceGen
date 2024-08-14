// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoise/Public/PlanetTerraNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetTerraNoise() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UPlanetTerraNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UPlanetTerraNoise_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTerraNoiseExample();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UTerraNoiseExample_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
// End Cross Module References
	void UPlanetTerraNoise::StaticRegisterNativesUPlanetTerraNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanetTerraNoise);
	UClass* Z_Construct_UClass_UPlanetTerraNoise_NoRegister()
	{
		return UPlanetTerraNoise::StaticClass();
	}
	struct Z_Construct_UClass_UPlanetTerraNoise_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureLandintensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureLandintensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureLandPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureLandPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureNoiseScale1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureNoiseScale1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureNoiseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureNoiseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureOffset2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureOffset2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperaturePolarSharpness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperaturePolarSharpness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureNoiseAffect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureNoiseAffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallLandHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallLandHeight;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_continentalwarpIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_continentalwarpIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_continentalwarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_continentalwarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_continentalwarp2Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_continentalwarp2Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinentOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ContinentOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_continentLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_continentLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_continentPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_continentPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMountainInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMountainInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryHillsInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryHillsInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryHeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryHeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMaskOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMaskOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMaskWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMaskWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachHeight2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachHeight2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapTansitionShaprness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapTansitionShaprness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapTansition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapTansition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapTansitionNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapTansitionNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapNoiseTansition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapNoiseTansition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapNoiseTansition2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapNoiseTansition2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapNoiseLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapNoiseLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceCapNoisePersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IceCapNoisePersistence;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverBumpinessIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverBumpinessIntensity;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorBaseHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorBaseHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OceanFloorOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OceanFloorWeightOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainShift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MountainShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainDetailScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainDetailScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainDetailHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainDetailHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeighDetailPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeighDetailPower;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountWarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountWarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountWarp2Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountWarp2Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWarpIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWarpIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsHeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsHeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ExteameHillsOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWarp2Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWarp2Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExteameHillsWarpInsesnity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExteameHillsWarpInsesnity;
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
	UObject* (*const Z_Construct_UClass_UPlanetTerraNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "PlanetTerraNoise.h" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset = { "TemperatureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandintensity_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandintensity = { "TemperatureLandintensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureLandintensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandintensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandintensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandPower_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandPower = { "TemperatureLandPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureLandPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureWeight_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureWeight = { "TemperatureWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureWeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale1_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale1 = { "TemperatureNoiseScale1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureNoiseScale1), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseOffset_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseOffset = { "TemperatureNoiseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureNoiseOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeight = { "PlanetaryHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, PlanetaryHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset2_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset2 = { "TemperatureOffset2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureOffset2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperaturePolarSharpness_MetaData[] = {
		{ "Category", "General|Temperature" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperaturePolarSharpness = { "TemperaturePolarSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperaturePolarSharpness), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperaturePolarSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperaturePolarSharpness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale = { "TemperatureNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureNoiseScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseAffect_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseAffect = { "TemperatureNoiseAffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureNoiseAffect), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseAffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureMask_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureMask = { "TemperatureMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, TemperatureMask), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityOffset = { "HumidityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HumidityOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OverallLandHeight_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OverallLandHeight = { "OverallLandHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OverallLandHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OverallLandHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OverallLandHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityScale = { "HumidityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HumidityScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity = { "WarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, WarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale = { "WarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, WarpScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale = { "Warp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, Warp2Scale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale2 = { "WarpScale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, WarpScale2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale2 = { "Warp2Scale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, Warp2Scale2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity2 = { "WarpIntensity2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, WarpIntensity2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	void Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj)
	{
		((UPlanetTerraNoise*)Obj)->bIgnorePlanetaryHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap = { "bIgnorePlanetaryHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlanetTerraNoise), &Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpIntensity_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpIntensity = { "continentalwarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, continentalwarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpScale_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpScale = { "continentalwarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, continentalwarpScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarp2Scale_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarp2Scale = { "continentalwarp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, continentalwarp2Scale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ContinentOctave_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ContinentOctave = { "ContinentOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ContinentOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ContinentOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ContinentOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentLacunarity_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentLacunarity = { "continentLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, continentLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentPersistence_MetaData[] = {
		{ "Category", "General|Continents" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentPersistence = { "continentPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, continentPersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryMountainInfluence_MetaData[] = {
		{ "Category", "General|PlanetaryHeightmap-Optional" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryMountainInfluence = { "PlanetaryMountainInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, PlanetaryMountainInfluence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryMountainInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryMountainInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHillsInfluence_MetaData[] = {
		{ "Category", "General|PlanetaryHeightmap-Optional" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHillsInfluence = { "PlanetaryHillsInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, PlanetaryHillsInfluence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHillsInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHillsInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeightPower_MetaData[] = {
		{ "Category", "General|PlanetaryHeightmap-Optional" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeightPower = { "PlanetaryHeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, PlanetaryHeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMask_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMask = { "BeachMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachMask), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskOffset_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskOffset = { "BeachMaskOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachMaskOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskWeight_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskWeight = { "BeachMaskWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachMaskWeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight = { "BeachHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachScale_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachScale = { "BeachScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight2_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight2 = { "BeachHeight2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, BeachHeight2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapHeight_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapHeight = { "IceCapHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionShaprness_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionShaprness = { "IceCapTansitionShaprness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapTansitionShaprness), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionShaprness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionShaprness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansition_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansition = { "IceCapTansition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapTansition), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionNoiseScale_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionNoiseScale = { "IceCapTansitionNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapTansitionNoiseScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionNoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionNoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition = { "IceCapNoiseTansition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapNoiseTansition), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition2_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition2 = { "IceCapNoiseTansition2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapNoiseTansition2), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseLacunarity_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseLacunarity = { "IceCapNoiseLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapNoiseLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoisePersistence_MetaData[] = {
		{ "Category", "General|IceCap" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoisePersistence = { "IceCapNoisePersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, IceCapNoisePersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoisePersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoisePersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverVienScale_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverVienScale = { "RiverVienScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverVienScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverVienScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverVienScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverHeightScale_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverHeightScale = { "RiverHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverHeightScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverHeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverSharpness_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverSharpness = { "RiverSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverSharpness), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverSharpness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpiness_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpiness = { "RiverBumpiness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverBumpiness), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpiness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpiness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessIntensity_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessIntensity = { "RiverBumpinessIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverBumpinessIntensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessOffset_MetaData[] = {
		{ "Category", "General|River2" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessOffset = { "RiverBumpinessOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverBumpinessOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpIntensity_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpIntensity = { "RiverWarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverWarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp3Scape_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp3Scape = { "Warp3Scape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, Warp3Scape), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp3Scape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp3Scape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpScale_MetaData[] = {
		{ "Category", "General|River2|RiverWarp" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpScale = { "RiverWarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverWarpScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchScale_MetaData[] = {
		{ "Category", "General|River2|RiverBranches" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchScale = { "RiverBranchScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverBranchScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchSharpness_MetaData[] = {
		{ "Category", "General|River2|RiverBranches" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchSharpness = { "RiverBranchSharpness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, RiverBranchSharpness), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchSharpness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorHeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorHeight = { "OceanFloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorBaseHeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorBaseHeight = { "OceanFloorBaseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorBaseHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorBaseHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorBaseHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorScale_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorScale = { "OceanFloorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorOctave_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorOctave = { "OceanFloorOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorLacunarity_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorLacunarity = { "OceanFloorLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorPersistence_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorPersistence = { "OceanFloorPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorPersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeight = { "OceanFloorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorWeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightOctave_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightOctave = { "OceanFloorWeightOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorWeightOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightScale_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightScale = { "OceanFloorWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorWeightScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightPower_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightPower = { "OceanFloorWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, OceanFloorWeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeight = { "MountainHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightOffset_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightOffset = { "MountainHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainShift_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainShift = { "MountainShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainShift), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightPower = { "MountainHeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainHeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainScale = { "MountainScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailScale_MetaData[] = {
		{ "Category", "General|Mountain|Detail" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailScale = { "MountainDetailScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainDetailScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailHeight_MetaData[] = {
		{ "Category", "General|Mountain|Detail" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailHeight = { "MountainDetailHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainDetailHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeighDetailPower_MetaData[] = {
		{ "Category", "General|Mountain|Detail" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeighDetailPower = { "MountainHeighDetailPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainHeighDetailPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeighDetailPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeighDetailPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainOctave_MetaData[] = {
		{ "Category", "General|Mountain|Detail" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainOctave = { "MountainOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainLacunarity_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainLacunarity = { "MountainLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainPersistence_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainPersistence = { "MountainPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainPersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeight = { "MountainWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainWeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightScale = { "MountainWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainWeightScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightPower = { "MountainWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainWeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarpScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarpScale = { "MountWarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountWarpScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarp2Scale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarp2Scale = { "MountWarp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountWarp2Scale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWarpIntensity_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWarpIntensity = { "MountainWarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, MountainWarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeight_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeight = { "ExteameHillsHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightOffset_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightOffset = { "ExteameHillsHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightPower_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightPower = { "ExteameHillsHeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsHeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsScale_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsScale = { "ExteameHillsScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsOctave_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsOctave = { "ExteameHillsOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsLacunarity_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsLacunarity = { "ExteameHillsLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsPersistence_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsPersistence = { "ExteameHillsPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsPersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeight_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeight = { "ExteameHillsWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightScale_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightScale = { "ExteameHillsWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWeightScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightPower_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightPower = { "ExteameHillsWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWeightPower), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpScale_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpScale = { "ExteameHillsWarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWarpScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarp2Scale_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarp2Scale = { "ExteameHillsWarp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWarp2Scale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpInsesnity_MetaData[] = {
		{ "Category", "General|ExteameHills" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpInsesnity = { "ExteameHillsWarpInsesnity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, ExteameHillsWarpInsesnity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpInsesnity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpInsesnity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillHeight_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillHeight = { "HillHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HillHeight), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillScale_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillScale = { "HillScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HillScale), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillOctave_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillOctave = { "HillOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HillOctave), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillLacunarity_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillLacunarity = { "HillLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HillLacunarity), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillPersistence_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillPersistence = { "HillPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlanetTerraNoise, HillPersistence), METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillPersistence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlanetTerraNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandintensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureLandPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureOffset2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperaturePolarSharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureNoiseAffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_TemperatureMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OverallLandHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HumidityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpScale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp2Scale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_WarpIntensity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_bIgnorePlanetaryHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentalwarp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ContinentOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_continentPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryMountainInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHillsInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_PlanetaryHeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachMaskWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_BeachHeight2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionShaprness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapTansitionNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseTansition2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoiseLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_IceCapNoisePersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverVienScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverHeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverSharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpiness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBumpinessOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_Warp3Scape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_RiverBranchSharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorBaseHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_OceanFloorWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainDetailHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainHeighDetailPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountWarp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_MountainWarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsHeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_ExteameHillsWarpInsesnity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanetTerraNoise_Statics::NewProp_HillPersistence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanetTerraNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetTerraNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanetTerraNoise_Statics::ClassParams = {
		&UPlanetTerraNoise::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlanetTerraNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanetTerraNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetTerraNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanetTerraNoise()
	{
		if (!Z_Registration_Info_UClass_UPlanetTerraNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanetTerraNoise.OuterSingleton, Z_Construct_UClass_UPlanetTerraNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlanetTerraNoise.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UPlanetTerraNoise>()
	{
		return UPlanetTerraNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetTerraNoise);
	UPlanetTerraNoise::~UPlanetTerraNoise() {}
	void UTerraNoiseExample::StaticRegisterNativesUTerraNoiseExample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTerraNoiseExample);
	UClass* Z_Construct_UClass_UTerraNoiseExample_NoRegister()
	{
		return UTerraNoiseExample::StaticClass();
	}
	struct Z_Construct_UClass_UTerraNoiseExample_Statics
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
	UObject* (*const Z_Construct_UClass_UTerraNoiseExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerraNoiseExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlanetTerraNoise.h" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerraNoiseExample_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlanetTerraNoise.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTerraNoiseExample_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTerraNoiseExample, NoiseParameters), Z_Construct_UClass_UPlanetTerraNoise_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTerraNoiseExample_Statics::NewProp_NoiseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTerraNoiseExample_Statics::NewProp_NoiseParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTerraNoiseExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTerraNoiseExample_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerraNoiseExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerraNoiseExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerraNoiseExample_Statics::ClassParams = {
		&UTerraNoiseExample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTerraNoiseExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTerraNoiseExample_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTerraNoiseExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTerraNoiseExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerraNoiseExample()
	{
		if (!Z_Registration_Info_UClass_UTerraNoiseExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTerraNoiseExample.OuterSingleton, Z_Construct_UClass_UTerraNoiseExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTerraNoiseExample.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UTerraNoiseExample>()
	{
		return UTerraNoiseExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerraNoiseExample);
	UTerraNoiseExample::~UTerraNoiseExample() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_PlanetTerraNoise_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_PlanetTerraNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlanetTerraNoise, UPlanetTerraNoise::StaticClass, TEXT("UPlanetTerraNoise"), &Z_Registration_Info_UClass_UPlanetTerraNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanetTerraNoise), 2687690948U) },
		{ Z_Construct_UClass_UTerraNoiseExample, UTerraNoiseExample::StaticClass, TEXT("UTerraNoiseExample"), &Z_Registration_Info_UClass_UTerraNoiseExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerraNoiseExample), 2276137141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_PlanetTerraNoise_h_2431896497(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_PlanetTerraNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_PlanetTerraNoise_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

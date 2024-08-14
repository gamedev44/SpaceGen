// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoise/Public/IceWorld.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceWorld() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UIceWorld();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UIceWorld_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UIceWorldNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UIceWorldNoise_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
// End Cross Module References
	void UIceWorld::StaticRegisterNativesUIceWorld()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIceWorld);
	UClass* Z_Construct_UClass_UIceWorld_NoRegister()
	{
		return UIceWorld::StaticClass();
	}
	struct Z_Construct_UClass_UIceWorld_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterSurfaceApperanceInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterSurfaceApperanceInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_surfaceFeature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_surfaceFeature;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDeformationHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceDeformationHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDeformationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceDeformationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDeformationOcative_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SurfaceDeformationOcative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDeformationLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceDeformationLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDeformationPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceDeformationPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RidgeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RidgeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RidgeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RidgeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RidgeShaprness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RidgeShaprness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RidgBump_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RidgBump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RidgOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RidgOffset;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterHeightMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterHeightMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterRimHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimOctaveLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterRimOctaveLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimPower_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterRimPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarpFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterWarpFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarpOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterWarpOctave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIceWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "IceWorld.h" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_TemperatureOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_TemperatureOffset = { "TemperatureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, TemperatureOffset), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_TemperatureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_TemperatureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityOffset = { "HumidityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HumidityOffset), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityScale = { "HumidityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HumidityScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity = { "WarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, WarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale = { "WarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, WarpScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale = { "Warp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, Warp2Scale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale2 = { "WarpScale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, WarpScale2), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale2 = { "Warp2Scale2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, Warp2Scale2), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity2_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity2 = { "WarpIntensity2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, WarpIntensity2), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	void Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj)
	{
		((UIceWorld*)Obj)->bIgnorePlanetaryHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap = { "bIgnorePlanetaryHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIceWorld), &Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSurfaceApperanceInfluence_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSurfaceApperanceInfluence = { "CraterSurfaceApperanceInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterSurfaceApperanceInfluence), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSurfaceApperanceInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSurfaceApperanceInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_surfaceFeature_MetaData[] = {
		{ "Category", "General|surfaceFeature" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_surfaceFeature = { "surfaceFeature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, surfaceFeature), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_surfaceFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_surfaceFeature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HillHeight_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HillHeight = { "HillHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HillHeight), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HillScale_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HillScale = { "HillScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HillScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HillOctave_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HillOctave = { "HillOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HillOctave), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HillLacunarity_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HillLacunarity = { "HillLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HillLacunarity), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_HillPersistence_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_HillPersistence = { "HillPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, HillPersistence), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_HillPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationHeight_MetaData[] = {
		{ "Category", "General|Deformations" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationHeight = { "SurfaceDeformationHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, SurfaceDeformationHeight), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationScale_MetaData[] = {
		{ "Category", "General|Deformations" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationScale = { "SurfaceDeformationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, SurfaceDeformationScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationOcative_MetaData[] = {
		{ "Category", "General|Deformations" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationOcative = { "SurfaceDeformationOcative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, SurfaceDeformationOcative), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationOcative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationOcative_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationLacunarity_MetaData[] = {
		{ "Category", "General|Deformations" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationLacunarity = { "SurfaceDeformationLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, SurfaceDeformationLacunarity), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationPersistence_MetaData[] = {
		{ "Category", "General|Deformations" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationPersistence = { "SurfaceDeformationPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, SurfaceDeformationPersistence), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeHeight_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeHeight = { "RidgeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RidgeHeight), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeScale_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeScale = { "RidgeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RidgeScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeShaprness_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeShaprness = { "RidgeShaprness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RidgeShaprness), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeShaprness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeShaprness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgBump_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgBump = { "RidgBump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RidgBump), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgBump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgBump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgOffset_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgOffset = { "RidgOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RidgOffset), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpIntensity_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpIntensity = { "RiverWarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RiverWarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp3Scape_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp3Scape = { "Warp3Scape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, Warp3Scape), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp3Scape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp3Scape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpScale_MetaData[] = {
		{ "Category", "General|Ridge" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpScale = { "RiverWarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, RiverWarpScale), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterFrequency_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterFrequency = { "CraterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterFrequency), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterOctave_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterOctave = { "CraterOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterOctave), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterLacunarity_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterLacunarity = { "CraterLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterLacunarity), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterPersistence_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterPersistence = { "CraterPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterPersistence), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterHeightMultiplier_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterHeightMultiplier = { "CraterHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterHeightMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterHeightMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterHeightMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSize_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSize = { "CraterSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterSize), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimHeight_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimHeight = { "CraterRimHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterRimHeight), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimOctaveLimit_MetaData[] = {
		{ "Category", "Moon" },
		{ "Comment", "//Number of crater Octave that possess crater rim\n" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
		{ "ToolTip", "Number of crater Octave that possess crater rim" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimOctaveLimit = { "CraterRimOctaveLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterRimOctaveLimit), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimOctaveLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimOctaveLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimPower_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimPower = { "CraterRimPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterRimPower), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarp_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarp = { "CraterWarp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterWarp), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpFrequency_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpFrequency = { "CraterWarpFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterWarpFrequency), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpOctave_MetaData[] = {
		{ "Category", "Moon" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpOctave = { "CraterWarpOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorld, CraterWarpOctave), METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpOctave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIceWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_TemperatureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HumidityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpScale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp2Scale2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_WarpIntensity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_bIgnorePlanetaryHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSurfaceApperanceInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_surfaceFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HillHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HillScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HillOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HillLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_HillPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationOcative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_SurfaceDeformationPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgeShaprness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgBump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RidgOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_Warp3Scape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_RiverWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterHeightMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimOctaveLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterRimPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorld_Statics::NewProp_CraterWarpOctave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceWorld>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIceWorld_Statics::ClassParams = {
		&UIceWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIceWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIceWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceWorld()
	{
		if (!Z_Registration_Info_UClass_UIceWorld.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIceWorld.OuterSingleton, Z_Construct_UClass_UIceWorld_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIceWorld.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UIceWorld>()
	{
		return UIceWorld::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceWorld);
	UIceWorld::~UIceWorld() {}
	void UIceWorldNoise::StaticRegisterNativesUIceWorldNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIceWorldNoise);
	UClass* Z_Construct_UClass_UIceWorldNoise_NoRegister()
	{
		return UIceWorldNoise::StaticClass();
	}
	struct Z_Construct_UClass_UIceWorldNoise_Statics
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
	UObject* (*const Z_Construct_UClass_UIceWorldNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorldNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IceWorld.h" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceWorldNoise_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IceWorld.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIceWorldNoise_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIceWorldNoise, NoiseParameters), Z_Construct_UClass_UIceWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIceWorldNoise_Statics::NewProp_NoiseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorldNoise_Statics::NewProp_NoiseParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIceWorldNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWorldNoise_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceWorldNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceWorldNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIceWorldNoise_Statics::ClassParams = {
		&UIceWorldNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIceWorldNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorldNoise_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIceWorldNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceWorldNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceWorldNoise()
	{
		if (!Z_Registration_Info_UClass_UIceWorldNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIceWorldNoise.OuterSingleton, Z_Construct_UClass_UIceWorldNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIceWorldNoise.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UIceWorldNoise>()
	{
		return UIceWorldNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceWorldNoise);
	UIceWorldNoise::~UIceWorldNoise() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_IceWorld_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_IceWorld_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIceWorld, UIceWorld::StaticClass, TEXT("UIceWorld"), &Z_Registration_Info_UClass_UIceWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIceWorld), 1779648259U) },
		{ Z_Construct_UClass_UIceWorldNoise, UIceWorldNoise::StaticClass, TEXT("UIceWorldNoise"), &Z_Registration_Info_UClass_UIceWorldNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIceWorldNoise), 3468895902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_IceWorld_h_3362323753(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_IceWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_IceWorld_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesInterface.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesContraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface_NoRegister();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesContraint();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized();
// End Cross Module References
	void UWorldScapeFoliagesInterface::StaticRegisterNativesUWorldScapeFoliagesInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesInterface);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface_NoRegister()
	{
		return UWorldScapeFoliagesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOnServer_MetaData[];
#endif
		static void NewProp_bGenerateOnServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOnServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageSectorSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FoliageSectorSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePoissonDisc_MetaData[];
#endif
		static void NewProp_bUsePoissonDisc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePoissonDisc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoissonDiscDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoissonDiscDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoissonDiscDensityVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoissonDiscDensityVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliagesCount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliagesCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollectionConstraint_MetaData[];
#endif
		static void NewProp_bOverrideCollectionConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollectionConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Humidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slope_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFoliageNoiseMask_MetaData[];
#endif
		static void NewProp_bUseFoliageNoiseMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFoliageNoiseMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnInWater_MetaData[];
#endif
		static void NewProp_bSpawnInWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnInWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageLayer_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOnlyInVolume_MetaData[];
#endif
		static void NewProp_SpawnOnlyInVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnOnlyInVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "WorldScapeCore" },
		{ "ClassGroupNames", "WorldScape" },
		{ "IncludePath", "WorldScapeFoliagesInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bGenerateOnServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer = { "bGenerateOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageSectorSize_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "// Set the size of each Foliage Sector\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Set the size of each Foliage Sector" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageSectorSize = { "FoliageSectorSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, FoliageSectorSize), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageSectorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageSectorSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "//Poisson disc sampling allow better foliage distribution and can prevent foliages from being placed inside each other\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Poisson disc sampling allow better foliage distribution and can prevent foliages from being placed inside each other" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bUsePoissonDisc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc = { "bUsePoissonDisc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensity_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "//Density, you can estimate foliages count by about density*density*0.7\n" },
		{ "DisplayName", "Use Poisson Disc Sampling (Experimental)" },
		{ "EditCondition", "bUsePoissonDisc == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Density, you can estimate foliages count by about density*density*0.7" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensity = { "PoissonDiscDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, PoissonDiscDensity), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensityVariation_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "//Density variation in percent, high value will greatly increase the foliage generation time\n" },
		{ "EditCondition", "bUsePoissonDisc == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Density variation in percent, high value will greatly increase the foliage generation time" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensityVariation = { "PoissonDiscDensityVariation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, PoissonDiscDensityVariation), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensityVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensityVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliagesCount_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "//Amount of foliage spawn per sector\n" },
		{ "EditCondition", "bUsePoissonDisc == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Amount of foliage spawn per sector" },
		{ "UIMax", "30000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliagesCount = { "FoliagesCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, FoliagesCount), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliagesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliagesCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bOverrideCollectionConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint = { "bOverrideCollectionConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Elevation_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "bOverrideCollectionConstraint == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, Elevation), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraint, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Elevation_MetaData)) }; // 1825181855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "bOverrideCollectionConstraint == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, Temperature), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Temperature_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "bOverrideCollectionConstraint == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, Humidity), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Humidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Humidity_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Slope_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "bOverrideCollectionConstraint == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Slope = { "Slope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, Slope), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Slope_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "// Whether or not it use the Tree mask from noise generation\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Whether or not it use the Tree mask from noise generation" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bUseFoliageNoiseMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask = { "bUseFoliageNoiseMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bSpawnInWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater = { "bSpawnInWater", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageLayer_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//Value < 0 mean use of collection's value instead;\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
		{ "ToolTip", "Value < 0 mean use of collection's value instead;" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageLayer = { "FoliageLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, FoliageLayer), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "FoliageLayer >= 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->SpawnOnlyInVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume = { "SpawnOnlyInVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "WorldScapeFoliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesInterface, Description), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "WorldScapeFoliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterface.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesInterface*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesInterface), &Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bGenerateOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageSectorSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUsePoissonDisc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_PoissonDiscDensityVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliagesCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bOverrideCollectionConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Slope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bUseFoliageNoiseMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bSpawnInWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_FoliageLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_SpawnOnlyInVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::ClassParams = {
		&UWorldScapeFoliagesInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesInterface.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesInterface.OuterSingleton;
	}
	template<> WORLDSCAPEFOLIAGES_API UClass* StaticClass<UWorldScapeFoliagesInterface>()
	{
		return UWorldScapeFoliagesInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesInterface);
	UWorldScapeFoliagesInterface::~UWorldScapeFoliagesInterface() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesInterface, UWorldScapeFoliagesInterface::StaticClass, TEXT("UWorldScapeFoliagesInterface"), &Z_Registration_Info_UClass_UWorldScapeFoliagesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesInterface), 1437030740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterface_h_2096618777(TEXT("/Script/WorldScapeFoliages"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

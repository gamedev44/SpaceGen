// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesCollection.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesCollectionData.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesContraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesCollection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCollection();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCollection_NoRegister();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface_NoRegister();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesContraint();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized();
// End Cross Module References
	DEFINE_FUNCTION(UWorldScapeFoliagesCollection::execCreateFoliagesCollectionDataData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWorldScapeFoliagesCollectionData*)Z_Param__Result=P_THIS->CreateFoliagesCollectionDataData();
		P_NATIVE_END;
	}
	void UWorldScapeFoliagesCollection::StaticRegisterNativesUWorldScapeFoliagesCollection()
	{
		UClass* Class = UWorldScapeFoliagesCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFoliagesCollectionDataData", &UWorldScapeFoliagesCollection::execCreateFoliagesCollectionDataData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics
	{
		struct WorldScapeFoliagesCollection_eventCreateFoliagesCollectionDataData_Parms
		{
			FWorldScapeFoliagesCollectionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeFoliagesCollection_eventCreateFoliagesCollectionDataData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData, METADATA_PARAMS(nullptr, 0) }; // 2026268453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldScapeFoliagesCollection, nullptr, "CreateFoliagesCollectionDataData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::WorldScapeFoliagesCollection_eventCreateFoliagesCollectionDataData_Parms), Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesCollection);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCollection_NoRegister()
	{
		return UWorldScapeFoliagesCollection::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinElevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinElevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxElevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxElevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSlope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSlope;
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
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldScapeFoliagesCollection_CreateFoliagesCollectionDataData, "CreateFoliagesCollectionDataData" }, // 3790803829
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "WorldScapeFoliages" },
		{ "ClassGroupNames", "WorldScape" },
		{ "IncludePath", "WorldScapeFoliagesCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList_Inner = { "FoliageList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeFoliagesInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList_MetaData[] = {
		{ "Category", "Foliages" },
		{ "Comment", "// The foliage's mesh\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
		{ "ToolTip", "The foliage's mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList = { "FoliageList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, FoliageList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinElevation_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//Legacy will be removed in a future update\n" },
		{ "DisplayName", "Min Elevation (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
		{ "ToolTip", "Legacy will be removed in a future update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinElevation = { "MinElevation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MinElevation), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinElevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxElevation_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Max Elevation (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxElevation = { "MaxElevation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MaxElevation), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxElevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinTemperature_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Min Temperature (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinTemperature = { "MinTemperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MinTemperature), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxTemperature_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Max Temperature (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxTemperature = { "MaxTemperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MaxTemperature), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinHumidity_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Min Humidity (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinHumidity = { "MinHumidity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MinHumidity), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxHumidity_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Max Humidity (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxHumidity = { "MaxHumidity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MaxHumidity), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinSlope_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Min Slope (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinSlope = { "MinSlope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MinSlope), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinSlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxSlope_MetaData[] = {
		{ "Category", "Placement" },
		{ "DisplayName", "Max Slope (Obsolete)" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxSlope = { "MaxSlope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, MaxSlope), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxSlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Elevation_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, Elevation), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraint, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Elevation_MetaData)) }; // 1825181855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, Temperature), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Temperature_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, Humidity), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Humidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Humidity_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Slope_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Slope = { "Slope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, Slope), Z_Construct_UScriptStruct_FWorldScapeFoliagesContraintNormalized, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Slope_MetaData)) }; // 764288152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesCollection*)Obj)->bSpawnInWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater = { "bSpawnInWater", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesCollection), &Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageLayer_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageLayer = { "FoliageLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, FoliageLayer), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesCollection*)Obj)->SpawnOnlyInVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume = { "SpawnOnlyInVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesCollection), &Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "WorldScapeFoliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeFoliagesCollection, Description), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "WorldScapeFoliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollection.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesCollection*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeFoliagesCollection), &Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxElevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MinSlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_MaxSlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Slope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bSpawnInWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_FoliageLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_SpawnOnlyInVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::ClassParams = {
		&UWorldScapeFoliagesCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCollection()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesCollection.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesCollection.OuterSingleton;
	}
	template<> WORLDSCAPEFOLIAGES_API UClass* StaticClass<UWorldScapeFoliagesCollection>()
	{
		return UWorldScapeFoliagesCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesCollection);
	UWorldScapeFoliagesCollection::~UWorldScapeFoliagesCollection() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesCollection, UWorldScapeFoliagesCollection::StaticClass, TEXT("UWorldScapeFoliagesCollection"), &Z_Registration_Info_UClass_UWorldScapeFoliagesCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesCollection), 1484353049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollection_h_2028747127(TEXT("/Script/WorldScapeFoliages"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

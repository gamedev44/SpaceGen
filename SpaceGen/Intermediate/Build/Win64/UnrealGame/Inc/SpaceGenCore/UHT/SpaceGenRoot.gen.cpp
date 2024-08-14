// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeCore/Public/WorldScapeRoot.h"
#include "WorldScapeCore/Public/LodData.h"
#include "WorldScapeCore/Public/MaterialLod.h"
#include "WorldScapeNoise/Public/NoiseData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeRoot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeCore();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_AWorldScapeRoot();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_AWorldScapeRoot_NoRegister();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_UWorldScapeLod_NoRegister();
	WORLDSCAPECORE_API UEnum* Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType();
	WORLDSCAPECORE_API UEnum* Z_Construct_UEnum_WorldScapeCore_EWorldScapeType();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FVegetation();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLodArray();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCollection_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister();
	WORLDSCAPENOISE_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseData();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AFoliageMaskVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AHeightMapVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ANoiseVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ATerrainHoleVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_UHeightMapVolumeData_NoRegister();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldScapeType;
	static UEnum* EWorldScapeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldScapeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldScapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeCore_EWorldScapeType, Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("EWorldScapeType"));
		}
		return Z_Registration_Info_UEnum_EWorldScapeType.OuterSingleton;
	}
	template<> WORLDSCAPECORE_API UEnum* StaticEnum<EWorldScapeType>()
	{
		return EWorldScapeType_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enumerators[] = {
		{ "EWorldScapeType::Flat", (int64)EWorldScapeType::Flat },
		{ "EWorldScapeType::Planet", (int64)EWorldScapeType::Planet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "Flat.DisplayName", "Flat World" },
		{ "Flat.Name", "EWorldScapeType::Flat" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "Planet.DisplayName", "Planet" },
		{ "Planet.Name", "EWorldScapeType::Planet" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		"EWorldScapeType",
		"EWorldScapeType",
		Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeCore_EWorldScapeType()
	{
		if (!Z_Registration_Info_UEnum_EWorldScapeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldScapeType.InnerSingleton, Z_Construct_UEnum_WorldScapeCore_EWorldScapeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldScapeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType;
	static UEnum* EPlanetaryHeightMapBlendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType, Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("EPlanetaryHeightMapBlendType"));
		}
		return Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.OuterSingleton;
	}
	template<> WORLDSCAPECORE_API UEnum* StaticEnum<EPlanetaryHeightMapBlendType>()
	{
		return EPlanetaryHeightMapBlendType_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enumerators[] = {
		{ "EPlanetaryHeightMapBlendType::Replace", (int64)EPlanetaryHeightMapBlendType::Replace },
		{ "EPlanetaryHeightMapBlendType::Addition", (int64)EPlanetaryHeightMapBlendType::Addition },
		{ "EPlanetaryHeightMapBlendType::Subtract", (int64)EPlanetaryHeightMapBlendType::Subtract },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enum_MetaDataParams[] = {
		{ "Addition.DisplayName", "Additional" },
		{ "Addition.Name", "EPlanetaryHeightMapBlendType::Addition" },
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "Replace.Comment", "//Replace the default noise data with the one from the heightmap\n" },
		{ "Replace.DisplayName", "Normal" },
		{ "Replace.Name", "EPlanetaryHeightMapBlendType::Replace" },
		{ "Replace.ToolTip", "Replace the default noise data with the one from the heightmap" },
		{ "Subtract.DisplayName", "Subtract" },
		{ "Subtract.Name", "EPlanetaryHeightMapBlendType::Subtract" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		"EPlanetaryHeightMapBlendType",
		"EPlanetaryHeightMapBlendType",
		Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType()
	{
		if (!Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.InnerSingleton, Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType.InnerSingleton;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execUpdateOceanMaterial)
	{
		P_GET_STRUCT(FWSMaterialLodArray,Z_Param_pMaterialLodArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOceanMaterial(Z_Param_pMaterialLodArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execUpdateTerrainMaterial)
	{
		P_GET_STRUCT(FWSMaterialLodArray,Z_Param_pMaterialLodArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTerrainMaterial(Z_Param_pMaterialLodArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execOnFinishedRebase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedRebase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execOnBeginRebase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginRebase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetHeightNormalize)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_GET_UBOOL(Z_Param_Water);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeightNormalize(Z_Param_PawnWorldPosition,Z_Param_Water);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetHeight)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_GET_UBOOL(Z_Param_Water);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeight(Z_Param_PawnWorldPosition,Z_Param_Water);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetGroundHeightNormalize)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_GET_UBOOL(Z_Param_Water);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGroundHeightNormalize(Z_Param_PawnWorldPosition,Z_Param_Water);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetGroundHeight)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_GET_UBOOL(Z_Param_Water);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGroundHeight(Z_Param_PawnWorldPosition,Z_Param_Water);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnDistanceFromGround)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnPosition);
		P_GET_UBOOL(Z_Param_ECEFCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPawnDistanceFromGround(Z_Param_PawnPosition,Z_Param_ECEFCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnAltitude)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_GET_UBOOL(Z_Param_WaterNoiseHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPawnAltitude(Z_Param_PawnWorldPosition,Z_Param_WaterNoiseHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnBiTangent)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPawnBiTangent(Z_Param_PawnWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnTangent)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPawnTangent(Z_Param_PawnWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnSnappedNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPawnSnappedNormal(Z_Param_PawnWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPawnNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_PawnWorldPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPawnNormal(Z_Param_PawnWorldPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetGroundNoise)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_Water);
		P_GET_UBOOL(Z_Param_IgnoreWorldBorder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNoiseData*)Z_Param__Result=P_THIS->GetGroundNoise(Z_Param_Position,Z_Param_Water,Z_Param_IgnoreWorldBorder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetNoise)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_UBOOL(Z_Param_Water);
		P_GET_UBOOL(Z_Param_IgnoreWorldBorder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNoiseData*)Z_Param__Result=P_THIS->GetNoise(Z_Param_Position,Z_Param_Water,Z_Param_IgnoreWorldBorder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldScapeRoot::execGetPlanetaryDataFromPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlanetaryDataFromPosition(Z_Param_Position);
		P_NATIVE_END;
	}
	void AWorldScapeRoot::StaticRegisterNativesAWorldScapeRoot()
	{
		UClass* Class = AWorldScapeRoot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroundHeight", &AWorldScapeRoot::execGetGroundHeight },
			{ "GetGroundHeightNormalize", &AWorldScapeRoot::execGetGroundHeightNormalize },
			{ "GetGroundNoise", &AWorldScapeRoot::execGetGroundNoise },
			{ "GetHeight", &AWorldScapeRoot::execGetHeight },
			{ "GetHeightNormalize", &AWorldScapeRoot::execGetHeightNormalize },
			{ "GetNoise", &AWorldScapeRoot::execGetNoise },
			{ "GetPawnAltitude", &AWorldScapeRoot::execGetPawnAltitude },
			{ "GetPawnBiTangent", &AWorldScapeRoot::execGetPawnBiTangent },
			{ "GetPawnDistanceFromGround", &AWorldScapeRoot::execGetPawnDistanceFromGround },
			{ "GetPawnNormal", &AWorldScapeRoot::execGetPawnNormal },
			{ "GetPawnSnappedNormal", &AWorldScapeRoot::execGetPawnSnappedNormal },
			{ "GetPawnTangent", &AWorldScapeRoot::execGetPawnTangent },
			{ "GetPlanetaryDataFromPosition", &AWorldScapeRoot::execGetPlanetaryDataFromPosition },
			{ "OnBeginRebase", &AWorldScapeRoot::execOnBeginRebase },
			{ "OnFinishedRebase", &AWorldScapeRoot::execOnFinishedRebase },
			{ "UpdateOceanMaterial", &AWorldScapeRoot::execUpdateOceanMaterial },
			{ "UpdateTerrainMaterial", &AWorldScapeRoot::execUpdateTerrainMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics
	{
		struct WorldScapeRoot_eventGetGroundHeight_Parms
		{
			FVector PawnWorldPosition;
			bool Water;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundHeight_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_PawnWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetGroundHeight_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetGroundHeight_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise Height at set position\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return float\n\x09*/" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise Height at set position\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetGroundHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::WorldScapeRoot_eventGetGroundHeight_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics
	{
		struct WorldScapeRoot_eventGetGroundHeightNormalize_Parms
		{
			FVector PawnWorldPosition;
			bool Water;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundHeightNormalize_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetGroundHeightNormalize_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetGroundHeightNormalize_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundHeightNormalize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise Normalized Height at set position\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return float\n\x09*/" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise Normalized Height at set position\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetGroundHeightNormalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::WorldScapeRoot_eventGetGroundHeightNormalize_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics
	{
		struct WorldScapeRoot_eventGetGroundNoise_Parms
		{
			FVector Position;
			bool Water;
			bool IgnoreWorldBorder;
			FNoiseData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreWorldBorder_MetaData[];
#endif
		static void NewProp_IgnoreWorldBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreWorldBorder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundNoise_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetGroundNoise_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetGroundNoise_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetGroundNoise_Parms*)Obj)->IgnoreWorldBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder = { "IgnoreWorldBorder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetGroundNoise_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetGroundNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FNoiseData, METADATA_PARAMS(nullptr, 0) }; // 3564888175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_IgnoreWorldBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise from Position projected to the ground\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return Noises Data\n\x09*/" },
		{ "CPP_Default_IgnoreWorldBorder", "false" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise from Position projected to the ground\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return Noises Data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetGroundNoise", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::WorldScapeRoot_eventGetGroundNoise_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics
	{
		struct WorldScapeRoot_eventGetHeight_Parms
		{
			FVector PawnWorldPosition;
			bool Water;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetHeight_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_PawnWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetHeight_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetHeight_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise Height at set position\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return float\n\x09*/" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise Height at set position\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::WorldScapeRoot_eventGetHeight_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics
	{
		struct WorldScapeRoot_eventGetHeightNormalize_Parms
		{
			FVector PawnWorldPosition;
			bool Water;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetHeightNormalize_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_PawnWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetHeightNormalize_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetHeightNormalize_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetHeightNormalize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise Normalized Height at set position\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return float\n\x09*/" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise Normalized Height at set position\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetHeightNormalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::WorldScapeRoot_eventGetHeightNormalize_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics
	{
		struct WorldScapeRoot_eventGetNoise_Parms
		{
			FVector Position;
			bool Water;
			bool IgnoreWorldBorder;
			FNoiseData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static void NewProp_Water_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Water;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreWorldBorder_MetaData[];
#endif
		static void NewProp_IgnoreWorldBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreWorldBorder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetNoise_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetNoise_Parms*)Obj)->Water = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetNoise_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetNoise_Parms*)Obj)->IgnoreWorldBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder = { "IgnoreWorldBorder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetNoise_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetNoise_Parms, ReturnValue), Z_Construct_UScriptStruct_FNoiseData, METADATA_PARAMS(nullptr, 0) }; // 3564888175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_IgnoreWorldBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "Comment", "/**\n\x09* Get the Noise from Position\n\x09* @param Position Position to obtain the Noise From\n\x09* @param Water Is the noise sampled for water or ground\n\x09* @return Noises Data\n\x09*/" },
		{ "CPP_Default_IgnoreWorldBorder", "false" },
		{ "CPP_Default_Water", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Get the Noise from Position\n@param Position Position to obtain the Noise From\n@param Water Is the noise sampled for water or ground\n@return Noises Data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetNoise", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::WorldScapeRoot_eventGetNoise_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics
	{
		struct WorldScapeRoot_eventGetPawnAltitude_Parms
		{
			FVector PawnWorldPosition;
			bool WaterNoiseHeight;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterNoiseHeight_MetaData[];
#endif
		static void NewProp_WaterNoiseHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WaterNoiseHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnAltitude_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_PawnWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetPawnAltitude_Parms*)Obj)->WaterNoiseHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight = { "WaterNoiseHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetPawnAltitude_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnAltitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_WaterNoiseHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "CPP_Default_WaterNoiseHeight", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnAltitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::WorldScapeRoot_eventGetPawnAltitude_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics
	{
		struct WorldScapeRoot_eventGetPawnBiTangent_Parms
		{
			FVector PawnWorldPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnBiTangent_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_PawnWorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnBiTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnBiTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::WorldScapeRoot_eventGetPawnBiTangent_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics
	{
		struct WorldScapeRoot_eventGetPawnDistanceFromGround_Parms
		{
			FVector PawnPosition;
			bool ECEFCoordinate;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ECEFCoordinate_MetaData[];
#endif
		static void NewProp_ECEFCoordinate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ECEFCoordinate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_PawnPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_PawnPosition = { "PawnPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnDistanceFromGround_Parms, PawnPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_PawnPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_PawnPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate_SetBit(void* Obj)
	{
		((WorldScapeRoot_eventGetPawnDistanceFromGround_Parms*)Obj)->ECEFCoordinate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate = { "ECEFCoordinate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldScapeRoot_eventGetPawnDistanceFromGround_Parms), &Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnDistanceFromGround_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_PawnPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ECEFCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "CPP_Default_ECEFCoordinate", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnDistanceFromGround", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::WorldScapeRoot_eventGetPawnDistanceFromGround_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics
	{
		struct WorldScapeRoot_eventGetPawnNormal_Parms
		{
			FVector PawnWorldPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnNormal_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_PawnWorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::WorldScapeRoot_eventGetPawnNormal_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics
	{
		struct WorldScapeRoot_eventGetPawnSnappedNormal_Parms
		{
			FVector PawnWorldPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnSnappedNormal_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_PawnWorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnSnappedNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnSnappedNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::WorldScapeRoot_eventGetPawnSnappedNormal_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics
	{
		struct WorldScapeRoot_eventGetPawnTangent_Parms
		{
			FVector PawnWorldPosition;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PawnWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_PawnWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_PawnWorldPosition = { "PawnWorldPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnTangent_Parms, PawnWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_PawnWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_PawnWorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPawnTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_PawnWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPawnTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::WorldScapeRoot_eventGetPawnTangent_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics
	{
		struct WorldScapeRoot_eventGetPlanetaryDataFromPosition_Parms
		{
			FVector Position;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPlanetaryDataFromPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventGetPlanetaryDataFromPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "GetPlanetaryDataFromPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::WorldScapeRoot_eventGetPlanetaryDataFromPosition_Parms), Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "Comment", "//Check if a rebase is in progress to wait for it before regenerating lod and foliages \n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Check if a rebase is in progress to wait for it before regenerating lod and foliages" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "OnBeginRebase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "OnFinishedRebase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics
	{
		struct WorldScapeRoot_eventUpdateOceanMaterial_Parms
		{
			FWSMaterialLodArray pMaterialLodArray;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pMaterialLodArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pMaterialLodArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::NewProp_pMaterialLodArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::NewProp_pMaterialLodArray = { "pMaterialLodArray", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventUpdateOceanMaterial_Parms, pMaterialLodArray), Z_Construct_UScriptStruct_FWSMaterialLodArray, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::NewProp_pMaterialLodArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::NewProp_pMaterialLodArray_MetaData)) }; // 1797463136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::NewProp_pMaterialLodArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "UpdateOceanMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::WorldScapeRoot_eventUpdateOceanMaterial_Parms), Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics
	{
		struct WorldScapeRoot_eventUpdateTerrainMaterial_Parms
		{
			FWSMaterialLodArray pMaterialLodArray;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pMaterialLodArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pMaterialLodArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::NewProp_pMaterialLodArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::NewProp_pMaterialLodArray = { "pMaterialLodArray", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeRoot_eventUpdateTerrainMaterial_Parms, pMaterialLodArray), Z_Construct_UScriptStruct_FWSMaterialLodArray, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::NewProp_pMaterialLodArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::NewProp_pMaterialLodArray_MetaData)) }; // 1797463136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::NewProp_pMaterialLodArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldScapeRoot, nullptr, "UpdateTerrainMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::WorldScapeRoot_eventUpdateTerrainMaterial_Parms), Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldScapeRoot);
	UClass* Z_Construct_UClass_AWorldScapeRoot_NoRegister()
	{
		return AWorldScapeRoot::StaticClass();
	}
	struct Z_Construct_UClass_AWorldScapeRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickPerSecond;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialTerrainInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTerrainInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialTerrainInstances;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOceanInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOceanInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOceanInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateWorldScape_MetaData[];
#endif
		static void NewProp_bGenerateWorldScape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWorldScape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeGeneration_MetaData[];
#endif
		static void NewProp_bFreezeGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOcean_MetaData[];
#endif
		static void NewProp_bOcean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOcean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitFlatWorldSize_MetaData[];
#endif
		static void NewProp_bLimitFlatWorldSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitFlatWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlatWorldLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlatWorldLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OceanMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectPosition_MetaData[];
#endif
		static void NewProp_bProjectPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Foliages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foliages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Foliages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContactShadow_MetaData[];
#endif
		static void NewProp_bContactShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContactShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlayerPosition_MetaData[];
#endif
		static void NewProp_bOverridePlayerPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlayerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridedPlayerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverridedPlayerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFreezeGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFreezeGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriangleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaxLod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OceanMaxLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanLodResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OceanLodResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanTriangleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanTriangleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateTangents_MetaData[];
#endif
		static void NewProp_bGenerateTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaddedCollision_MetaData[];
#endif
		static void NewProp_bPaddedCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaddedCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollision_MetaData[];
#endif
		static void NewProp_bGenerateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionForAllPlayer_MetaData[];
#endif
		static void NewProp_bGenerateCollisionForAllPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionForAllPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionInEditor_MetaData[];
#endif
		static void NewProp_bGenerateCollisionInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticCollisionInEditor_MetaData[];
#endif
		static void NewProp_bStaticCollisionInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticCollisionInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTriangleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionTriangleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayCollision_MetaData[];
#endif
		static void NewProp_bDisplayCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayCollision;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionDependantActor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDependantActor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionDependantActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridAngleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridAngleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridAngleMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridAngleMin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageDataList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageGenerationInProgress_MetaData[];
#endif
		static void NewProp_FoliageGenerationInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FoliageGenerationInProgress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainHoleList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainHoleList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainHoleList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LattitudeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LattitudeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScapeNoise_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScapeNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanetaryHeightMap_MetaData[];
#endif
		static void NewProp_bUsePlanetaryHeightMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanetaryHeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryHeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanetaryHeightMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlanetaryHeightMapBlend_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryHeightMapBlend_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanetaryHeightMapBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryBlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryBlendAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryInvertMapBlend_MetaData[];
#endif
		static void NewProp_bPlanetaryInvertMapBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryInvertMapBlend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryHeight_MetaData[];
#endif
		static void NewProp_bPlanetaryHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMapHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMapHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightBlendAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryTemperature_MetaData[];
#endif
		static void NewProp_bPlanetaryTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMaxTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMaxTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMinTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMinTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureBlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureBlendAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryHumidity_MetaData[];
#endif
		static void NewProp_bPlanetaryHumidity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMaxHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMaxHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMinHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMinHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityBlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityBlendAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryHeightAlpha_MetaData[];
#endif
		static void NewProp_bPlanetaryHeightAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryHeightAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryOceanHeight_MetaData[];
#endif
		static void NewProp_bPlanetaryOceanHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryOceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMaxOceanHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMaxOceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetaryMinOceanHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetaryMinOceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlanetaryOceanHeightAlpha_MetaData[];
#endif
		static void NewProp_bPlanetaryOceanHeightAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlanetaryOceanHeightAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumes_MetaData[];
#endif
		static void NewProp_bEnableVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMapVolumeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapVolumeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightMapVolumeList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseVolumeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseVolumeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoiseVolumeList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageMaskList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageMaskList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageMaskList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDistanceToGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerDistanceToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureAtPlayerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureAtPlayerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityAtPlayerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityAtPlayerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageCountLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageCountLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageSectorLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageSectorLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformKeeper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformKeeper;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFoliages_MetaData[];
#endif
		static void NewProp_bGenerateFoliages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFoliages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScapeLod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScapeLod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldScapeLod;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScapeLodOcean_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScapeLodOcean_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldScapeLodOcean;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionLods_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionLods_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionLods;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WorldScapeLodInGeneration_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScapeLodInGeneration_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldScapeLodInGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WorldScapeLodInGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebaseInProgress_MetaData[];
#endif
		static void NewProp_RebaseInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RebaseInProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldScapeRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldScapeRoot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeight, "GetGroundHeight" }, // 2404307633
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetGroundHeightNormalize, "GetGroundHeightNormalize" }, // 643126233
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetGroundNoise, "GetGroundNoise" }, // 1911104058
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetHeight, "GetHeight" }, // 242686033
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetHeightNormalize, "GetHeightNormalize" }, // 3839495126
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetNoise, "GetNoise" }, // 2835847155
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnAltitude, "GetPawnAltitude" }, // 3737238143
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnBiTangent, "GetPawnBiTangent" }, // 788386746
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnDistanceFromGround, "GetPawnDistanceFromGround" }, // 3187077592
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnNormal, "GetPawnNormal" }, // 4016925394
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnSnappedNormal, "GetPawnSnappedNormal" }, // 860854553
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPawnTangent, "GetPawnTangent" }, // 3474776746
		{ &Z_Construct_UFunction_AWorldScapeRoot_GetPlanetaryDataFromPosition, "GetPlanetaryDataFromPosition" }, // 776214521
		{ &Z_Construct_UFunction_AWorldScapeRoot_OnBeginRebase, "OnBeginRebase" }, // 169102588
		{ &Z_Construct_UFunction_AWorldScapeRoot_OnFinishedRebase, "OnFinishedRebase" }, // 905824367
		{ &Z_Construct_UFunction_AWorldScapeRoot_UpdateOceanMaterial, "UpdateOceanMaterial" }, // 13872532
		{ &Z_Construct_UFunction_AWorldScapeRoot_UpdateTerrainMaterial, "UpdateTerrainMaterial" }, // 2521195844
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(LogWorldScapeCore, Log, All);\n" },
		{ "HideCategories", "Code Debug MeshInfo Rebase" },
		{ "IncludePath", "WorldScapeRoot.h" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(LogWorldScapeCore, Log, All);" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TickPerSecond_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "//Number of tick per seconds\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Number of tick per seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TickPerSecond = { "TickPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TickPerSecond), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TickPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TickPerSecond_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//WorldScape Generation Type\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "WorldScape Generation Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, GenerationType), Z_Construct_UEnum_WorldScapeCore_EWorldScapeType, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType_MetaData)) }; // 2964861009
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances_Inner = { "MaterialTerrainInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances = { "MaterialTerrainInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, MaterialTerrainInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances_Inner = { "MaterialOceanInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances = { "MaterialOceanInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, MaterialOceanInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Start or stop planet generation, when disabled, the planet is destroyed\n" },
		{ "DisplayName", "Generate" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Start or stop planet generation, when disabled, the planet is destroyed" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateWorldScape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape = { "bGenerateWorldScape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Freeze the Planet Generation without destroying the planet\n" },
		{ "DisplayName", "Freeze Generation" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Freeze the Planet Generation without destroying the planet" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bFreezeGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration = { "bFreezeGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Generate The Ocean (and river/pond if noise is set for)\n" },
		{ "DisplayName", "Generate Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Generate The Ocean (and river/pond if noise is set for)" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bOcean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean = { "bOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetScale_MetaData[] = {
		{ "Category", "Default|Scale" },
		{ "Comment", "//Radius of the planet in Cm (UE4 units)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Radius of the planet in Cm (UE4 units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetScale = { "PlanetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetScale), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize_MetaData[] = {
		{ "Category", "Default|Scale" },
		{ "Comment", "// Would like to add World Size limit in future\n//Limit flatworld size\n" },
		{ "DisplayName", "Limit FlatWorld (Experimental)" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Flat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Would like to add World Size limit in future\nLimit flatworld size" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bLimitFlatWorldSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize = { "bLimitFlatWorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FlatWorldLimit_MetaData[] = {
		{ "Category", "Default|Scale" },
		{ "Comment", "//Size of the flatworld\n" },
		{ "DisplayName", "FlatWorld Size" },
		{ "EditCondition", "bLimitFlatWorldSize == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Size of the flatworld" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FlatWorldLimit = { "FlatWorldLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FlatWorldLimit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FlatWorldLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FlatWorldLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "Default|Material" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TerrainMaterial), Z_Construct_UScriptStruct_FWSMaterialLodArray, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainMaterial_MetaData)) }; // 1797463136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaterial_MetaData[] = {
		{ "Category", "Default|Material" },
		{ "EditCondition", "bOcean == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaterial = { "OceanMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OceanMaterial), Z_Construct_UScriptStruct_FWSMaterialLodArray, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaterial_MetaData)) }; // 1797463136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Project the editor position to where the camera look\n" },
		{ "DisplayName", "Projected Position (Experimental)" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Project the editor position to where the camera look" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bProjectPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition = { "bProjectPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages_Inner = { "Foliages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeFoliagesCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Foliages List\n" },
		{ "DisplayName", "Foliages" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Foliages List" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages = { "Foliages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, Foliages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Contact Shadow for Terrain\n" },
		{ "DisplayName", "Contact Shadows" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Contact Shadow for Terrain" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bContactShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow = { "bContactShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition_MetaData[] = {
		{ "Category", "Default|Override" },
		{ "Comment", "//Override the player 0 position (for visual generation)\n" },
		{ "DisplayName", "Override Player Position" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Override the player 0 position (for visual generation)" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bOverridePlayerPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition = { "bOverridePlayerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OverridedPlayerPosition_MetaData[] = {
		{ "Category", "Default|Override" },
		{ "Comment", "//Overrided Player Position in World Position\n" },
		{ "DisplayName", "New Player Position" },
		{ "EditCondition", "bOverridePlayerPosition == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Overrided Player Position in World Position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OverridedPlayerPosition = { "OverridedPlayerPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OverridedPlayerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OverridedPlayerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OverridedPlayerPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DistanceToFreezeGeneration_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Distance from the planet at which the planet highly slowdown the update to prevent performance impact" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DistanceToFreezeGeneration = { "DistanceToFreezeGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, DistanceToFreezeGeneration), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DistanceToFreezeGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DistanceToFreezeGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaxLod_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Maximum Lod when in Runtime\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum Lod when in Runtime" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaxLod = { "MaxLod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, MaxLod), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaxLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaxLod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LodResolution_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier or 4\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Number of Polygon on X axis per on Lod 0 , Need to be a multiplier or 4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LodResolution = { "LodResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, LodResolution), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LodResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LodResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TriangleSize_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Triangle Size in Unit;\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Triangle Size in Unit;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TriangleSize = { "TriangleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TriangleSize), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TriangleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TriangleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DebugObject_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DebugObject = { "DebugObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, DebugObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DebugObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DebugObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaxLod_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Maximum Lod when in Runtime\n" },
		{ "EditCondition", "bOcean == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum Lod when in Runtime" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaxLod = { "OceanMaxLod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OceanMaxLod), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaxLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaxLod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanLodResolution_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4\n" },
		{ "EditCondition", "bOcean == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanLodResolution = { "OceanLodResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OceanLodResolution), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanLodResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanLodResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanTriangleSize_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Triangle Size in Unit;\n" },
		{ "EditCondition", "bOcean == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Triangle Size in Unit;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanTriangleSize = { "OceanTriangleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OceanTriangleSize), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanTriangleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanTriangleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Generate accurate mesh tangents, it'll give better result when using normal, but greatly slow the generation;\n" },
		{ "DisplayName", "Generate Accurate Mesh Tangents (Slow)" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Generate accurate mesh tangents, it'll give better result when using normal, but greatly slow the generation;" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents = { "bGenerateTangents", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Should Collision have an overlaping quad on each size, prevent weird issues when going from a chunk to another, slighty lower performance\n" },
		{ "DisplayName", "Pad Collisions" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Should Collision have an overlaping quad on each size, prevent weird issues when going from a chunk to another, slighty lower performance" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPaddedCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision = { "bPaddedCollision", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "RunTime Collision" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision = { "bGenerateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "All Collision For All Player" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Generate collision for all Collision dependant actor for all player when on server and not just the server/host player" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateCollisionForAllPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer = { "bGenerateCollisionForAllPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//bCollision Generation in Editor\n" },
		{ "DisplayName", "Editor Collision" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "bCollision Generation in Editor" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateCollisionInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor = { "bGenerateCollisionInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Static Editor Collision" },
		{ "EditCondition", "bGenerateCollisionInEditor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bStaticCollisionInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor = { "bStaticCollisionInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionResolution_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4\n" },
		{ "EditCondition", "bGenerateCollision == true || bGenerateCollisionInEditor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Number of Polygon on X axis per on Lod 0 , Need to be a multiplier of 4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionResolution = { "CollisionResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, CollisionResolution), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionTriangleSize_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditCondition", "bGenerateCollision == true || bGenerateCollisionInEditor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionTriangleSize = { "CollisionTriangleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, CollisionTriangleSize), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionTriangleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionTriangleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Display Collision" },
		{ "EditCondition", "bGenerateCollision == true || bGenerateCollisionInEditor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bDisplayCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision = { "bDisplayCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor_Inner = { "CollisionDependantActor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//List of Actor generating collision on WorldScape;\n" },
		{ "EditCondition", "bGenerateCollision == true || bGenerateCollisionInEditor == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "List of Actor generating collision on WorldScape;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor = { "CollisionDependantActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, CollisionDependantActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightAnchor_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//At which Altitue shall the Triangle Size increase in scale\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "At which Altitue shall the Triangle Size increase in scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightAnchor = { "HeightAnchor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, HeightAnchor), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightAnchor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMax_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Maximum value of the grid angle at high altitude used by the terrain\n" },
		{ "DisplayName", "Lod Angle Max (Experimental)" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum value of the grid angle at high altitude used by the terrain" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMax = { "GridAngleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, GridAngleMax), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMin_MetaData[] = {
		{ "Category", "Lod Parameters" },
		{ "Comment", "//Minimum value of the grid angle at low altitude used by the terrain\n" },
		{ "DisplayName", "Lod Angle min (Experimental)" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Minimum value of the grid angle at low altitude used by the terrain" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMin = { "GridAngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, GridAngleMin), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMin_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList_Inner = { "FoliageDataList", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVegetation, METADATA_PARAMS(nullptr, 0) }; // 3109104235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList = { "FoliageDataList", nullptr, (EPropertyFlags)0x0010008000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FoliageDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList_MetaData)) }; // 3109104235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->FoliageGenerationInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress = { "FoliageGenerationInProgress", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList_Inner = { "TerrainHoleList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATerrainHoleVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList_MetaData[] = {
		{ "Category", "Volumes" },
		{ "DisplayName", "Terrain Hole List (Experimental)" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList = { "TerrainHoleList", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TerrainHoleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Noise Properties\n//The Scale of the noise, Higger value = wide details\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Noise Properties\nThe Scale of the noise, Higger value = wide details" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseIntensity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Intensity of the noise in cm, Higger value = Higger montains\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Intensity of the noise in cm, Higger value = Higger montains" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseIntensity = { "NoiseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, NoiseIntensity), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Seed value\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Seed value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, Seed), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LattitudeRotation_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LattitudeRotation = { "LattitudeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, LattitudeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LattitudeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LattitudeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseOffset_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseOffset = { "NoiseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, NoiseOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanHeight_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Height of the ocean\n" },
		{ "EditCondition", "bOcean == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Height of the ocean" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanHeight = { "OceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, OceanHeight), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeNoise_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "//Custom Noise Subclass\n" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Custom Noise Subclass" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeNoise = { "WorldScapeNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, WorldScapeNoise), Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bUsePlanetaryHeightMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap = { "bUsePlanetaryHeightMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMap_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMap = { "PlanetaryHeightMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryHeightMap), Z_Construct_UClass_UHeightMapVolumeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend = { "PlanetaryHeightMapBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryHeightMapBlend), Z_Construct_UEnum_WorldScapeCore_EPlanetaryHeightMapBlendType, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend_MetaData)) }; // 2810192709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryBlendAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryBlendAlpha = { "PlanetaryBlendAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryBlendAlpha), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryBlendAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryInvertMapBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend = { "bPlanetaryInvertMapBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod = { "SamplingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, SamplingMethod), Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod_MetaData)) }; // 2039263761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight = { "bPlanetaryHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMapHeight_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Height of the heightmap (Red Channel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Height of the heightmap (Red Channel)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMapHeight = { "PlanetaryMapHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMapHeight), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMapHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryAltitude_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//8 Km\n//Base Altitude of the heightmap (Red Channel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "8 Km\nBase Altitude of the heightmap (Red Channel)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryAltitude = { "PlanetaryAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryAltitude), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryAltitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightBlendAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "// -10km\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "-10km" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightBlendAlpha = { "HeightBlendAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, HeightBlendAlpha), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightBlendAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Does it Affect Temperature ?\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Does it Affect Temperature ?" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature = { "bPlanetaryTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxTemperature_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Maximum temperature of the heightmap (Green Chanel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryTemperature == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum temperature of the heightmap (Green Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxTemperature = { "PlanetaryMaxTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMaxTemperature), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinTemperature_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Minimum temperature of the heightmap (Green Chanel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryTemperature == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Minimum temperature of the heightmap (Green Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinTemperature = { "PlanetaryMinTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMinTemperature), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureBlendAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureBlendAlpha = { "TemperatureBlendAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TemperatureBlendAlpha), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureBlendAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Does it Affect Humidity ?\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Does it Affect Humidity ?" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryHumidity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity = { "bPlanetaryHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxHumidity_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Maximum Humidity of the heightmap (Blue Chanel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHumidity == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum Humidity of the heightmap (Blue Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxHumidity = { "PlanetaryMaxHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMaxHumidity), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinHumidity_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Minimum Humidity of the heightmap (Blue Chanel)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHumidity == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Minimum Humidity of the heightmap (Blue Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinHumidity = { "PlanetaryMinHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMinHumidity), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityBlendAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityBlendAlpha = { "HumidityBlendAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, HumidityBlendAlpha), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityBlendAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Use the HeightMap Alpha ?\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true && ( bPlanetaryHeight == true || bPlanetaryHumidity == true || bPlanetaryTemperature == true )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Use the HeightMap Alpha ?" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryHeightAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha = { "bPlanetaryHeightAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Does it Affect Ocean height ?\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Does it Affect Ocean height ?" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryOceanHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight = { "bPlanetaryOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxOceanHeight_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Maximum Height of the heightmap (Red Channel Second Texture)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Maximum Height of the heightmap (Red Channel Second Texture)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxOceanHeight = { "PlanetaryMaxOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMaxOceanHeight), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxOceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxOceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinOceanHeight_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Minimum Height of the heightmap (Alpha Channel Second Texture)\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Minimum Height of the heightmap (Alpha Channel Second Texture)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinOceanHeight = { "PlanetaryMinOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlanetaryMinOceanHeight), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinOceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinOceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha_MetaData[] = {
		{ "Category", "Noise|PlanetaryHeightmap" },
		{ "Comment", "//Use the Ocean HeightMap Alpha ?\n" },
		{ "EditCondition", "GenerationType == EWorldScapeType::Planet && bPlanetaryOceanHeight == true && bUsePlanetaryHeightMap == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Use the Ocean HeightMap Alpha ?" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bPlanetaryOceanHeightAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha = { "bPlanetaryOceanHeightAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes_MetaData[] = {
		{ "Category", "Volumes" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bEnableVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes = { "bEnableVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList_Inner = { "HeightMapVolumeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AHeightMapVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList_MetaData[] = {
		{ "Category", "Volumes" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList = { "HeightMapVolumeList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, HeightMapVolumeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList_Inner = { "NoiseVolumeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANoiseVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList_MetaData[] = {
		{ "Category", "Volumes" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList = { "NoiseVolumeList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, NoiseVolumeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList_Inner = { "FoliageMaskList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AFoliageMaskVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList_MetaData[] = {
		{ "Category", "Volumes" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList = { "FoliageMaskList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FoliageMaskList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerDistanceToGround_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Player Distance to the ground (based on noise and Height map Volumes)\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Player Distance to the ground (based on noise and Height map Volumes)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerDistanceToGround = { "PlayerDistanceToGround", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlayerDistanceToGround), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerDistanceToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerDistanceToGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerAltitude_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Player Altitudes to the Ocean Level\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Player Altitudes to the Ocean Level" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerAltitude = { "PlayerAltitude", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlayerAltitude), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerAltitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureAtPlayerPosition_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Player Altitudes to the Ocean Level\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Player Altitudes to the Ocean Level" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureAtPlayerPosition = { "TemperatureAtPlayerPosition", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TemperatureAtPlayerPosition), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureAtPlayerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureAtPlayerPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityAtPlayerPosition_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Player Altitudes to the Ocean Level\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Player Altitudes to the Ocean Level" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityAtPlayerPosition = { "HumidityAtPlayerPosition", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, HumidityAtPlayerPosition), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityAtPlayerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityAtPlayerPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageCountLeft_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Foliages instance Left to generate in the current sector\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Foliages instance Left to generate in the current sector" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageCountLeft = { "FoliageCountLeft", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FoliageCountLeft), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageCountLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageCountLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageSectorLeft_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Foliages Sector Left to generate for the current foliage\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Foliages Sector Left to generate for the current foliage" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageSectorLeft = { "FoliageSectorLeft", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FoliageSectorLeft), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageSectorLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageSectorLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageLeft_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "//Foliages Left to generate\n" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Foliages Left to generate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageLeft = { "FoliageLeft", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, FoliageLeft), METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TransformKeeper_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09* Component Used so the Actor keep it's Transform... It's totaly an hack\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
		{ "ToolTip", "Component Used so the Actor keep it's Transform... It's totaly an hack" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TransformKeeper = { "TransformKeeper", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, TransformKeeper), Z_Construct_UClass_UWorldScapeLod_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TransformKeeper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TransformKeeper_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs_Inner = { "InstancedMeshs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs = { "InstancedMeshs", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, InstancedMeshs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->bGenerateFoliages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages = { "bGenerateFoliages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod_Inner = { "WorldScapeLod", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeLod_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod_MetaData[] = {
		{ "Category", "Code" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod = { "WorldScapeLod", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, WorldScapeLod), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean_Inner = { "WorldScapeLodOcean", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeLod_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean_MetaData[] = {
		{ "Category", "Code" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean = { "WorldScapeLodOcean", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, WorldScapeLodOcean), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods_Inner = { "CollisionLods", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeLod_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods_MetaData[] = {
		{ "Category", "Code" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods = { "CollisionLods", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, CollisionLods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_ValueProp = { "WorldScapeLodInGeneration", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_Key_KeyProp = { "WorldScapeLodInGeneration_Key", nullptr, (EPropertyFlags)0x0000000000080001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldScapeLod_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration = { "WorldScapeLodInGeneration", nullptr, (EPropertyFlags)0x0010008000002005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, WorldScapeLodInGeneration), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerPos_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerPos = { "PlayerPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldScapeRoot, PlayerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress_MetaData[] = {
		{ "Category", "Rebase" },
		{ "ModuleRelativePath", "Public/WorldScapeRoot.h" },
	};
#endif
	void Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress_SetBit(void* Obj)
	{
		((AWorldScapeRoot*)Obj)->RebaseInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress = { "RebaseInProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldScapeRoot), &Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldScapeRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TickPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialTerrainInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaterialOceanInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateWorldScape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bFreezeGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bLimitFlatWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FlatWorldLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bProjectPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Foliages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bContactShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bOverridePlayerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OverridedPlayerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DistanceToFreezeGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_MaxLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LodResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TriangleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_DebugObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanMaxLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanLodResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanTriangleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPaddedCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionForAllPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateCollisionInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bStaticCollisionInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionTriangleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bDisplayCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionDependantActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_GridAngleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageGenerationInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TerrainHoleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_LattitudeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_OceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bUsePlanetaryHeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryHeightMapBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryBlendAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryInvertMapBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_SamplingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightBlendAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureBlendAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityBlendAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryHeightAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMaxOceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlanetaryMinOceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bPlanetaryOceanHeightAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bEnableVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HeightMapVolumeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_NoiseVolumeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageMaskList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerDistanceToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TemperatureAtPlayerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_HumidityAtPlayerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageCountLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageSectorLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_FoliageLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_TransformKeeper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_InstancedMeshs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_bGenerateFoliages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_CollisionLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_WorldScapeLodInGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_PlayerPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldScapeRoot_Statics::NewProp_RebaseInProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldScapeRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldScapeRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldScapeRoot_Statics::ClassParams = {
		&AWorldScapeRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldScapeRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldScapeRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldScapeRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldScapeRoot()
	{
		if (!Z_Registration_Info_UClass_AWorldScapeRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldScapeRoot.OuterSingleton, Z_Construct_UClass_AWorldScapeRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldScapeRoot.OuterSingleton;
	}
	template<> WORLDSCAPECORE_API UClass* StaticClass<AWorldScapeRoot>()
	{
		return AWorldScapeRoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldScapeRoot);
	AWorldScapeRoot::~AWorldScapeRoot() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::EnumInfo[] = {
		{ EWorldScapeType_StaticEnum, TEXT("EWorldScapeType"), &Z_Registration_Info_UEnum_EWorldScapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964861009U) },
		{ EPlanetaryHeightMapBlendType_StaticEnum, TEXT("EPlanetaryHeightMapBlendType"), &Z_Registration_Info_UEnum_EPlanetaryHeightMapBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2810192709U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldScapeRoot, AWorldScapeRoot::StaticClass, TEXT("AWorldScapeRoot"), &Z_Registration_Info_UClass_AWorldScapeRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldScapeRoot), 4192639094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_1779297957(TEXT("/Script/WorldScapeCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

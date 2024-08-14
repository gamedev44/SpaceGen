// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesClusterUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesClusterUnit() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit;
class UScriptStruct* FWorldScapeFoliagesClusterUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit, Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("WorldScapeFoliagesClusterUnit"));
	}
	return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.OuterSingleton;
}
template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<FWorldScapeFoliagesClusterUnit>()
{
	return FWorldScapeFoliagesClusterUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollision_MetaData[];
#endif
		static void NewProp_bCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDecal_MetaData[];
#endif
		static void NewProp_bReceiveDecal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDecal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[];
#endif
		static void NewProp_bCastFarShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeverDistanceCull_MetaData[];
#endif
		static void NewProp_bNeverDistanceCull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverDistanceCull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelfShadowOnly_MetaData[];
#endif
		static void NewProp_bSelfShadowOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfShadowOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageCullDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageCullDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOnServer_MetaData[];
#endif
		static void NewProp_bGenerateOnServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOnServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterMin_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ClusterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ClusterMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliagesConcentration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliagesConcentration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomRotation_MetaData[];
#endif
		static void NewProp_bRandomRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignedToGround_MetaData[];
#endif
		static void NewProp_bAlignedToGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignedToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundRotationInfluenceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundRotationInfluenceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundRotationInfluenceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundRotationInfluenceMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldScapeFoliagesClusterUnit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Foliage|Mesh" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial_Inner = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "Foliage|Mesh" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, OverrideMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision_MetaData[] = {
		{ "Category", "Foliage|Mesh" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision = { "bCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bCastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bReceiveDecal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal = { "bReceiveDecal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bCastFarShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow = { "bCastFarShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bNeverDistanceCull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull = { "bNeverDistanceCull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bCastDistanceFieldIndirectShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow = { "bCastDistanceFieldIndirectShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly_MetaData[] = {
		{ "Category", "Foliage|Rendering" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bSelfShadowOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly = { "bSelfShadowOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, MinScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, MaxScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliageCullDistanceMultiplier_MetaData[] = {
		{ "Category", "Spacing" },
		{ "Comment", "// Distance multiplier at which the foliage is culled (based on the foliage sector size)\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "Distance multiplier at which the foliage is culled (based on the foliage sector size)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliageCullDistanceMultiplier = { "FoliageCullDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, FoliageCullDistanceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliageCullDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliageCullDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bGenerateOnServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer = { "bGenerateOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMin_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "//Min Number of this mesh in the cluster\n" },
		{ "EditCondition", "GrowInCluster == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "Min Number of this mesh in the cluster" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMin = { "ClusterMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, ClusterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMax_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "//Max Number of this mesh in the cluster\n" },
		{ "EditCondition", "GrowInCluster == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "Max Number of this mesh in the cluster" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMax = { "ClusterMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, ClusterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliagesConcentration_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "//FoliagesConcentration\n" },
		{ "EditCondition", "GrowInCluster == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "FoliagesConcentration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliagesConcentration = { "FoliagesConcentration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, FoliagesConcentration), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliagesConcentration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliagesConcentration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterRadius_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "// The radius of clusters in world space units\n" },
		{ "EditCondition", "GrowInCluster == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "The radius of clusters in world space units" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterRadius = { "ClusterRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, ClusterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bRandomRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "// Set to true to allign the mesh to the ground\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "Set to true to allign the mesh to the ground" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround_SetBit(void* Obj)
	{
		((FWorldScapeFoliagesClusterUnit*)Obj)->bAlignedToGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround = { "bAlignedToGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldScapeFoliagesClusterUnit), &Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMin_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//How much the mesh rotation is influenced by the ground\n" },
		{ "EditCondition", "bAllignedToGround == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "How much the mesh rotation is influenced by the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMin = { "GroundRotationInfluenceMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, GroundRotationInfluenceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMax_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//How much the mesh rotation is influenced by the ground\n" },
		{ "EditCondition", "bAllignedToGround == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesClusterUnit.h" },
		{ "ToolTip", "How much the mesh rotation is influenced by the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMax = { "GroundRotationInfluenceMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldScapeFoliagesClusterUnit, GroundRotationInfluenceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_OverrideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bReceiveDecal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastFarShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bNeverDistanceCull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bCastDistanceFieldIndirectShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bSelfShadowOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MinScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_MaxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliageCullDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bGenerateOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_FoliagesConcentration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_ClusterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bRandomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_bAlignedToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewProp_GroundRotationInfluenceMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		&NewStructOps,
		"WorldScapeFoliagesClusterUnit",
		sizeof(FWorldScapeFoliagesClusterUnit),
		alignof(FWorldScapeFoliagesClusterUnit),
		Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.InnerSingleton, Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesClusterUnit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesClusterUnit_h_Statics::ScriptStructInfo[] = {
		{ FWorldScapeFoliagesClusterUnit::StaticStruct, Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit_Statics::NewStructOps, TEXT("WorldScapeFoliagesClusterUnit"), &Z_Registration_Info_UScriptStruct_WorldScapeFoliagesClusterUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldScapeFoliagesClusterUnit), 1227289574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesClusterUnit_h_3103165419(TEXT("/Script/WorldScapeFoliages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesClusterUnit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesClusterUnit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

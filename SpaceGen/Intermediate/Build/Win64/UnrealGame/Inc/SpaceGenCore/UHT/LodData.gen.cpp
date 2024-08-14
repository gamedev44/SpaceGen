// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeCore/Public/LodData.h"
#include "WorldScapeFoliages/Public/FoliagesSector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLodData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeCore();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FQueueVegetation();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FVegetation();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFoliagesSector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueueVegetation;
class UScriptStruct* FQueueVegetation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueueVegetation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueueVegetation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueueVegetation, Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("QueueVegetation"));
	}
	return Z_Registration_Info_UScriptStruct_QueueVegetation.OuterSingleton;
}
template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<FQueueVegetation>()
{
	return FQueueVegetation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueueVegetation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageCollectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageCollectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageListIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageListIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueVegetation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueueVegetation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageIndex = { "FoliageIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQueueVegetation, FoliageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageCollectionIndex = { "FoliageCollectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQueueVegetation, FoliageCollectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageListIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageListIndex = { "FoliageListIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQueueVegetation, FoliageListIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageListIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageListIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueueVegetation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageCollectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewProp_FoliageListIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueueVegetation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		&NewStructOps,
		"QueueVegetation",
		sizeof(FQueueVegetation),
		alignof(FQueueVegetation),
		Z_Construct_UScriptStruct_FQueueVegetation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueVegetation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueVegetation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueVegetation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueueVegetation()
	{
		if (!Z_Registration_Info_UScriptStruct_QueueVegetation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueueVegetation.InnerSingleton, Z_Construct_UScriptStruct_FQueueVegetation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueueVegetation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vegetation;
class UScriptStruct* FVegetation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vegetation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vegetation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVegetation, Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("Vegetation"));
	}
	return Z_Registration_Info_UScriptStruct_Vegetation.OuterSingleton;
}
template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<FVegetation>()
{
	return FVegetation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVegetation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectorSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SectorSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageCollectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageCollectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageListIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageListIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActor_MetaData[];
#endif
		static void NewProp_IsActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCluster_MetaData[];
#endif
		static void NewProp_IsCluster_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCluster;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveFoliageSector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFoliageSector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveFoliageSector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVegetation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVegetation>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_SectorSize_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_SectorSize = { "SectorSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, SectorSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_SectorSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_SectorSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageIndex = { "FoliageIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, FoliageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageCollectionIndex = { "FoliageCollectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, FoliageCollectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageCollectionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageListIndex_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageListIndex = { "FoliageListIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, FoliageListIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageListIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageListIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor_SetBit(void* Obj)
	{
		((FVegetation*)Obj)->IsActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor = { "IsActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVegetation), &Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster_SetBit(void* Obj)
	{
		((FVegetation*)Obj)->IsCluster = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster = { "IsCluster", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVegetation), &Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector_Inner = { "ActiveFoliageSector", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFoliagesSector, METADATA_PARAMS(nullptr, 0) }; // 2068955220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LodData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector = { "ActiveFoliageSector", nullptr, (EPropertyFlags)0x0010008000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVegetation, ActiveFoliageSector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector_MetaData)) }; // 2068955220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVegetation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_MaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_SectorSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageCollectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_FoliageListIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_IsCluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVegetation_Statics::NewProp_ActiveFoliageSector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVegetation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		&NewStructOps,
		"Vegetation",
		sizeof(FVegetation),
		alignof(FVegetation),
		Z_Construct_UScriptStruct_FVegetation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVegetation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVegetation()
	{
		if (!Z_Registration_Info_UScriptStruct_Vegetation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vegetation.InnerSingleton, Z_Construct_UScriptStruct_FVegetation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Vegetation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_LodData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_LodData_h_Statics::ScriptStructInfo[] = {
		{ FQueueVegetation::StaticStruct, Z_Construct_UScriptStruct_FQueueVegetation_Statics::NewStructOps, TEXT("QueueVegetation"), &Z_Registration_Info_UScriptStruct_QueueVegetation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueueVegetation), 1843616286U) },
		{ FVegetation::StaticStruct, Z_Construct_UScriptStruct_FVegetation_Statics::NewStructOps, TEXT("Vegetation"), &Z_Registration_Info_UScriptStruct_Vegetation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVegetation), 3109104235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_LodData_h_2504814402(TEXT("/Script/WorldScapeCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_LodData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_LodData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

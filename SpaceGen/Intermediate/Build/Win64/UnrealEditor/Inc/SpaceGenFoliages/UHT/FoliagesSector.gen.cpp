// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliagesSector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliagesSector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFoliagesSector();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FVegetationTransformArray();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VegetationTransformArray;
class UScriptStruct* FVegetationTransformArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VegetationTransformArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VegetationTransformArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVegetationTransformArray, (UObject*)Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("VegetationTransformArray"));
	}
	return Z_Registration_Info_UScriptStruct_VegetationTransformArray.OuterSingleton;
}
template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<FVegetationTransformArray>()
{
	return FVegetationTransformArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVegetationTransformArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FoliagesSector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVegetationTransformArray>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		&NewStructOps,
		"VegetationTransformArray",
		nullptr,
		0,
		sizeof(FVegetationTransformArray),
		alignof(FVegetationTransformArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVegetationTransformArray()
	{
		if (!Z_Registration_Info_UScriptStruct_VegetationTransformArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VegetationTransformArray.InnerSingleton, Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VegetationTransformArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliagesSector;
class UScriptStruct* FFoliagesSector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliagesSector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliagesSector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliagesSector, (UObject*)Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("FoliagesSector"));
	}
	return Z_Registration_Info_UScriptStruct_FoliagesSector.OuterSingleton;
}
template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<FFoliagesSector>()
{
	return FFoliagesSector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFoliagesSector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HimcMesh_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HimcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HimcMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsSpawned_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsSpawned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliagesSector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FoliagesSector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliagesSector>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh_Inner = { "HimcMesh", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FoliagesSector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh = { "HimcMesh", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliagesSector, HimcMesh), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh_MetaData), Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned_Inner = { "ActorsSpawned", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/FoliagesSector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned = { "ActorsSpawned", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliagesSector, ActorsSpawned), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned_MetaData), Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliagesSector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_HimcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewProp_ActorsSpawned,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliagesSector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		&NewStructOps,
		"FoliagesSector",
		Z_Construct_UScriptStruct_FFoliagesSector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliagesSector_Statics::PropPointers),
		sizeof(FFoliagesSector),
		alignof(FFoliagesSector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliagesSector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFoliagesSector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliagesSector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFoliagesSector()
	{
		if (!Z_Registration_Info_UScriptStruct_FoliagesSector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliagesSector.InnerSingleton, Z_Construct_UScriptStruct_FFoliagesSector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FoliagesSector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_FoliagesSector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_FoliagesSector_h_Statics::ScriptStructInfo[] = {
		{ FVegetationTransformArray::StaticStruct, Z_Construct_UScriptStruct_FVegetationTransformArray_Statics::NewStructOps, TEXT("VegetationTransformArray"), &Z_Registration_Info_UScriptStruct_VegetationTransformArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVegetationTransformArray), 3600313173U) },
		{ FFoliagesSector::StaticStruct, Z_Construct_UScriptStruct_FFoliagesSector_Statics::NewStructOps, TEXT("FoliagesSector"), &Z_Registration_Info_UScriptStruct_FoliagesSector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliagesSector), 1931508189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_FoliagesSector_h_2502388790(TEXT("/Script/WorldScapeFoliages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_FoliagesSector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_FoliagesSector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

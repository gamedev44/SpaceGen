// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliagesCluster.h"
#include "WorldScapeFoliagesClusterUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesCluster() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCluster();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCluster_NoRegister();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit();
// End Cross Module References
	void UWorldScapeFoliagesCluster::StaticRegisterNativesUWorldScapeFoliagesCluster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesCluster);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCluster_NoRegister()
	{
		return UWorldScapeFoliagesCluster::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliagesClusterUnitList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliagesClusterUnitList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliagesClusterUnitList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintAffectFoliages_MetaData[];
#endif
		static void NewProp_ConstraintAffectFoliages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstraintAffectFoliages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeFoliagesInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "WorldScapeFoliage" },
		{ "ClassGroupNames", "WorldScape" },
		{ "IncludePath", "WorldScapeFoliagesCluster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCluster.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList_Inner = { "FoliagesClusterUnitList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldScapeFoliagesClusterUnit, METADATA_PARAMS(0, nullptr) }; // 3509887618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList_MetaData[] = {
		{ "Category", "Foliage|Cluster" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCluster.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList = { "FoliagesClusterUnitList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesCluster, FoliagesClusterUnitList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList_MetaData), Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList_MetaData) }; // 3509887618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//How much the mesh rotation is influenced by the ground\n" },
		{ "EditCondition", "bAllignedToGround == true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCluster.h" },
		{ "ToolTip", "How much the mesh rotation is influenced by the ground" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesCluster*)Obj)->ConstraintAffectFoliages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages = { "ConstraintAffectFoliages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldScapeFoliagesCluster), &Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages_MetaData), Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_FoliagesClusterUnitList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::NewProp_ConstraintAffectFoliages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesCluster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::ClassParams = {
		&UWorldScapeFoliagesCluster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCluster()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesCluster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesCluster.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesCluster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesCluster.OuterSingleton;
	}
	template<> WORLDSCAPEFOLIAGES_API UClass* StaticClass<UWorldScapeFoliagesCluster>()
	{
		return UWorldScapeFoliagesCluster::StaticClass();
	}
	UWorldScapeFoliagesCluster::UWorldScapeFoliagesCluster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesCluster);
	UWorldScapeFoliagesCluster::~UWorldScapeFoliagesCluster() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCluster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCluster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesCluster, UWorldScapeFoliagesCluster::StaticClass, TEXT("UWorldScapeFoliagesCluster"), &Z_Registration_Info_UClass_UWorldScapeFoliagesCluster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesCluster), 2565135910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCluster_h_3650858360(TEXT("/Script/WorldScapeFoliages"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCluster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCluster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

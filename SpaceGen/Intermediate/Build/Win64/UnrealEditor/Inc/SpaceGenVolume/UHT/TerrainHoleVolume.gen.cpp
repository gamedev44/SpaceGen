// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainHoleVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainHoleVolume() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ATerrainHoleVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_ATerrainHoleVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface();
// End Cross Module References
	void ATerrainHoleVolume::StaticRegisterNativesATerrainHoleVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATerrainHoleVolume);
	UClass* Z_Construct_UClass_ATerrainHoleVolume_NoRegister()
	{
		return ATerrainHoleVolume::StaticClass();
	}
	struct Z_Construct_UClass_ATerrainHoleVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrainHoleVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolumeInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainHoleVolume_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainHoleVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "TerrainHoleVolume.h" },
		{ "ModuleRelativePath", "Public/TerrainHoleVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrainHoleVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainHoleVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainHoleVolume_Statics::ClassParams = {
		&ATerrainHoleVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainHoleVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainHoleVolume_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATerrainHoleVolume()
	{
		if (!Z_Registration_Info_UClass_ATerrainHoleVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainHoleVolume.OuterSingleton, Z_Construct_UClass_ATerrainHoleVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATerrainHoleVolume.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<ATerrainHoleVolume>()
	{
		return ATerrainHoleVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainHoleVolume);
	ATerrainHoleVolume::~ATerrainHoleVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainHoleVolume, ATerrainHoleVolume::StaticClass, TEXT("ATerrainHoleVolume"), &Z_Registration_Info_UClass_ATerrainHoleVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainHoleVolume), 1865824149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolume_h_3192112915(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

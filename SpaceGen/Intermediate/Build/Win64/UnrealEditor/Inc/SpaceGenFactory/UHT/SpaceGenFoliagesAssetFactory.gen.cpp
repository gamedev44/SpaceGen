// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliagesAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeFoliagesAssetFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_NoRegister();
// End Cross Module References
	void UWorldScapeFoliagesAssetFactory::StaticRegisterNativesUWorldScapeFoliagesAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesAssetFactory);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_NoRegister()
	{
		return UWorldScapeFoliagesAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFactory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldScapeFoliagesAssetFactory.h" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::ClassParams = {
		&UWorldScapeFoliagesAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWorldScapeFoliagesAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesAssetFactory.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesAssetFactory.OuterSingleton;
	}
	template<> WORLDSCAPEFACTORY_API UClass* StaticClass<UWorldScapeFoliagesAssetFactory>()
	{
		return UWorldScapeFoliagesAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesAssetFactory);
	UWorldScapeFoliagesAssetFactory::~UWorldScapeFoliagesAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesAssetFactory, UWorldScapeFoliagesAssetFactory::StaticClass, TEXT("UWorldScapeFoliagesAssetFactory"), &Z_Registration_Info_UClass_UWorldScapeFoliagesAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesAssetFactory), 3806581350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesAssetFactory_h_3210910260(TEXT("/Script/WorldScapeFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

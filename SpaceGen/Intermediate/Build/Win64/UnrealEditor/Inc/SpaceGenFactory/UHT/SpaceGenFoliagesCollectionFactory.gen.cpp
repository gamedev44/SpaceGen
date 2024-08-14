// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliagesCollectionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesCollectionFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_NoRegister();
// End Cross Module References
	void UWorldScapeFoliagesCollectionFactory::StaticRegisterNativesUWorldScapeFoliagesCollectionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesCollectionFactory);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_NoRegister()
	{
		return UWorldScapeFoliagesCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFactory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldScapeFoliagesCollectionFactory.h" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesCollectionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::ClassParams = {
		&UWorldScapeFoliagesCollectionFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesCollectionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesCollectionFactory.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesCollectionFactory.OuterSingleton;
	}
	template<> WORLDSCAPEFACTORY_API UClass* StaticClass<UWorldScapeFoliagesCollectionFactory>()
	{
		return UWorldScapeFoliagesCollectionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesCollectionFactory);
	UWorldScapeFoliagesCollectionFactory::~UWorldScapeFoliagesCollectionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesCollectionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesCollectionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesCollectionFactory, UWorldScapeFoliagesCollectionFactory::StaticClass, TEXT("UWorldScapeFoliagesCollectionFactory"), &Z_Registration_Info_UClass_UWorldScapeFoliagesCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesCollectionFactory), 1589736429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesCollectionFactory_h_2659620170(TEXT("/Script/WorldScapeFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesCollectionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeFoliagesCollectionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

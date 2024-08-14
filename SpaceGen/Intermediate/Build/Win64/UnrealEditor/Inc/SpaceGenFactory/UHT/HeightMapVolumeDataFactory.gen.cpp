// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeightMapVolumeDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapVolumeDataFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UHeightMapVolumeDataFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UHeightMapVolumeDataFactory_NoRegister();
// End Cross Module References
	void UHeightMapVolumeDataFactory::StaticRegisterNativesUHeightMapVolumeDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapVolumeDataFactory);
	UClass* Z_Construct_UClass_UHeightMapVolumeDataFactory_NoRegister()
	{
		return UHeightMapVolumeDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFactory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeightMapVolumeDataFactory.h" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapVolumeDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::ClassParams = {
		&UHeightMapVolumeDataFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHeightMapVolumeDataFactory()
	{
		if (!Z_Registration_Info_UClass_UHeightMapVolumeDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapVolumeDataFactory.OuterSingleton, Z_Construct_UClass_UHeightMapVolumeDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapVolumeDataFactory.OuterSingleton;
	}
	template<> WORLDSCAPEFACTORY_API UClass* StaticClass<UHeightMapVolumeDataFactory>()
	{
		return UHeightMapVolumeDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapVolumeDataFactory);
	UHeightMapVolumeDataFactory::~UHeightMapVolumeDataFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_HeightMapVolumeDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_HeightMapVolumeDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapVolumeDataFactory, UHeightMapVolumeDataFactory::StaticClass, TEXT("UHeightMapVolumeDataFactory"), &Z_Registration_Info_UClass_UHeightMapVolumeDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapVolumeDataFactory), 666309867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_HeightMapVolumeDataFactory_h_3767529977(TEXT("/Script/WorldScapeFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_HeightMapVolumeDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_HeightMapVolumeDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

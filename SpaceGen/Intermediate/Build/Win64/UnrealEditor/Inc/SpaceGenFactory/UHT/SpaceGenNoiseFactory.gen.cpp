// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoiseFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeNoiseFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeNoiseFactory();
	WORLDSCAPEFACTORY_API UClass* Z_Construct_UClass_UWorldScapeNoiseFactory_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister();
// End Cross Module References
	void UWorldScapeNoiseFactory::StaticRegisterNativesUWorldScapeNoiseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeNoiseFactory);
	UClass* Z_Construct_UClass_UWorldScapeNoiseFactory_NoRegister()
	{
		return UWorldScapeNoiseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeNoiseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NoiseClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFactory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldScapeNoiseFactory.h" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::NewProp_NoiseClass_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::NewProp_NoiseClass = { "NoiseClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeNoiseFactory, NoiseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::NewProp_NoiseClass_MetaData), Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::NewProp_NoiseClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::NewProp_NoiseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeNoiseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::ClassParams = {
		&UWorldScapeNoiseFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldScapeNoiseFactory()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeNoiseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeNoiseFactory.OuterSingleton, Z_Construct_UClass_UWorldScapeNoiseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeNoiseFactory.OuterSingleton;
	}
	template<> WORLDSCAPEFACTORY_API UClass* StaticClass<UWorldScapeNoiseFactory>()
	{
		return UWorldScapeNoiseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeNoiseFactory);
	UWorldScapeNoiseFactory::~UWorldScapeNoiseFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeNoiseFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeNoiseFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeNoiseFactory, UWorldScapeNoiseFactory::StaticClass, TEXT("UWorldScapeNoiseFactory"), &Z_Registration_Info_UClass_UWorldScapeNoiseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeNoiseFactory), 1051429738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeNoiseFactory_h_2232048463(TEXT("/Script/WorldScapeFactory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeNoiseFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFactory_Public_WorldScapeNoiseFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

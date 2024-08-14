// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YourOwnNoiseExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYourOwnNoiseExample() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UYourNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UYourNoiseParameter_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UYourOwnNoiseExample();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UYourOwnNoiseExample_NoRegister();
// End Cross Module References
	void UYourNoiseParameter::StaticRegisterNativesUYourNoiseParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYourNoiseParameter);
	UClass* Z_Construct_UClass_UYourNoiseParameter_NoRegister()
	{
		return UYourNoiseParameter::StaticClass();
	}
	struct Z_Construct_UClass_UYourNoiseParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExampleParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExampleParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYourNoiseParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYourNoiseParameter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYourNoiseParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "YourOwnNoiseExample.h" },
		{ "ModuleRelativePath", "Public/YourOwnNoiseExample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYourNoiseParameter_Statics::NewProp_ExampleParameter_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/YourOwnNoiseExample.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYourNoiseParameter_Statics::NewProp_ExampleParameter = { "ExampleParameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYourNoiseParameter, ExampleParameter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYourNoiseParameter_Statics::NewProp_ExampleParameter_MetaData), Z_Construct_UClass_UYourNoiseParameter_Statics::NewProp_ExampleParameter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYourNoiseParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYourNoiseParameter_Statics::NewProp_ExampleParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYourNoiseParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYourNoiseParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYourNoiseParameter_Statics::ClassParams = {
		&UYourNoiseParameter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYourNoiseParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYourNoiseParameter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYourNoiseParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UYourNoiseParameter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYourNoiseParameter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UYourNoiseParameter()
	{
		if (!Z_Registration_Info_UClass_UYourNoiseParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYourNoiseParameter.OuterSingleton, Z_Construct_UClass_UYourNoiseParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYourNoiseParameter.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UYourNoiseParameter>()
	{
		return UYourNoiseParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYourNoiseParameter);
	UYourNoiseParameter::~UYourNoiseParameter() {}
	void UYourOwnNoiseExample::StaticRegisterNativesUYourOwnNoiseExample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYourOwnNoiseExample);
	UClass* Z_Construct_UClass_UYourOwnNoiseExample_NoRegister()
	{
		return UYourOwnNoiseExample::StaticClass();
	}
	struct Z_Construct_UClass_UYourOwnNoiseExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYourOwnNoiseExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYourOwnNoiseExample_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYourOwnNoiseExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "YourOwnNoiseExample.h" },
		{ "ModuleRelativePath", "Public/YourOwnNoiseExample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYourOwnNoiseExample_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/YourOwnNoiseExample.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYourOwnNoiseExample_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYourOwnNoiseExample, NoiseParameters), Z_Construct_UClass_UYourNoiseParameter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYourOwnNoiseExample_Statics::NewProp_NoiseParameters_MetaData), Z_Construct_UClass_UYourOwnNoiseExample_Statics::NewProp_NoiseParameters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYourOwnNoiseExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYourOwnNoiseExample_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYourOwnNoiseExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYourOwnNoiseExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYourOwnNoiseExample_Statics::ClassParams = {
		&UYourOwnNoiseExample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYourOwnNoiseExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYourOwnNoiseExample_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYourOwnNoiseExample_Statics::Class_MetaDataParams), Z_Construct_UClass_UYourOwnNoiseExample_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYourOwnNoiseExample_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UYourOwnNoiseExample()
	{
		if (!Z_Registration_Info_UClass_UYourOwnNoiseExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYourOwnNoiseExample.OuterSingleton, Z_Construct_UClass_UYourOwnNoiseExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYourOwnNoiseExample.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UYourOwnNoiseExample>()
	{
		return UYourOwnNoiseExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYourOwnNoiseExample);
	UYourOwnNoiseExample::~UYourOwnNoiseExample() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_YourOwnNoiseExample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_YourOwnNoiseExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYourNoiseParameter, UYourNoiseParameter::StaticClass, TEXT("UYourNoiseParameter"), &Z_Registration_Info_UClass_UYourNoiseParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYourNoiseParameter), 3930656501U) },
		{ Z_Construct_UClass_UYourOwnNoiseExample, UYourOwnNoiseExample::StaticClass, TEXT("UYourOwnNoiseExample"), &Z_Registration_Info_UClass_UYourOwnNoiseExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYourOwnNoiseExample), 1103799657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_YourOwnNoiseExample_h_3106878974(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_YourOwnNoiseExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_YourOwnNoiseExample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

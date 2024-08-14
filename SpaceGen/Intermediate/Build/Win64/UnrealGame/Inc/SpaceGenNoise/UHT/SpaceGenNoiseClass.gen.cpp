// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeNoise/Public/WorldScapeNoiseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeNoiseClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCustomNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UCustomNoiseParameter_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UNoiseParameter_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeCustomNoise();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeCustomNoise_NoRegister();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass();
	WORLDSCAPENOISE_API UClass* Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister();
	WORLDSCAPENOISE_API UEnum* Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType();
// End Cross Module References
	void UNoiseParameter::StaticRegisterNativesUNoiseParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoiseParameter);
	UClass* Z_Construct_UClass_UNoiseParameter_NoRegister()
	{
		return UNoiseParameter::StaticClass();
	}
	struct Z_Construct_UClass_UNoiseParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoiseParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoiseParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Defaults Classes\n" },
		{ "HideCategories", "Code" },
		{ "IncludePath", "WorldScapeNoiseClass.h" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "ToolTip", "Defaults Classes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoiseParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoiseParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoiseParameter_Statics::ClassParams = {
		&UNoiseParameter::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoiseParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoiseParameter()
	{
		if (!Z_Registration_Info_UClass_UNoiseParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoiseParameter.OuterSingleton, Z_Construct_UClass_UNoiseParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNoiseParameter.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UNoiseParameter>()
	{
		return UNoiseParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoiseParameter);
	UNoiseParameter::~UNoiseParameter() {}
	void UWorldScapeNoiseClass::StaticRegisterNativesUWorldScapeNoiseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeNoiseClass);
	UClass* Z_Construct_UClass_UWorldScapeNoiseClass_NoRegister()
	{
		return UWorldScapeNoiseClass::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeNoiseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedPlanetRefresh_MetaData[];
#endif
		static void NewProp_bNeedPlanetRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedPlanetRefresh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeNoiseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeNoiseClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldScapeNoiseClass.h" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh_SetBit(void* Obj)
	{
		((UWorldScapeNoiseClass*)Obj)->bNeedPlanetRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh = { "bNeedPlanetRefresh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeNoiseClass), &Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeNoiseClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeNoiseClass_Statics::NewProp_bNeedPlanetRefresh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeNoiseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeNoiseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeNoiseClass_Statics::ClassParams = {
		&UWorldScapeNoiseClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeNoiseClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldScapeNoiseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeNoiseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldScapeNoiseClass()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeNoiseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeNoiseClass.OuterSingleton, Z_Construct_UClass_UWorldScapeNoiseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeNoiseClass.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UWorldScapeNoiseClass>()
	{
		return UWorldScapeNoiseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeNoiseClass);
	UWorldScapeNoiseClass::~UWorldScapeNoiseClass() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldGenerationType;
	static UEnum* EWorldGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType, Z_Construct_UPackage__Script_WorldScapeNoise(), TEXT("EWorldGenerationType"));
		}
		return Z_Registration_Info_UEnum_EWorldGenerationType.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UEnum* StaticEnum<EWorldGenerationType>()
	{
		return EWorldGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enumerators[] = {
		{ "EWorldGenerationType::Earth", (int64)EWorldGenerationType::Earth },
		{ "EWorldGenerationType::Moon", (int64)EWorldGenerationType::Moon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Earth.DisplayName", "Earth" },
		{ "Earth.Name", "EWorldGenerationType::Earth" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "Moon.DisplayName", "Moon" },
		{ "Moon.Name", "EWorldGenerationType::Moon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeNoise,
		nullptr,
		"EWorldGenerationType",
		"EWorldGenerationType",
		Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType()
	{
		if (!Z_Registration_Info_UEnum_EWorldGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldGenerationType.InnerSingleton, Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldGenerationType.InnerSingleton;
	}
	void UCustomNoiseParameter::StaticRegisterNativesUCustomNoiseParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomNoiseParameter);
	UClass* Z_Construct_UClass_UCustomNoiseParameter_NoRegister()
	{
		return UCustomNoiseParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCustomNoiseParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureHeightReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureHeightReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureHeightReductionPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureHeightReductionPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumidityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HumidityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warp2Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warp2Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePlanetaryHeightmap_MetaData[];
#endif
		static void NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePlanetaryHeightmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMaskOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMaskOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachMaskWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachMaskWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeachScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeachScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorBaseHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorBaseHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OceanFloorOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OceanFloorWeightOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanFloorWeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OceanFloorWeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainHeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainHeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MountainOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainWeightPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainWeightPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountainTemperatureReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainTemperatureReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HillOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HillPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HillPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterPersistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterPersistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterHeightMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterHeightMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterRimHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimOctaveLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterRimOctaveLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterRimPower_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterRimPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarpFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CraterWarpFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraterWarpOctave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CraterWarpOctave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomNoiseParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoiseParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "WorldScapeNoiseClass.h" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, WorldType), Z_Construct_UEnum_WorldScapeNoise_EWorldGenerationType, METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType_MetaData)) }; // 150275434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "//You can add any parameters you need for your planet\n" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "ToolTip", "You can add any parameters you need for your planet" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureOffset = { "TemperatureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, TemperatureOffset), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReduction_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "//How much height actualy reduce temperature\n" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "ToolTip", "How much height actualy reduce temperature" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReduction = { "TemperatureHeightReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, TemperatureHeightReduction), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReduction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReductionPower_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "//the heightpower used to reduce temperature\n" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "ToolTip", "the heightpower used to reduce temperature" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReductionPower = { "TemperatureHeightReductionPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, TemperatureHeightReductionPower), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReductionPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReductionPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityOffset = { "HumidityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HumidityOffset), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityScale = { "HumidityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HumidityScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpIntensity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpIntensity = { "WarpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, WarpIntensity), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpScale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpScale = { "WarpScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, WarpScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_Warp2Scale_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_Warp2Scale = { "Warp2Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, Warp2Scale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_Warp2Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_Warp2Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	void Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit(void* Obj)
	{
		((UCustomNoiseParameter*)Obj)->bIgnorePlanetaryHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap = { "bIgnorePlanetaryHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomNoiseParameter), &Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMask_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMask = { "BeachMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, BeachMask), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskOffset_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskOffset = { "BeachMaskOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, BeachMaskOffset), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskWeight_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskWeight = { "BeachMaskWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, BeachMaskWeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachHeight_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachHeight = { "BeachHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, BeachHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachScale_MetaData[] = {
		{ "Category", "General|Beach" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachScale = { "BeachScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, BeachScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorHeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorHeight = { "OceanFloorHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorBaseHeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorBaseHeight = { "OceanFloorBaseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorBaseHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorBaseHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorBaseHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorScale_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorScale = { "OceanFloorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorOctave_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorOctave = { "OceanFloorOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorLacunarity_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorLacunarity = { "OceanFloorLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorLacunarity), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorPersistence_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorPersistence = { "OceanFloorPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorPersistence), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeight_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeight = { "OceanFloorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorWeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightOctave_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightOctave = { "OceanFloorWeightOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorWeightOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightScale_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightScale = { "OceanFloorWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorWeightScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightPower_MetaData[] = {
		{ "Category", "General|Ocean" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightPower = { "OceanFloorWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, OceanFloorWeightPower), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeight = { "MountainHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeightPower = { "MountainHeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainHeightPower), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainScale = { "MountainScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainOctave_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainOctave = { "MountainOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainLacunarity_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainLacunarity = { "MountainLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainLacunarity), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainPersistence_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainPersistence = { "MountainPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainPersistence), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeight_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeight = { "MountainWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainWeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightScale_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightScale = { "MountainWeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainWeightScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightPower_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightPower = { "MountainWeightPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainWeightPower), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainTemperatureReduction_MetaData[] = {
		{ "Category", "General|Mountain" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainTemperatureReduction = { "MountainTemperatureReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, MountainTemperatureReduction), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainTemperatureReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainTemperatureReduction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillHeight_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillHeight = { "HillHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HillHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillScale_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillScale = { "HillScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HillScale), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillOctave_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillOctave = { "HillOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HillOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillLacunarity_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillLacunarity = { "HillLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HillLacunarity), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillPersistence_MetaData[] = {
		{ "Category", "General|Hill" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillPersistence = { "HillPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, HillPersistence), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterFrequency_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterFrequency = { "CraterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterFrequency), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterOctave_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterOctave = { "CraterOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterLacunarity_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterLacunarity = { "CraterLacunarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterLacunarity), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterPersistence_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterPersistence = { "CraterPersistence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterPersistence), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterPersistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterPersistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterHeightMultiplier_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterHeightMultiplier = { "CraterHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterHeightMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterHeightMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterHeightMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterSize_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterSize = { "CraterSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterSize), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimHeight_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimHeight = { "CraterRimHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterRimHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimOctaveLimit_MetaData[] = {
		{ "Category", "Moon" },
		{ "Comment", "//Number of crater Octave that possess crater rim\n" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
		{ "ToolTip", "Number of crater Octave that possess crater rim" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimOctaveLimit = { "CraterRimOctaveLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterRimOctaveLimit), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimOctaveLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimOctaveLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimPower_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimPower = { "CraterRimPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterRimPower), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarp_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarp = { "CraterWarp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterWarp), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpFrequency_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpFrequency = { "CraterWarpFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterWarpFrequency), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpOctave_MetaData[] = {
		{ "Category", "Moon" },
		{ "EditCondition", "WorldType = EWorldGenerationType::Moon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpOctave = { "CraterWarpOctave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomNoiseParameter, CraterWarpOctave), METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpOctave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomNoiseParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WorldType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_TemperatureHeightReductionPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HumidityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_WarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_Warp2Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_bIgnorePlanetaryHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachMaskWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_BeachScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorBaseHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_OceanFloorWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainHeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainWeightPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_MountainTemperatureReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_HillPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterPersistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterHeightMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimOctaveLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterRimPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomNoiseParameter_Statics::NewProp_CraterWarpOctave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomNoiseParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomNoiseParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomNoiseParameter_Statics::ClassParams = {
		&UCustomNoiseParameter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomNoiseParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomNoiseParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomNoiseParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomNoiseParameter()
	{
		if (!Z_Registration_Info_UClass_UCustomNoiseParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomNoiseParameter.OuterSingleton, Z_Construct_UClass_UCustomNoiseParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomNoiseParameter.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UCustomNoiseParameter>()
	{
		return UCustomNoiseParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomNoiseParameter);
	UCustomNoiseParameter::~UCustomNoiseParameter() {}
	void UWorldScapeCustomNoise::StaticRegisterNativesUWorldScapeCustomNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeCustomNoise);
	UClass* Z_Construct_UClass_UWorldScapeCustomNoise_NoRegister()
	{
		return UWorldScapeCustomNoise::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeCustomNoise_Statics
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
	UObject* (*const Z_Construct_UClass_UWorldScapeCustomNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeNoiseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeCustomNoise_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldScapeNoiseClass.h" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeCustomNoise_Statics::NewProp_NoiseParameters_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeNoiseClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldScapeCustomNoise_Statics::NewProp_NoiseParameters = { "NoiseParameters", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeCustomNoise, NoiseParameters), Z_Construct_UClass_UCustomNoiseParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeCustomNoise_Statics::NewProp_NoiseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeCustomNoise_Statics::NewProp_NoiseParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeCustomNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeCustomNoise_Statics::NewProp_NoiseParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeCustomNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeCustomNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeCustomNoise_Statics::ClassParams = {
		&UWorldScapeCustomNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeCustomNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeCustomNoise_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldScapeCustomNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeCustomNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldScapeCustomNoise()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeCustomNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeCustomNoise.OuterSingleton, Z_Construct_UClass_UWorldScapeCustomNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeCustomNoise.OuterSingleton;
	}
	template<> WORLDSCAPENOISE_API UClass* StaticClass<UWorldScapeCustomNoise>()
	{
		return UWorldScapeCustomNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeCustomNoise);
	UWorldScapeCustomNoise::~UWorldScapeCustomNoise() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::EnumInfo[] = {
		{ EWorldGenerationType_StaticEnum, TEXT("EWorldGenerationType"), &Z_Registration_Info_UEnum_EWorldGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 150275434U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNoiseParameter, UNoiseParameter::StaticClass, TEXT("UNoiseParameter"), &Z_Registration_Info_UClass_UNoiseParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoiseParameter), 2472477599U) },
		{ Z_Construct_UClass_UWorldScapeNoiseClass, UWorldScapeNoiseClass::StaticClass, TEXT("UWorldScapeNoiseClass"), &Z_Registration_Info_UClass_UWorldScapeNoiseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeNoiseClass), 2292209190U) },
		{ Z_Construct_UClass_UCustomNoiseParameter, UCustomNoiseParameter::StaticClass, TEXT("UCustomNoiseParameter"), &Z_Registration_Info_UClass_UCustomNoiseParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomNoiseParameter), 1808944293U) },
		{ Z_Construct_UClass_UWorldScapeCustomNoise, UWorldScapeCustomNoise::StaticClass, TEXT("UWorldScapeCustomNoise"), &Z_Registration_Info_UClass_UWorldScapeCustomNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeCustomNoise), 3360065588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_4082138011(TEXT("/Script/WorldScapeNoise"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeNoise_Public_WorldScapeNoiseClass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

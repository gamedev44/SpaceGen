// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoiseData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeNoise();
	WORLDSCAPENOISE_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseData;
class UScriptStruct* FNoiseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseData, (UObject*)Z_Construct_UPackage__Script_WorldScapeNoise(), TEXT("NoiseData"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseData.OuterSingleton;
}
template<> WORLDSCAPENOISE_API UScriptStruct* StaticStruct<FNoiseData>()
{
	return FNoiseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightNormalize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightNormalize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Humidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageMask_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hole_MetaData[];
#endif
		static void NewProp_Hole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hole;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_HeightNormalize_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_HeightNormalize = { "HeightNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, HeightNormalize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_HeightNormalize_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_HeightNormalize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Temperature_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Temperature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, Humidity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Humidity_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Humidity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_WaterMask_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_WaterMask = { "WaterMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, WaterMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_WaterMask_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_WaterMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_FoliageMask_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_FoliageMask = { "FoliageMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNoiseData, FoliageMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_FoliageMask_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_FoliageMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole_MetaData[] = {
		{ "Category", "NoiseData" },
		{ "ModuleRelativePath", "Public/NoiseData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole_SetBit(void* Obj)
	{
		((FNoiseData*)Obj)->Hole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole = { "Hole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNoiseData), &Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole_MetaData), Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_HeightNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_WaterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_FoliageMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseData_Statics::NewProp_Hole,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeNoise,
		nullptr,
		&NewStructOps,
		"NoiseData",
		Z_Construct_UScriptStruct_FNoiseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::PropPointers),
		sizeof(FNoiseData),
		alignof(FNoiseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNoiseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseData()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseData.InnerSingleton, Z_Construct_UScriptStruct_FNoiseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_NoiseData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_NoiseData_h_Statics::ScriptStructInfo[] = {
		{ FNoiseData::StaticStruct, Z_Construct_UScriptStruct_FNoiseData_Statics::NewStructOps, TEXT("NoiseData"), &Z_Registration_Info_UScriptStruct_NoiseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseData), 1429704047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_NoiseData_h_2586837333(TEXT("/Script/WorldScapeNoise"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_NoiseData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeNoise_Public_NoiseData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

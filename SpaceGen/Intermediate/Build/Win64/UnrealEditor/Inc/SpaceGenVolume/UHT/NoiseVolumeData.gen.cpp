// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoiseVolumeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseVolumeData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseVolumeData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseVolumeData;
class UScriptStruct* FNoiseVolumeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseVolumeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseVolumeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseVolumeData, (UObject*)Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("NoiseVolumeData"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseVolumeData.OuterSingleton;
}
template<> WORLDSCAPEVOLUME_API UScriptStruct* StaticStruct<FNoiseVolumeData>()
{
	return FNoiseVolumeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseVolumeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NoiseVolumeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseVolumeData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		&NewStructOps,
		"NoiseVolumeData",
		nullptr,
		0,
		sizeof(FNoiseVolumeData),
		alignof(FNoiseVolumeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseVolumeData()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseVolumeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseVolumeData.InnerSingleton, Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseVolumeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_NoiseVolumeData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_NoiseVolumeData_h_Statics::ScriptStructInfo[] = {
		{ FNoiseVolumeData::StaticStruct, Z_Construct_UScriptStruct_FNoiseVolumeData_Statics::NewStructOps, TEXT("NoiseVolumeData"), &Z_Registration_Info_UScriptStruct_NoiseVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseVolumeData), 2245021720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_NoiseVolumeData_h_4073658225(TEXT("/Script/WorldScapeVolume"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_NoiseVolumeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_NoiseVolumeData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

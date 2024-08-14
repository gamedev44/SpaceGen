// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/FoliageMaskVolumeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageMaskVolumeData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageMaskVolumeData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData;
class UScriptStruct* FFoliageMaskVolumeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageMaskVolumeData, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("FoliageMaskVolumeData"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.OuterSingleton;
}
template<> WORLDSCAPEVOLUME_API UScriptStruct* StaticStruct<FFoliageMaskVolumeData>()
{
	return FFoliageMaskVolumeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FoliageMaskVolumeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageMaskVolumeData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		&NewStructOps,
		"FoliageMaskVolumeData",
		sizeof(FFoliageMaskVolumeData),
		alignof(FFoliageMaskVolumeData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageMaskVolumeData()
	{
		if (!Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.InnerSingleton, Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolumeData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolumeData_h_Statics::ScriptStructInfo[] = {
		{ FFoliageMaskVolumeData::StaticStruct, Z_Construct_UScriptStruct_FFoliageMaskVolumeData_Statics::NewStructOps, TEXT("FoliageMaskVolumeData"), &Z_Registration_Info_UScriptStruct_FoliageMaskVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageMaskVolumeData), 2693051023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolumeData_h_4092885898(TEXT("/Script/WorldScapeVolume"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolumeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolumeData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

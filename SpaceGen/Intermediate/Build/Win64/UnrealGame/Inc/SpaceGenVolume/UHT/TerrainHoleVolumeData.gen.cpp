// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/TerrainHoleVolumeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainHoleVolumeData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UScriptStruct* Z_Construct_UScriptStruct_FTerrainHoleVolumeData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData;
class UScriptStruct* FTerrainHoleVolumeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTerrainHoleVolumeData, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("TerrainHoleVolumeData"));
	}
	return Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.OuterSingleton;
}
template<> WORLDSCAPEVOLUME_API UScriptStruct* StaticStruct<FTerrainHoleVolumeData>()
{
	return FTerrainHoleVolumeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TerrainHoleVolumeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTerrainHoleVolumeData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		&NewStructOps,
		"TerrainHoleVolumeData",
		sizeof(FTerrainHoleVolumeData),
		alignof(FTerrainHoleVolumeData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTerrainHoleVolumeData()
	{
		if (!Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.InnerSingleton, Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolumeData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolumeData_h_Statics::ScriptStructInfo[] = {
		{ FTerrainHoleVolumeData::StaticStruct, Z_Construct_UScriptStruct_FTerrainHoleVolumeData_Statics::NewStructOps, TEXT("TerrainHoleVolumeData"), &Z_Registration_Info_UScriptStruct_TerrainHoleVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTerrainHoleVolumeData), 1174707622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolumeData_h_1301672665(TEXT("/Script/WorldScapeVolume"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolumeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_TerrainHoleVolumeData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

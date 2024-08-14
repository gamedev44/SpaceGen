// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/HeightMapVolumeDataCopy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapVolumeDataCopy() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UScriptStruct* Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy;
class UScriptStruct* FHeightMapVolumeDataCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("HeightMapVolumeDataCopy"));
	}
	return Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.OuterSingleton;
}
template<> WORLDSCAPEVOLUME_API UScriptStruct* StaticStruct<FHeightMapVolumeDataCopy>()
{
	return FHeightMapVolumeDataCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeDataCopy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightMapVolumeDataCopy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		&NewStructOps,
		"HeightMapVolumeDataCopy",
		sizeof(FHeightMapVolumeDataCopy),
		alignof(FHeightMapVolumeDataCopy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.InnerSingleton, Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeDataCopy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeDataCopy_h_Statics::ScriptStructInfo[] = {
		{ FHeightMapVolumeDataCopy::StaticStruct, Z_Construct_UScriptStruct_FHeightMapVolumeDataCopy_Statics::NewStructOps, TEXT("HeightMapVolumeDataCopy"), &Z_Registration_Info_UScriptStruct_HeightMapVolumeDataCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightMapVolumeDataCopy), 3198759809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeDataCopy_h_759240987(TEXT("/Script/WorldScapeVolume"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeDataCopy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeDataCopy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

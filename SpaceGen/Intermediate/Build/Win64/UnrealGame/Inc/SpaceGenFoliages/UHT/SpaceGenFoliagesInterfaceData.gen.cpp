// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliages/Public/WorldScapeFoliagesInterfaceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesInterfaceData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UEnum* Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWSFoliagesType;
	static UEnum* EWSFoliagesType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWSFoliagesType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWSFoliagesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType, Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("EWSFoliagesType"));
		}
		return Z_Registration_Info_UEnum_EWSFoliagesType.OuterSingleton;
	}
	template<> WORLDSCAPEFOLIAGES_API UEnum* StaticEnum<EWSFoliagesType>()
	{
		return EWSFoliagesType_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enumerators[] = {
		{ "EWSFoliagesType::FoliagesAsset", (int64)EWSFoliagesType::FoliagesAsset },
		{ "EWSFoliagesType::FoliagesBlueprint", (int64)EWSFoliagesType::FoliagesBlueprint },
		{ "EWSFoliagesType::FoliagesCluster", (int64)EWSFoliagesType::FoliagesCluster },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\"BlueprintType\" is essential to include\n" },
		{ "FoliagesAsset.Comment", "//Replace the default noise data with the one from the heightmap\n" },
		{ "FoliagesAsset.DisplayName", "Foliages Assets" },
		{ "FoliagesAsset.Name", "EWSFoliagesType::FoliagesAsset" },
		{ "FoliagesAsset.ToolTip", "Replace the default noise data with the one from the heightmap" },
		{ "FoliagesBlueprint.DisplayName", "Foliages Blueprint" },
		{ "FoliagesBlueprint.Name", "EWSFoliagesType::FoliagesBlueprint" },
		{ "FoliagesCluster.DisplayName", "Foliages Cluster" },
		{ "FoliagesCluster.Name", "EWSFoliagesType::FoliagesCluster" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterfaceData.h" },
		{ "ToolTip", "\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		"EWSFoliagesType",
		"EWSFoliagesType",
		Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType()
	{
		if (!Z_Registration_Info_UEnum_EWSFoliagesType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWSFoliagesType.InnerSingleton, Z_Construct_UEnum_WorldScapeFoliages_EWSFoliagesType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWSFoliagesType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData;
class UScriptStruct* FWorldScapeFoliagesInterfaceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData, Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("WorldScapeFoliagesInterfaceData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.OuterSingleton;
}
template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<FWorldScapeFoliagesInterfaceData>()
{
	return FWorldScapeFoliagesInterfaceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesInterfaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldScapeFoliagesInterfaceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		&NewStructOps,
		"WorldScapeFoliagesInterfaceData",
		sizeof(FWorldScapeFoliagesInterfaceData),
		alignof(FWorldScapeFoliagesInterfaceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.InnerSingleton, Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::EnumInfo[] = {
		{ EWSFoliagesType_StaticEnum, TEXT("EWSFoliagesType"), &Z_Registration_Info_UEnum_EWSFoliagesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 328051229U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::ScriptStructInfo[] = {
		{ FWorldScapeFoliagesInterfaceData::StaticStruct, Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics::NewStructOps, TEXT("WorldScapeFoliagesInterfaceData"), &Z_Registration_Info_UScriptStruct_WorldScapeFoliagesInterfaceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldScapeFoliagesInterfaceData), 1848651158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_3360787278(TEXT("/Script/WorldScapeFoliages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliagesCollectionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesCollectionData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData;
class UScriptStruct* FWorldScapeFoliagesCollectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData, (UObject*)Z_Construct_UPackage__Script_WorldScapeFoliages(), TEXT("WorldScapeFoliagesCollectionData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.OuterSingleton;
}
template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<FWorldScapeFoliagesCollectionData>()
{
	return FWorldScapeFoliagesCollectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesCollectionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldScapeFoliagesCollectionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
		nullptr,
		&NewStructOps,
		"WorldScapeFoliagesCollectionData",
		nullptr,
		0,
		sizeof(FWorldScapeFoliagesCollectionData),
		alignof(FWorldScapeFoliagesCollectionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.InnerSingleton, Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollectionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollectionData_h_Statics::ScriptStructInfo[] = {
		{ FWorldScapeFoliagesCollectionData::StaticStruct, Z_Construct_UScriptStruct_FWorldScapeFoliagesCollectionData_Statics::NewStructOps, TEXT("WorldScapeFoliagesCollectionData"), &Z_Registration_Info_UScriptStruct_WorldScapeFoliagesCollectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldScapeFoliagesCollectionData), 2467485007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollectionData_h_1868787697(TEXT("/Script/WorldScapeFoliages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollectionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesCollectionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

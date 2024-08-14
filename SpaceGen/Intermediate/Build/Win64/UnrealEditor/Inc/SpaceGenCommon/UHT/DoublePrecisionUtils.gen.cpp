// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoublePrecisionUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoublePrecisionUtils() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeCommon();
	WORLDSCAPECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FDVector();
	WORLDSCAPECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FDVector2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DVector;
class UScriptStruct* FDVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDVector, (UObject*)Z_Construct_UPackage__Script_WorldScapeCommon(), TEXT("DVector"));
	}
	return Z_Registration_Info_UScriptStruct_DVector.OuterSingleton;
}
template<> WORLDSCAPECOMMON_API UScriptStruct* StaticStruct<FDVector>()
{
	return FDVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDVector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoublePrecisionUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCommon,
		nullptr,
		&NewStructOps,
		"DVector",
		nullptr,
		0,
		sizeof(FDVector),
		alignof(FDVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDVector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDVector()
	{
		if (!Z_Registration_Info_UScriptStruct_DVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DVector.InnerSingleton, Z_Construct_UScriptStruct_FDVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DVector2D;
class UScriptStruct* FDVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDVector2D, (UObject*)Z_Construct_UPackage__Script_WorldScapeCommon(), TEXT("DVector2D"));
	}
	return Z_Registration_Info_UScriptStruct_DVector2D.OuterSingleton;
}
template<> WORLDSCAPECOMMON_API UScriptStruct* StaticStruct<FDVector2D>()
{
	return FDVector2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDVector2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDVector2D_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoublePrecisionUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDVector2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDVector2D>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDVector2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCommon,
		nullptr,
		&NewStructOps,
		"DVector2D",
		nullptr,
		0,
		sizeof(FDVector2D),
		alignof(FDVector2D),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDVector2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDVector2D_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDVector2D()
	{
		if (!Z_Registration_Info_UScriptStruct_DVector2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DVector2D.InnerSingleton, Z_Construct_UScriptStruct_FDVector2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DVector2D.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_DoublePrecisionUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_DoublePrecisionUtils_h_Statics::ScriptStructInfo[] = {
		{ FDVector::StaticStruct, Z_Construct_UScriptStruct_FDVector_Statics::NewStructOps, TEXT("DVector"), &Z_Registration_Info_UScriptStruct_DVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDVector), 1562785460U) },
		{ FDVector2D::StaticStruct, Z_Construct_UScriptStruct_FDVector2D_Statics::NewStructOps, TEXT("DVector2D"), &Z_Registration_Info_UScriptStruct_DVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDVector2D), 2544693483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_DoublePrecisionUtils_h_1670146264(TEXT("/Script/WorldScapeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_DoublePrecisionUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_DoublePrecisionUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

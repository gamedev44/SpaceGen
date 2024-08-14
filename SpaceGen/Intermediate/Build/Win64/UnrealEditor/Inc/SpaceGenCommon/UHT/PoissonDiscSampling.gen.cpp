// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoissonDiscSampling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoissonDiscSampling() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_WorldScapeCommon();
	WORLDSCAPECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPoissonObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoissonObject;
class UScriptStruct* FPoissonObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoissonObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoissonObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoissonObject, (UObject*)Z_Construct_UPackage__Script_WorldScapeCommon(), TEXT("PoissonObject"));
	}
	return Z_Registration_Info_UScriptStruct_PoissonObject.OuterSingleton;
}
template<> WORLDSCAPECOMMON_API UScriptStruct* StaticStruct<FPoissonObject>()
{
	return FPoissonObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoissonObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoissonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoissonDiscSampling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoissonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoissonObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "IntVector2D" },
		{ "ModuleRelativePath", "Public/PoissonDiscSampling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoissonObject, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "IntVector2D" },
		{ "ModuleRelativePath", "Public/PoissonDiscSampling.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoissonObject, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Radius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoissonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoissonObject_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoissonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCommon,
		nullptr,
		&NewStructOps,
		"PoissonObject",
		Z_Construct_UScriptStruct_FPoissonObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoissonObject_Statics::PropPointers),
		sizeof(FPoissonObject),
		alignof(FPoissonObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoissonObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoissonObject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoissonObject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoissonObject()
	{
		if (!Z_Registration_Info_UScriptStruct_PoissonObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoissonObject.InnerSingleton, Z_Construct_UScriptStruct_FPoissonObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoissonObject.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_PoissonDiscSampling_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_PoissonDiscSampling_h_Statics::ScriptStructInfo[] = {
		{ FPoissonObject::StaticStruct, Z_Construct_UScriptStruct_FPoissonObject_Statics::NewStructOps, TEXT("PoissonObject"), &Z_Registration_Info_UScriptStruct_PoissonObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoissonObject), 2296950857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_PoissonDiscSampling_h_105942329(TEXT("/Script/WorldScapeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_PoissonDiscSampling_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCommon_Public_PoissonDiscSampling_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

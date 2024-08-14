// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialLod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialLod() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeCore();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLod();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLodArray();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSMaterialLod;
class UScriptStruct* FWSMaterialLod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSMaterialLod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSMaterialLod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSMaterialLod, (UObject*)Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("WSMaterialLod"));
	}
	return Z_Registration_Info_UScriptStruct_WSMaterialLod.OuterSingleton;
}
template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<FWSMaterialLod>()
{
	return FWSMaterialLod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSMaterialLod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LodRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nUCLASS()\nclass WORLDSCAPECORE_API UInt32Range\n{\n\n\x09GENERATED_BODY()\n\n\x09UPROPERTY(EditAnywhere, Category = Interval)\n\x09int32 Min;\n\n\x09UPROPERTY(EditAnywhere, Category = Interval)\n\x09int32 Max;\n\n\x09UFUNCTION(BlueprintCallable, Category = \"Defaults\")\n\x09""bool Contains(int32 value) \n\x09{\n\x09\x09return (value >= Min && value <= Max);\n\x09}\n\n};\n*/" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
		{ "ToolTip", "UCLASS()\nclass WORLDSCAPECORE_API UInt32Range\n{\n\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, Category = Interval)\n       int32 Min;\n\n       UPROPERTY(EditAnywhere, Category = Interval)\n       int32 Max;\n\n       UFUNCTION(BlueprintCallable, Category = \"Defaults\")\n       bool Contains(int32 value)\n       {\n               return (value >= Min && value <= Max);\n       }\n\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSMaterialLod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_LodRange_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_LodRange = { "LodRange", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSMaterialLod, LodRange), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_LodRange_MetaData), Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_LodRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSMaterialLod, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_Material_MetaData), Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWSMaterialLod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_LodRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSMaterialLod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		&NewStructOps,
		"WSMaterialLod",
		Z_Construct_UScriptStruct_FWSMaterialLod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLod_Statics::PropPointers),
		sizeof(FWSMaterialLod),
		alignof(FWSMaterialLod),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSMaterialLod_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLod_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLod()
	{
		if (!Z_Registration_Info_UScriptStruct_WSMaterialLod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSMaterialLod.InnerSingleton, Z_Construct_UScriptStruct_FWSMaterialLod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSMaterialLod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WSMaterialLodArray;
class UScriptStruct* FWSMaterialLodArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WSMaterialLodArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WSMaterialLodArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWSMaterialLodArray, (UObject*)Z_Construct_UPackage__Script_WorldScapeCore(), TEXT("WSMaterialLodArray"));
	}
	return Z_Registration_Info_UScriptStruct_WSMaterialLodArray.OuterSingleton;
}
template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<FWSMaterialLodArray>()
{
	return FWSMaterialLodArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsLod_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsLod_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWSMaterialLodArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod_Inner = { "MaterialsLod", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWSMaterialLod, METADATA_PARAMS(0, nullptr) }; // 3728448525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod = { "MaterialsLod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSMaterialLodArray, MaterialsLod), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod_MetaData), Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod_MetaData) }; // 3728448525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MaterialLod.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWSMaterialLodArray, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_DefaultMaterial_MetaData), Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_DefaultMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_MaterialsLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewProp_DefaultMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
		nullptr,
		&NewStructOps,
		"WSMaterialLodArray",
		Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::PropPointers),
		sizeof(FWSMaterialLodArray),
		alignof(FWSMaterialLodArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLodArray()
	{
		if (!Z_Registration_Info_UScriptStruct_WSMaterialLodArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WSMaterialLodArray.InnerSingleton, Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WSMaterialLodArray.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_MaterialLod_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_MaterialLod_h_Statics::ScriptStructInfo[] = {
		{ FWSMaterialLod::StaticStruct, Z_Construct_UScriptStruct_FWSMaterialLod_Statics::NewStructOps, TEXT("WSMaterialLod"), &Z_Registration_Info_UScriptStruct_WSMaterialLod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSMaterialLod), 3728448525U) },
		{ FWSMaterialLodArray::StaticStruct, Z_Construct_UScriptStruct_FWSMaterialLodArray_Statics::NewStructOps, TEXT("WSMaterialLodArray"), &Z_Registration_Info_UScriptStruct_WSMaterialLodArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWSMaterialLodArray), 2581451736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_MaterialLod_h_548749737(TEXT("/Script/WorldScapeCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_MaterialLod_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_MaterialLod_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

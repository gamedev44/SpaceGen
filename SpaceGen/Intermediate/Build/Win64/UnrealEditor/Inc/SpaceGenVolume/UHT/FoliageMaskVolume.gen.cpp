// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageMaskVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageMaskVolume() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AFoliageMaskVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AFoliageMaskVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface();
// End Cross Module References
	void AFoliageMaskVolume::StaticRegisterNativesAFoliageMaskVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFoliageMaskVolume);
	UClass* Z_Construct_UClass_AFoliageMaskVolume_NoRegister()
	{
		return AFoliageMaskVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFoliageMaskVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FoliageLayerMask_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageLayerMask_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageLayerMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnVolume_MetaData[];
#endif
		static void NewProp_SpawnVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SpawnVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoliageMaskVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolumeInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoliageMaskVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "FoliageMaskVolume.h" },
		{ "ModuleRelativePath", "Public/FoliageMaskVolume.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask_Inner = { "FoliageLayerMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/FoliageMaskVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask = { "FoliageLayerMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFoliageMaskVolume, FoliageLayerMask), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask_MetaData), Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "//When true, the foliage in mask will be allowed to spawn in the foliage mask (option need to be toggled in the foliages properties)\n" },
		{ "ModuleRelativePath", "Public/FoliageMaskVolume.h" },
		{ "ToolTip", "When true, the foliage in mask will be allowed to spawn in the foliage mask (option need to be toggled in the foliages properties)" },
	};
#endif
	void Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume_SetBit(void* Obj)
	{
		((AFoliageMaskVolume*)Obj)->SpawnVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume = { "SpawnVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFoliageMaskVolume), &Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume_MetaData), Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoliageMaskVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_FoliageLayerMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoliageMaskVolume_Statics::NewProp_SpawnVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoliageMaskVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoliageMaskVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoliageMaskVolume_Statics::ClassParams = {
		&AFoliageMaskVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFoliageMaskVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AFoliageMaskVolume_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFoliageMaskVolume_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFoliageMaskVolume()
	{
		if (!Z_Registration_Info_UClass_AFoliageMaskVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoliageMaskVolume.OuterSingleton, Z_Construct_UClass_AFoliageMaskVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFoliageMaskVolume.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<AFoliageMaskVolume>()
	{
		return AFoliageMaskVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoliageMaskVolume);
	AFoliageMaskVolume::~AFoliageMaskVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFoliageMaskVolume, AFoliageMaskVolume::StaticClass, TEXT("AFoliageMaskVolume"), &Z_Registration_Info_UClass_AFoliageMaskVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoliageMaskVolume), 3580582346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolume_h_1031865994(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_FoliageMaskVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

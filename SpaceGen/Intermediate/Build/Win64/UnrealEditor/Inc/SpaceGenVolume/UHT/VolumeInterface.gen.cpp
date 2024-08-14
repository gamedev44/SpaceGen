// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VolumeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeInterface() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface_NoRegister();
// End Cross Module References
	void AVolumeInterface::StaticRegisterNativesAVolumeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolumeInterface);
	UClass* Z_Construct_UClass_AVolumeInterface_NoRegister()
	{
		return AVolumeInterface::StaticClass();
	}
	struct Z_Construct_UClass_AVolumeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignToPlanetSurface_MetaData[];
#endif
		static void NewProp_AlignToPlanetSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToPlanetSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAlignmentRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceAlignmentRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedRefresh_MetaData[];
#endif
		static void NewProp_NeedRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NeedRefresh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolumeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumeInterface_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code" },
		{ "IncludePath", "VolumeInterface.h" },
		{ "ModuleRelativePath", "Public/VolumeInterface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/VolumeInterface.h" },
	};
#endif
	void Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface_SetBit(void* Obj)
	{
		((AVolumeInterface*)Obj)->AlignToPlanetSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface = { "AlignToPlanetSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVolumeInterface), &Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface_MetaData), Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumeInterface_Statics::NewProp_SurfaceAlignmentRotationOffset_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "AlignToPlanetSurface == true" },
		{ "ModuleRelativePath", "Public/VolumeInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVolumeInterface_Statics::NewProp_SurfaceAlignmentRotationOffset = { "SurfaceAlignmentRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolumeInterface, SurfaceAlignmentRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::NewProp_SurfaceAlignmentRotationOffset_MetaData), Z_Construct_UClass_AVolumeInterface_Statics::NewProp_SurfaceAlignmentRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Used to know if planet need Foliage reload \n" },
		{ "ModuleRelativePath", "Public/VolumeInterface.h" },
		{ "ToolTip", "Used to know if planet need Foliage reload" },
	};
#endif
	void Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh_SetBit(void* Obj)
	{
		((AVolumeInterface*)Obj)->NeedRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh = { "NeedRefresh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVolumeInterface), &Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh_MetaData), Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolumeInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumeInterface_Statics::NewProp_AlignToPlanetSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumeInterface_Statics::NewProp_SurfaceAlignmentRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumeInterface_Statics::NewProp_NeedRefresh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolumeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolumeInterface_Statics::ClassParams = {
		&AVolumeInterface::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVolumeInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolumeInterface_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumeInterface_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVolumeInterface()
	{
		if (!Z_Registration_Info_UClass_AVolumeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolumeInterface.OuterSingleton, Z_Construct_UClass_AVolumeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVolumeInterface.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<AVolumeInterface>()
	{
		return AVolumeInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumeInterface);
	AVolumeInterface::~AVolumeInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_VolumeInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_VolumeInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVolumeInterface, AVolumeInterface::StaticClass, TEXT("AVolumeInterface"), &Z_Registration_Info_UClass_AVolumeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolumeInterface), 1245532460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_VolumeInterface_h_2629540864(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_VolumeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_VolumeInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

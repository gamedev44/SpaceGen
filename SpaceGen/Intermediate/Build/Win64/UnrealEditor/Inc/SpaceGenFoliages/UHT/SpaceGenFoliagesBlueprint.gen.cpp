// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeFoliagesBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeFoliagesBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeFoliages();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesBlueprint();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesBlueprint_NoRegister();
	WORLDSCAPEFOLIAGES_API UClass* Z_Construct_UClass_UWorldScapeFoliagesInterface();
// End Cross Module References
	void UWorldScapeFoliagesBlueprint::StaticRegisterNativesUWorldScapeFoliagesBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeFoliagesBlueprint);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesBlueprint_NoRegister()
	{
		return UWorldScapeFoliagesBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignedToGround_MetaData[];
#endif
		static void NewProp_bAlignedToGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignedToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomRotation_MetaData[];
#endif
		static void NewProp_bRandomRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundRotationInfluenceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundRotationInfluenceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundRotationInfluenceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundRotationInfluenceMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldScapeFoliagesInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeFoliages,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "WorldScapeFoliage" },
		{ "ClassGroupNames", "WorldScape" },
		{ "IncludePath", "WorldScapeFoliagesBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_ObjectToSpawn_MetaData[] = {
		{ "Category", "Foliage|Actor" },
		{ "DisplayName", "Object To Spawn" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_ObjectToSpawn = { "ObjectToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, ObjectToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_ObjectToSpawn_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_ObjectToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Foliage" },
		{ "Comment", "//Should the actor be kept when it is out of generation position\n//UPROPERTY(EditAnywhere, Category = \"Foliage|Actor\", meta = (EditCondition = \"bSpawnActorInstead == true\"))\n//bool bKeepActorWhenFar = false;\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
		{ "ToolTip", "Should the actor be kept when it is out of generation position\nUPROPERTY(EditAnywhere, Category = \"Foliage|Actor\", meta = (EditCondition = \"bSpawnActorInstead == true\"))\nbool bKeepActorWhenFar = false;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_Offset_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MinScale_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, MinScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MinScale_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MinScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, MaxScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MaxScale_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MaxScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "// Set to true to allign the mesh to the ground\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
		{ "ToolTip", "Set to true to allign the mesh to the ground" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesBlueprint*)Obj)->bAlignedToGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround = { "bAlignedToGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldScapeFoliagesBlueprint), &Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "// Set to true to rotate the mesh randomly\n" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
		{ "ToolTip", "Set to true to rotate the mesh randomly" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
	{
		((UWorldScapeFoliagesBlueprint*)Obj)->bRandomRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldScapeFoliagesBlueprint), &Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMin_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//How much the mesh rotation is influenced by the ground\n" },
		{ "EditCondition", "bAllignedToGround == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
		{ "ToolTip", "How much the mesh rotation is influenced by the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMin = { "GroundRotationInfluenceMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, GroundRotationInfluenceMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMin_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMax_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "//How much the mesh rotation is influenced by the ground\n" },
		{ "EditCondition", "bAllignedToGround == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldScapeFoliagesBlueprint.h" },
		{ "ToolTip", "How much the mesh rotation is influenced by the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMax = { "GroundRotationInfluenceMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldScapeFoliagesBlueprint, GroundRotationInfluenceMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMax_MetaData), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMax_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_ObjectToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MinScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_MaxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bAlignedToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_bRandomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::NewProp_GroundRotationInfluenceMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeFoliagesBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::ClassParams = {
		&UWorldScapeFoliagesBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldScapeFoliagesBlueprint()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeFoliagesBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeFoliagesBlueprint.OuterSingleton, Z_Construct_UClass_UWorldScapeFoliagesBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeFoliagesBlueprint.OuterSingleton;
	}
	template<> WORLDSCAPEFOLIAGES_API UClass* StaticClass<UWorldScapeFoliagesBlueprint>()
	{
		return UWorldScapeFoliagesBlueprint::StaticClass();
	}
	UWorldScapeFoliagesBlueprint::UWorldScapeFoliagesBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeFoliagesBlueprint);
	UWorldScapeFoliagesBlueprint::~UWorldScapeFoliagesBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeFoliagesBlueprint, UWorldScapeFoliagesBlueprint::StaticClass, TEXT("UWorldScapeFoliagesBlueprint"), &Z_Registration_Info_UClass_UWorldScapeFoliagesBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeFoliagesBlueprint), 845815935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesBlueprint_h_85412905(TEXT("/Script/WorldScapeFoliages"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

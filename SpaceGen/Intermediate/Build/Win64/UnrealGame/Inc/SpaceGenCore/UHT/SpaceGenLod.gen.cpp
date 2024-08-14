// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeCore/Public/WorldScapeLod.h"
#include "WorldScapeCore/Public/MaterialLod.h"
#include "WorldScapeCore/Public/WorldScapeMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldScapeLod() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_WorldScapeCore();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_UWorldScapeLod();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_UWorldScapeLod_NoRegister();
	WORLDSCAPECORE_API UClass* Z_Construct_UClass_UWorldScapeMeshComponent_NoRegister();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldScapeMeshTangent();
	WORLDSCAPECORE_API UScriptStruct* Z_Construct_UScriptStruct_FWSMaterialLodArray();
// End Cross Module References
	DEFINE_FUNCTION(UWorldScapeLod::execGetClosestSurfaceNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_pRelativePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClosestSurfaceNormal(Z_Param_pRelativePosition);
		P_NATIVE_END;
	}
	void UWorldScapeLod::StaticRegisterNativesUWorldScapeLod()
	{
		UClass* Class = UWorldScapeLod::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClosestSurfaceNormal", &UWorldScapeLod::execGetClosestSurfaceNormal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics
	{
		struct WorldScapeLod_eventGetClosestSurfaceNormal_Parms
		{
			FVector pRelativePosition;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_pRelativePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::NewProp_pRelativePosition = { "pRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeLod_eventGetClosestSurfaceNormal_Parms, pRelativePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldScapeLod_eventGetClosestSurfaceNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::NewProp_pRelativePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/*\n\x09UFUNCTION(BlueprintCallable)\n\x09\x09""FVector GetClosestSurfacePosition(FVector Position);\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n        FVector GetClosestSurfacePosition(FVector Position);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldScapeLod, nullptr, "GetClosestSurfaceNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::WorldScapeLod_eventGetClosestSurfaceNormal_Parms), Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldScapeLod);
	UClass* Z_Construct_UClass_UWorldScapeLod_NoRegister()
	{
		return UWorldScapeLod::StaticClass();
	}
	struct Z_Construct_UClass_UWorldScapeLod_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBody_MetaData[];
#endif
		static void NewProp_WaterBody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WaterBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrianglesPatchA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrianglesPatchA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrianglesPatchA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrianglesPatchB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrianglesPatchB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrianglesPatchB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnappedAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnappedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLodArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLodArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLod_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaterialLod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldScapeLod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldScapeLod_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldScapeLod_GetClosestSurfaceNormal, "GetClosestSurfaceNormal" }, // 3689961389
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//#define DEBUGPCore true\n" },
		{ "HideCategories", "Code MeshInfo Trigger PhysicsVolume" },
		{ "IncludePath", "WorldScapeLod.h" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
		{ "ToolTip", "#define DEBUGPCore true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Lod_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Lod), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Lod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Lod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	void Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody_SetBit(void* Obj)
	{
		((UWorldScapeLod*)Obj)->WaterBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody = { "WaterBody", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldScapeLod), &Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Code" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Mesh), Z_Construct_UClass_UWorldScapeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA_Inner = { "TrianglesPatchA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA = { "TrianglesPatchA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, TrianglesPatchA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB_Inner = { "TrianglesPatchB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB = { "TrianglesPatchB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, TrianglesPatchB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_SnappedAngle_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_SnappedAngle = { "SnappedAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, SnappedAngle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_SnappedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_SnappedAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TriangleSize_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TriangleSize = { "TriangleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, TriangleSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TriangleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TriangleSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV_Inner = { "UV", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, UV), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWorldScapeMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 1592994473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "MeshInfo" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents_MetaData)) }; // 1592994473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLodArray_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLodArray = { "MaterialLodArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, MaterialLodArray), Z_Construct_UScriptStruct_FWSMaterialLodArray, METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLodArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLodArray_MetaData)) }; // 1797463136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLod_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WorldScapeLod.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLod = { "MaterialLod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldScapeLod, MaterialLod), METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLod_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldScapeLod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_WaterBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TrianglesPatchB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_SnappedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_TriangleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLodArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldScapeLod_Statics::NewProp_MaterialLod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldScapeLod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldScapeLod>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldScapeLod_Statics::ClassParams = {
		&UWorldScapeLod::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldScapeLod_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldScapeLod_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldScapeLod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldScapeLod()
	{
		if (!Z_Registration_Info_UClass_UWorldScapeLod.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldScapeLod.OuterSingleton, Z_Construct_UClass_UWorldScapeLod_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldScapeLod.OuterSingleton;
	}
	template<> WORLDSCAPECORE_API UClass* StaticClass<UWorldScapeLod>()
	{
		return UWorldScapeLod::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldScapeLod);
	UWorldScapeLod::~UWorldScapeLod() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeLod_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeLod_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldScapeLod, UWorldScapeLod::StaticClass, TEXT("UWorldScapeLod"), &Z_Registration_Info_UClass_UWorldScapeLod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldScapeLod), 3249124508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeLod_h_3094490193(TEXT("/Script/WorldScapeCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeLod_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeLod_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

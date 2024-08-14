// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldScapeMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
struct FWorldScapeMeshTangent;
#ifdef WORLDSCAPECORE_WorldScapeMeshComponent_generated_h
#error "WorldScapeMeshComponent.generated.h already included, missing '#pragma once' in WorldScapeMeshComponent.h"
#endif
#define WORLDSCAPECORE_WorldScapeMeshComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldScapeMeshTangent_Statics; \
	WORLDSCAPECORE_API static class UScriptStruct* StaticStruct();


template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<struct FWorldScapeMeshTangent>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldScapeMeshVertex_Statics; \
	WORLDSCAPECORE_API static class UScriptStruct* StaticStruct();


template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<struct FWorldScapeMeshVertex>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldScapeMeshSection_Statics; \
	WORLDSCAPECORE_API static class UScriptStruct* StaticStruct();


template<> WORLDSCAPECORE_API UScriptStruct* StaticStruct<struct FWorldScapeMeshSection>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldScapeMeshComponent(); \
	friend struct Z_Construct_UClass_UWorldScapeMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldScapeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldScapeCore"), NO_API) \
	DECLARE_SERIALIZER(UWorldScapeMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldScapeMeshComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUWorldScapeMeshComponent(); \
	friend struct Z_Construct_UClass_UWorldScapeMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldScapeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldScapeCore"), NO_API) \
	DECLARE_SERIALIZER(UWorldScapeMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldScapeMeshComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldScapeMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldScapeMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldScapeMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldScapeMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldScapeMeshComponent(UWorldScapeMeshComponent&&); \
	NO_API UWorldScapeMeshComponent(const UWorldScapeMeshComponent&); \
public: \
	NO_API virtual ~UWorldScapeMeshComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldScapeMeshComponent(UWorldScapeMeshComponent&&); \
	NO_API UWorldScapeMeshComponent(const UWorldScapeMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldScapeMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldScapeMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldScapeMeshComponent) \
	NO_API virtual ~UWorldScapeMeshComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_160_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDSCAPECORE_API UClass* StaticClass<class UWorldScapeMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeCore_Public_WorldScapeMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

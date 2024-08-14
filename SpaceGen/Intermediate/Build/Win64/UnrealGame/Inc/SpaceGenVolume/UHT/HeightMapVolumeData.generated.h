// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeightMapVolumeData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWSHeightMask : uint8;
#ifdef WORLDSCAPEVOLUME_HeightMapVolumeData_generated_h
#error "HeightMapVolumeData.generated.h already included, missing '#pragma once' in HeightMapVolumeData.h"
#endif
#define WORLDSCAPEVOLUME_HeightMapVolumeData_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWidth); \
	DECLARE_FUNCTION(execHeight); \
	DECLARE_FUNCTION(execMaskSize); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execGetStoredValue); \
	DECLARE_FUNCTION(execBuildOceanTexture); \
	DECLARE_FUNCTION(execBuildTexture);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWidth); \
	DECLARE_FUNCTION(execHeight); \
	DECLARE_FUNCTION(execMaskSize); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execGetStoredValue); \
	DECLARE_FUNCTION(execBuildOceanTexture); \
	DECLARE_FUNCTION(execBuildTexture);


#if WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanData); \
	DECLARE_FUNCTION(execGenerate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanData); \
	DECLARE_FUNCTION(execGenerate);


#else
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeightMapVolumeData(); \
	friend struct Z_Construct_UClass_UHeightMapVolumeData_Statics; \
public: \
	DECLARE_CLASS(UHeightMapVolumeData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldScapeVolume"), NO_API) \
	DECLARE_SERIALIZER(UHeightMapVolumeData)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUHeightMapVolumeData(); \
	friend struct Z_Construct_UClass_UHeightMapVolumeData_Statics; \
public: \
	DECLARE_CLASS(UHeightMapVolumeData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldScapeVolume"), NO_API) \
	DECLARE_SERIALIZER(UHeightMapVolumeData)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeightMapVolumeData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeightMapVolumeData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeightMapVolumeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeightMapVolumeData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeightMapVolumeData(UHeightMapVolumeData&&); \
	NO_API UHeightMapVolumeData(const UHeightMapVolumeData&); \
public: \
	NO_API virtual ~UHeightMapVolumeData();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeightMapVolumeData(UHeightMapVolumeData&&); \
	NO_API UHeightMapVolumeData(const UHeightMapVolumeData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeightMapVolumeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeightMapVolumeData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHeightMapVolumeData) \
	NO_API virtual ~UHeightMapVolumeData();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_44_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDSCAPEVOLUME_API UClass* StaticClass<class UHeightMapVolumeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h


#define FOREACH_ENUM_EWSHEIGHTMASK(op) \
	op(EWSHeightMask::Height) \
	op(EWSHeightMask::Temperature) \
	op(EWSHeightMask::Humidity) \
	op(EWSHeightMask::Alpha) \
	op(EWSHeightMask::OceanHeight) \
	op(EWSHeightMask::OceanAlpha) 

enum class EWSHeightMask : uint8;
template<> struct TIsUEnumClass<EWSHeightMask> { enum { Value = true }; };
template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EWSHeightMask>();

#define FOREACH_ENUM_EHMTILINGMETHOD(op) \
	op(EHMTilingMethod::Wrap) \
	op(EHMTilingMethod::Clamp) \
	op(EHMTilingMethod::Mirror) 

enum class EHMTilingMethod : uint8;
template<> struct TIsUEnumClass<EHMTilingMethod> { enum { Value = true }; };
template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EHMTilingMethod>();

#define FOREACH_ENUM_EHMSAMPLINGMETHOD(op) \
	op(EHMSamplingMethod::Nearest) \
	op(EHMSamplingMethod::Bilinear) \
	op(EHMSamplingMethod::Bicubic) 

enum class EHMSamplingMethod : uint8;
template<> struct TIsUEnumClass<EHMSamplingMethod> { enum { Value = true }; };
template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EHMSamplingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

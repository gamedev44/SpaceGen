// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldScapeRoot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNoiseData;
struct FWSMaterialLodArray;
#ifdef WORLDSCAPECORE_WorldScapeRoot_generated_h
#error "WorldScapeRoot.generated.h already included, missing '#pragma once' in WorldScapeRoot.h"
#endif
#define WORLDSCAPECORE_WorldScapeRoot_generated_h

#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_SPARSE_DATA
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateOceanMaterial); \
	DECLARE_FUNCTION(execUpdateTerrainMaterial); \
	DECLARE_FUNCTION(execOnFinishedRebase); \
	DECLARE_FUNCTION(execOnBeginRebase); \
	DECLARE_FUNCTION(execGetHeightNormalize); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetGroundHeightNormalize); \
	DECLARE_FUNCTION(execGetGroundHeight); \
	DECLARE_FUNCTION(execGetPawnDistanceFromGround); \
	DECLARE_FUNCTION(execGetPawnAltitude); \
	DECLARE_FUNCTION(execGetPawnBiTangent); \
	DECLARE_FUNCTION(execGetPawnTangent); \
	DECLARE_FUNCTION(execGetPawnSnappedNormal); \
	DECLARE_FUNCTION(execGetPawnNormal); \
	DECLARE_FUNCTION(execGetGroundNoise); \
	DECLARE_FUNCTION(execGetNoise); \
	DECLARE_FUNCTION(execGetPlanetaryDataFromPosition);


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldScapeRoot(); \
	friend struct Z_Construct_UClass_AWorldScapeRoot_Statics; \
public: \
	DECLARE_CLASS(AWorldScapeRoot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldScapeCore"), NO_API) \
	DECLARE_SERIALIZER(AWorldScapeRoot)


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldScapeRoot(AWorldScapeRoot&&); \
	NO_API AWorldScapeRoot(const AWorldScapeRoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldScapeRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldScapeRoot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldScapeRoot) \
	NO_API virtual ~AWorldScapeRoot();


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_231_PROLOG
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_SPARSE_DATA \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDSCAPECORE_API UClass* StaticClass<class AWorldScapeRoot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeCore_Public_WorldScapeRoot_h


#define FOREACH_ENUM_EWORLDSCAPETYPE(op) \
	op(EWorldScapeType::Flat) \
	op(EWorldScapeType::Planet) 

enum class EWorldScapeType : uint8;
template<> struct TIsUEnumClass<EWorldScapeType> { enum { Value = true }; };
template<> WORLDSCAPECORE_API UEnum* StaticEnum<EWorldScapeType>();

#define FOREACH_ENUM_EPLANETARYHEIGHTMAPBLENDTYPE(op) \
	op(EPlanetaryHeightMapBlendType::Replace) \
	op(EPlanetaryHeightMapBlendType::Addition) \
	op(EPlanetaryHeightMapBlendType::Subtract) 

enum class EPlanetaryHeightMapBlendType : uint8;
template<> struct TIsUEnumClass<EPlanetaryHeightMapBlendType> { enum { Value = true }; };
template<> WORLDSCAPECORE_API UEnum* StaticEnum<EPlanetaryHeightMapBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

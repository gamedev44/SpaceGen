// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeightMapVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWSHeightMask : uint8;
#ifdef WORLDSCAPEVOLUME_HeightMapVolume_generated_h
#error "HeightMapVolume.generated.h already included, missing '#pragma once' in HeightMapVolume.h"
#endif
#define WORLDSCAPEVOLUME_HeightMapVolume_generated_h

#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execIsHeightDataValid); \
	DECLARE_FUNCTION(execCanSampleMask); \
	DECLARE_FUNCTION(execCanSample);


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_ACCESSORS
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeightMapVolume(); \
	friend struct Z_Construct_UClass_AHeightMapVolume_Statics; \
public: \
	DECLARE_CLASS(AHeightMapVolume, AVolumeInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldScapeVolume"), NO_API) \
	DECLARE_SERIALIZER(AHeightMapVolume)


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeightMapVolume(AHeightMapVolume&&); \
	NO_API AHeightMapVolume(const AHeightMapVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeightMapVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeightMapVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeightMapVolume) \
	NO_API virtual ~AHeightMapVolume();


#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_15_PROLOG
#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_ACCESSORS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDSCAPEVOLUME_API UClass* StaticClass<class AHeightMapVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

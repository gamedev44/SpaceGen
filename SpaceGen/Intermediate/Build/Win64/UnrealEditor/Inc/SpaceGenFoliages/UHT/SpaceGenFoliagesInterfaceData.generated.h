// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldScapeFoliagesInterfaceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDSCAPEFOLIAGES_WorldScapeFoliagesInterfaceData_generated_h
#error "WorldScapeFoliagesInterfaceData.generated.h already included, missing '#pragma once' in WorldScapeFoliagesInterfaceData.h"
#endif
#define WORLDSCAPEFOLIAGES_WorldScapeFoliagesInterfaceData_generated_h

#define FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldScapeFoliagesInterfaceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDSCAPEFOLIAGES_API UScriptStruct* StaticStruct<struct FWorldScapeFoliagesInterfaceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_WorldScape_Source_WorldScapeFoliages_Public_WorldScapeFoliagesInterfaceData_h


#define FOREACH_ENUM_EWSFOLIAGESTYPE(op) \
	op(EWSFoliagesType::FoliagesAsset) \
	op(EWSFoliagesType::FoliagesBlueprint) \
	op(EWSFoliagesType::FoliagesCluster) 

enum class EWSFoliagesType : uint8;
template<> struct TIsUEnumClass<EWSFoliagesType> { enum { Value = true }; };
template<> WORLDSCAPEFOLIAGES_API UEnum* StaticEnum<EWSFoliagesType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

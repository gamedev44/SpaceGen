// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/HeightMapVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapVolume() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AHeightMapVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AHeightMapVolume_NoRegister();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_AVolumeInterface();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_UHeightMapVolumeData_NoRegister();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask();
// End Cross Module References
	DEFINE_FUNCTION(AHeightMapVolume::execGetData)
	{
		P_GET_STRUCT(FVector2D,Z_Param_UV);
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetData(Z_Param_UV,EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeightMapVolume::execIsHeightDataValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeightDataValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeightMapVolume::execCanSampleMask)
	{
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSampleMask(EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeightMapVolume::execCanSample)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSample();
		P_NATIVE_END;
	}
	void AHeightMapVolume::StaticRegisterNativesAHeightMapVolume()
	{
		UClass* Class = AHeightMapVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSample", &AHeightMapVolume::execCanSample },
			{ "CanSampleMask", &AHeightMapVolume::execCanSampleMask },
			{ "GetData", &AHeightMapVolume::execGetData },
			{ "IsHeightDataValid", &AHeightMapVolume::execIsHeightDataValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics
	{
		struct HeightMapVolume_eventCanSample_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolume_eventCanSample_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolume_eventCanSample_Parms), &Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeightMapVolume, nullptr, "CanSample", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::HeightMapVolume_eventCanSample_Parms), Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeightMapVolume_CanSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeightMapVolume_CanSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics
	{
		struct HeightMapVolume_eventCanSampleMask_Parms
		{
			EWSHeightMask Mask;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolume_eventCanSampleMask_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	void Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolume_eventCanSampleMask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolume_eventCanSampleMask_Parms), &Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeightMapVolume, nullptr, "CanSampleMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::HeightMapVolume_eventCanSampleMask_Parms), Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeightMapVolume_CanSampleMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeightMapVolume_CanSampleMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeightMapVolume_GetData_Statics
	{
		struct HeightMapVolume_eventGetData_Parms
		{
			FVector2D UV;
			EWSHeightMask Mask;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolume_eventGetData_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolume_eventGetData_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolume_eventGetData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeightMapVolume, nullptr, "GetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::HeightMapVolume_eventGetData_Parms), Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeightMapVolume_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeightMapVolume_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics
	{
		struct HeightMapVolume_eventIsHeightDataValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolume_eventIsHeightDataValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolume_eventIsHeightDataValid_Parms), &Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeightMapVolume, nullptr, "IsHeightDataValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::HeightMapVolume_eventIsHeightDataValid_Parms), Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeightMapVolume);
	UClass* Z_Construct_UClass_AHeightMapVolume_NoRegister()
	{
		return AHeightMapVolume::StaticClass();
	}
	struct Z_Construct_UClass_AHeightMapVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMapData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static void NewProp_Height_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static void NewProp_Temperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Humidity_MetaData[];
#endif
		static void NewProp_Humidity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Humidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAlpha_MetaData[];
#endif
		static void NewProp_HeightAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HeightAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanHeight_MetaData[];
#endif
		static void NewProp_OceanHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanHeightAlpha_MetaData[];
#endif
		static void NewProp_OceanHeightAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OceanHeightAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MapHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHumidity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOceanHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOceanHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOceanHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideHeight_MetaData[];
#endif
		static void NewProp_OverrideHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeightMapVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolumeInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeightMapVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeightMapVolume_CanSample, "CanSample" }, // 977803016
		{ &Z_Construct_UFunction_AHeightMapVolume_CanSampleMask, "CanSampleMask" }, // 3755137771
		{ &Z_Construct_UFunction_AHeightMapVolume_GetData, "GetData" }, // 1895987069
		{ &Z_Construct_UFunction_AHeightMapVolume_IsHeightDataValid, "IsHeightDataValid" }, // 483439247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code Code" },
		{ "IncludePath", "HeightMapVolume.h" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightMapData_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightMapData = { "HeightMapData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, HeightMapData), Z_Construct_UClass_UHeightMapVolumeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightMapData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod = { "SamplingMethod", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, SamplingMethod), Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod_MetaData)) }; // 2039263761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Height" },
		{ "Comment", "//Does it Affect Height ?\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Does it Affect Height ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->Height = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Temperature" },
		{ "Comment", "//Does it Affect Temperature ?\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Does it Affect Temperature ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->Temperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity_MetaData[] = {
		{ "Category", "Humidity" },
		{ "Comment", "//Does it Affect Humidity ?\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Does it Affect Humidity ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->Humidity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity = { "Humidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "//Use the HeightMap Alpha ?\n" },
		{ "EditCondition", "Height == true||Humidity == true||Temperature == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Use the HeightMap Alpha ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->HeightAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha = { "HeightAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight_MetaData[] = {
		{ "Category", "bOcean" },
		{ "Comment", "//Does it Affect Ocean height ?\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Does it Affect Ocean height ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->OceanHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight = { "OceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha_MetaData[] = {
		{ "Category", "bOcean" },
		{ "Comment", "//Use the Ocean HeightMap Alpha ?\n" },
		{ "EditCondition", "OceanHeight == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Use the Ocean HeightMap Alpha ?" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->OceanHeightAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha = { "OceanHeightAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MapHeight_MetaData[] = {
		{ "Category", "Height" },
		{ "Comment", "//Height of the heightmap (Red Channel)\n" },
		{ "EditCondition", "Height == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Height of the heightmap (Red Channel)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MapHeight = { "MapHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MapHeight), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MapHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Altitude_MetaData[] = {
		{ "Category", "Height" },
		{ "Comment", "//Base Altitude of the heightmap (Red Channel)\n" },
		{ "EditCondition", "Height == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Base Altitude of the heightmap (Red Channel)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, Altitude), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Altitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Altitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxTemperature_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "//Maximum temperature of the heightmap (Green Chanel)\n" },
		{ "EditCondition", "Temperature == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Maximum temperature of the heightmap (Green Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxTemperature = { "MaxTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MaxTemperature), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinTemperature_MetaData[] = {
		{ "Category", "Temperature" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "//Minimum temperature of the heightmap (Green Chanel)\n" },
		{ "EditCondition", "Temperature == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Minimum temperature of the heightmap (Green Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinTemperature = { "MinTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MinTemperature), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxHumidity_MetaData[] = {
		{ "Category", "Humidity" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "//Maximum Humidity of the heightmap (Blue Chanel)\n" },
		{ "EditCondition", "Humidity == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Maximum Humidity of the heightmap (Blue Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxHumidity = { "MaxHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MaxHumidity), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinHumidity_MetaData[] = {
		{ "Category", "Humidity" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "//Minimum Humidity of the heightmap (Blue Chanel)\n" },
		{ "EditCondition", "Humidity == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Minimum Humidity of the heightmap (Blue Chanel)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinHumidity = { "MinHumidity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MinHumidity), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxOceanHeight_MetaData[] = {
		{ "Category", "bOcean" },
		{ "Comment", "//Maximum Height of the heightmap (Red Channel Second Texture)\n" },
		{ "EditCondition", "OceanHeight == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Maximum Height of the heightmap (Red Channel Second Texture)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxOceanHeight = { "MaxOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MaxOceanHeight), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxOceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxOceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinOceanHeight_MetaData[] = {
		{ "Category", "bOcean" },
		{ "Comment", "//Minimum Height of the heightmap (Alpha Channel Second Texture)\n" },
		{ "EditCondition", "OceanHeight == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Minimum Height of the heightmap (Alpha Channel Second Texture)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinOceanHeight = { "MinOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, MinOceanHeight), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinOceanHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinOceanHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_EdgeFalloff_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ClampMax", "0.500000" },
		{ "ClampMin", "0" },
		{ "Comment", "//Ammount of Edge Falloff\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "Ammount of Edge Falloff" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_EdgeFalloff = { "EdgeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHeightMapVolume, EdgeFalloff), METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_EdgeFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_EdgeFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "//When true, override the actual height of the planet, else, it'll simple add/sub the actual height;\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolume.h" },
		{ "ToolTip", "When true, override the actual height of the planet, else, it'll simple add/sub the actual height;" },
	};
#endif
	void Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight_SetBit(void* Obj)
	{
		((AHeightMapVolume*)Obj)->OverrideHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight = { "OverrideHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHeightMapVolume), &Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeightMapVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightMapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_SamplingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Humidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_HeightAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OceanHeightAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_Altitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MaxOceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_MinOceanHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_EdgeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeightMapVolume_Statics::NewProp_OverrideHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeightMapVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeightMapVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeightMapVolume_Statics::ClassParams = {
		&AHeightMapVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeightMapVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeightMapVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeightMapVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeightMapVolume()
	{
		if (!Z_Registration_Info_UClass_AHeightMapVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeightMapVolume.OuterSingleton, Z_Construct_UClass_AHeightMapVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeightMapVolume.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<AHeightMapVolume>()
	{
		return AHeightMapVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeightMapVolume);
	AHeightMapVolume::~AHeightMapVolume() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeightMapVolume, AHeightMapVolume::StaticClass, TEXT("AHeightMapVolume"), &Z_Registration_Info_UClass_AHeightMapVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeightMapVolume), 2783974877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_3318181408(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

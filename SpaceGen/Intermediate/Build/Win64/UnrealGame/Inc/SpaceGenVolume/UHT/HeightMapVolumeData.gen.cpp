// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldScapeVolume/Public/HeightMapVolumeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightMapVolumeData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldScapeVolume();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_UHeightMapVolumeData();
	WORLDSCAPEVOLUME_API UClass* Z_Construct_UClass_UHeightMapVolumeData_NoRegister();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod();
	WORLDSCAPEVOLUME_API UEnum* Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWSHeightMask;
	static UEnum* EWSHeightMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWSHeightMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWSHeightMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("EWSHeightMask"));
		}
		return Z_Registration_Info_UEnum_EWSHeightMask.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EWSHeightMask>()
	{
		return EWSHeightMask_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enumerators[] = {
		{ "EWSHeightMask::Height", (int64)EWSHeightMask::Height },
		{ "EWSHeightMask::Temperature", (int64)EWSHeightMask::Temperature },
		{ "EWSHeightMask::Humidity", (int64)EWSHeightMask::Humidity },
		{ "EWSHeightMask::Alpha", (int64)EWSHeightMask::Alpha },
		{ "EWSHeightMask::OceanHeight", (int64)EWSHeightMask::OceanHeight },
		{ "EWSHeightMask::OceanAlpha", (int64)EWSHeightMask::OceanAlpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.DisplayName", "Alpha" },
		{ "Alpha.Name", "EWSHeightMask::Alpha" },
		{ "BlueprintType", "true" },
		{ "Comment", "//Data of an HeightMap Volume, Can be shared by multiple HeightMap Volume\n//\"BlueprintType\" is essential to include\n" },
		{ "Height.DisplayName", "Height" },
		{ "Height.Name", "EWSHeightMask::Height" },
		{ "Humidity.DisplayName", "Humidity" },
		{ "Humidity.Name", "EWSHeightMask::Humidity" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "OceanAlpha.DisplayName", "OceanAlpha" },
		{ "OceanAlpha.Name", "EWSHeightMask::OceanAlpha" },
		{ "OceanHeight.DisplayName", "OceanHeight" },
		{ "OceanHeight.Name", "EWSHeightMask::OceanHeight" },
		{ "Temperature.DisplayName", "Temperature" },
		{ "Temperature.Name", "EWSHeightMask::Temperature" },
		{ "ToolTip", "Data of an HeightMap Volume, Can be shared by multiple HeightMap Volume\n\"BlueprintType\" is essential to include" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		"EWSHeightMask",
		"EWSHeightMask",
		Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask()
	{
		if (!Z_Registration_Info_UEnum_EWSHeightMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWSHeightMask.InnerSingleton, Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWSHeightMask.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHMTilingMethod;
	static UEnum* EHMTilingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHMTilingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHMTilingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("EHMTilingMethod"));
		}
		return Z_Registration_Info_UEnum_EHMTilingMethod.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EHMTilingMethod>()
	{
		return EHMTilingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enumerators[] = {
		{ "EHMTilingMethod::Wrap", (int64)EHMTilingMethod::Wrap },
		{ "EHMTilingMethod::Clamp", (int64)EHMTilingMethod::Clamp },
		{ "EHMTilingMethod::Mirror", (int64)EHMTilingMethod::Mirror },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clamp.DisplayName", "Clamp" },
		{ "Clamp.Name", "EHMTilingMethod::Clamp" },
		{ "Mirror.DisplayName", "Mirror" },
		{ "Mirror.Name", "EHMTilingMethod::Mirror" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "Wrap.DisplayName", "Wrap" },
		{ "Wrap.Name", "EHMTilingMethod::Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		"EHMTilingMethod",
		"EHMTilingMethod",
		Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod()
	{
		if (!Z_Registration_Info_UEnum_EHMTilingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHMTilingMethod.InnerSingleton, Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHMTilingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHMSamplingMethod;
	static UEnum* EHMSamplingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHMSamplingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHMSamplingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod, Z_Construct_UPackage__Script_WorldScapeVolume(), TEXT("EHMSamplingMethod"));
		}
		return Z_Registration_Info_UEnum_EHMSamplingMethod.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UEnum* StaticEnum<EHMSamplingMethod>()
	{
		return EHMSamplingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enumerators[] = {
		{ "EHMSamplingMethod::Nearest", (int64)EHMSamplingMethod::Nearest },
		{ "EHMSamplingMethod::Bilinear", (int64)EHMSamplingMethod::Bilinear },
		{ "EHMSamplingMethod::Bicubic", (int64)EHMSamplingMethod::Bicubic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enum_MetaDataParams[] = {
		{ "Bicubic.DisplayName", "Bicubic" },
		{ "Bicubic.Name", "EHMSamplingMethod::Bicubic" },
		{ "Bilinear.DisplayName", "Bilinear" },
		{ "Bilinear.Name", "EHMSamplingMethod::Bilinear" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "Nearest.DisplayName", "Nearest" },
		{ "Nearest.Name", "EHMSamplingMethod::Nearest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldScapeVolume,
		nullptr,
		"EHMSamplingMethod",
		"EHMSamplingMethod",
		Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod()
	{
		if (!Z_Registration_Info_UEnum_EHMSamplingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHMSamplingMethod.InnerSingleton, Z_Construct_UEnum_WorldScapeVolume_EHMSamplingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHMSamplingMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execWidth)
	{
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Width(EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execHeight)
	{
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Height(EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execMaskSize)
	{
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MaskSize(EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execIsValidIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_Index,EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execGetStoredValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(EWSHeightMask,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStoredValue(Z_Param_Index,EWSHeightMask(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execBuildOceanTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BuildOceanTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execBuildTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BuildTexture();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UHeightMapVolumeData::execCleanData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeightMapVolumeData::execGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generate();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UHeightMapVolumeData::StaticRegisterNativesUHeightMapVolumeData()
	{
		UClass* Class = UHeightMapVolumeData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildOceanTexture", &UHeightMapVolumeData::execBuildOceanTexture },
			{ "BuildTexture", &UHeightMapVolumeData::execBuildTexture },
#if WITH_EDITOR
			{ "CleanData", &UHeightMapVolumeData::execCleanData },
			{ "Generate", &UHeightMapVolumeData::execGenerate },
#endif // WITH_EDITOR
			{ "GetStoredValue", &UHeightMapVolumeData::execGetStoredValue },
			{ "Height", &UHeightMapVolumeData::execHeight },
			{ "IsValidIndex", &UHeightMapVolumeData::execIsValidIndex },
			{ "MaskSize", &UHeightMapVolumeData::execMaskSize },
			{ "Width", &UHeightMapVolumeData::execWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics
	{
		struct HeightMapVolumeData_eventBuildOceanTexture_Parms
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
	void Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolumeData_eventBuildOceanTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolumeData_eventBuildOceanTexture_Parms), &Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "BuildOceanTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::HeightMapVolumeData_eventBuildOceanTexture_Parms), Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics
	{
		struct HeightMapVolumeData_eventBuildTexture_Parms
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
	void Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolumeData_eventBuildTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolumeData_eventBuildTexture_Parms), &Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "BuildTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::HeightMapVolumeData_eventBuildTexture_Parms), Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "CleanData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_CleanData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_CleanData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "Generate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics
	{
		struct HeightMapVolumeData_eventGetStoredValue_Parms
		{
			int32 Index;
			EWSHeightMask Mask;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventGetStoredValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventGetStoredValue_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventGetStoredValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "GetStoredValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::HeightMapVolumeData_eventGetStoredValue_Parms), Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics
	{
		struct HeightMapVolumeData_eventHeight_Parms
		{
			EWSHeightMask Mask;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventHeight_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "Height", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::HeightMapVolumeData_eventHeight_Parms), Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_Height()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_Height_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics
	{
		struct HeightMapVolumeData_eventIsValidIndex_Parms
		{
			int32 Index;
			EWSHeightMask Mask;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventIsValidIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventIsValidIndex_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	void Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapVolumeData_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeightMapVolumeData_eventIsValidIndex_Parms), &Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "IsValidIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::HeightMapVolumeData_eventIsValidIndex_Parms), Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics
	{
		struct HeightMapVolumeData_eventMaskSize_Parms
		{
			EWSHeightMask Mask;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventMaskSize_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventMaskSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "MaskSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::HeightMapVolumeData_eventMaskSize_Parms), Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_MaskSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_MaskSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics
	{
		struct HeightMapVolumeData_eventWidth_Parms
		{
			EWSHeightMask Mask;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventWidth_Parms, Mask), Z_Construct_UEnum_WorldScapeVolume_EWSHeightMask, METADATA_PARAMS(nullptr, 0) }; // 2389258652
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeightMapVolumeData_eventWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::Function_MetaDataParams[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeightMapVolumeData, nullptr, "Width", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::HeightMapVolumeData_eventWidth_Parms), Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeightMapVolumeData_Width()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeightMapVolumeData_Width_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightMapVolumeData);
	UClass* Z_Construct_UClass_UHeightMapVolumeData_NoRegister()
	{
		return UHeightMapVolumeData::StaticClass();
	}
	struct Z_Construct_UClass_UHeightMapVolumeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapOcean_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMapOcean;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightXTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightXTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightXTiling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightYTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightYTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightYTiling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OceanXTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanXTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OceanXTiling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OceanYTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanYTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OceanYTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHeightMap_MetaData[];
#endif
		static void NewProp_bIgnoreHeightMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTemperature_MetaData[];
#endif
		static void NewProp_bIgnoreTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHumidity_MetaData[];
#endif
		static void NewProp_bIgnoreHumidity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHumidity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlpha_MetaData[];
#endif
		static void NewProp_bIgnoreAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOceanHeightMap_MetaData[];
#endif
		static void NewProp_bIgnoreOceanHeightMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOceanHeightMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOceanAlpha_MetaData[];
#endif
		static void NewProp_bIgnoreOceanAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOceanAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeightResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeightResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTemperatureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTemperatureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHumidityResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHumidityResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAlphaResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAlphaResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOceanHeightResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOceanHeightResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOceanAlphaResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOceanAlphaResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataVersion;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredHeightMapData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredHeightMapData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredHeightMapData;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredTemperatureData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredTemperatureData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredTemperatureData;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredHumidityData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredHumidityData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredHumidityData;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredHeightMapAlphaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredHeightMapAlphaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredHeightMapAlphaData;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredWaterHeightMapData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredWaterHeightMapData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredWaterHeightMapData;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StoredWaterHeightMapAlphaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredWaterHeightMapAlphaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoredWaterHeightMapAlphaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOcean_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HeightOcean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthOcean_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_WidthOcean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanedUpdated_MetaData[];
#endif
		static void NewProp_PlanedUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlanedUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightMapVolumeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldScapeVolume,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeightMapVolumeData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeightMapVolumeData_BuildOceanTexture, "BuildOceanTexture" }, // 2242020123
		{ &Z_Construct_UFunction_UHeightMapVolumeData_BuildTexture, "BuildTexture" }, // 941576830
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UHeightMapVolumeData_CleanData, "CleanData" }, // 2455047922
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UHeightMapVolumeData_Generate, "Generate" }, // 689845440
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UHeightMapVolumeData_GetStoredValue, "GetStoredValue" }, // 636018167
		{ &Z_Construct_UFunction_UHeightMapVolumeData_Height, "Height" }, // 851949771
		{ &Z_Construct_UFunction_UHeightMapVolumeData_IsValidIndex, "IsValidIndex" }, // 236481428
		{ &Z_Construct_UFunction_UHeightMapVolumeData_MaskSize, "MaskSize" }, // 1595295429
		{ &Z_Construct_UFunction_UHeightMapVolumeData_Width, "Width" }, // 124559386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Code" },
		{ "IncludePath", "HeightMapVolumeData.h" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMap_MetaData[] = {
		{ "Category", "Texture" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, HeightMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMapOcean_MetaData[] = {
		{ "Category", "Texture" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMapOcean = { "HeightMapOcean", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, HeightMapOcean), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMapOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMapOcean_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling = { "HeightXTiling", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, HeightXTiling), Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling_MetaData)) }; // 769985015
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling = { "HeightYTiling", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, HeightYTiling), Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling_MetaData)) }; // 769985015
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling = { "OceanXTiling", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, OceanXTiling), Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling_MetaData)) }; // 769985015
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling = { "OceanYTiling", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, OceanYTiling), Z_Construct_UEnum_WorldScapeVolume_EHMTilingMethod, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling_MetaData)) }; // 769985015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreHeightMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap = { "bIgnoreHeightMap", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature = { "bIgnoreTemperature", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreHumidity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity = { "bIgnoreHumidity", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha = { "bIgnoreAlpha", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreOceanHeightMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap = { "bIgnoreOceanHeightMap", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha_MetaData[] = {
		{ "Category", "TextureInfo" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->bIgnoreOceanAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha = { "bIgnoreOceanAlpha", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHeightResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for height values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for height values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHeightResolution = { "MaxHeightResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxHeightResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHeightResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHeightResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxTemperatureResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for Temperature values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for Temperature values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxTemperatureResolution = { "MaxTemperatureResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxTemperatureResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxTemperatureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxTemperatureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHumidityResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for Humidity values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for Humidity values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHumidityResolution = { "MaxHumidityResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxHumidityResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHumidityResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHumidityResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxAlphaResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for Alpha values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for Alpha values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxAlphaResolution = { "MaxAlphaResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxAlphaResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxAlphaResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxAlphaResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanHeightResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for Ocean Height values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for Ocean Height values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanHeightResolution = { "MaxOceanHeightResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxOceanHeightResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanHeightResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanHeightResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanAlphaResolution_MetaData[] = {
		{ "Category", "TextureInfo|CustomResolution" },
		{ "Comment", "//Resolution in pixel of the sampled map for Ocean Alpha values (0 mean no limits)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Resolution in pixel of the sampled map for Ocean Alpha values (0 mean no limits)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanAlphaResolution = { "MaxOceanAlphaResolution", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, MaxOceanAlphaResolution), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanAlphaResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanAlphaResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_DataVersion_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, DataVersion), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_DataVersion_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData_Inner = { "StoredHeightMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Heightmap\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Heightmap" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData = { "StoredHeightMapData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredHeightMapData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData_Inner = { "StoredTemperatureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Temperature\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Temperature" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData = { "StoredTemperatureData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredTemperatureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData_Inner = { "StoredHumidityData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Humidity\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Humidity" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData = { "StoredHumidityData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredHumidityData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData_Inner = { "StoredHeightMapAlphaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Heightmap Alpha\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Heightmap Alpha" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData = { "StoredHeightMapAlphaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredHeightMapAlphaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData_Inner = { "StoredWaterHeightMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Water Heightmap\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Water Heightmap" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData = { "StoredWaterHeightMapData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredWaterHeightMapData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData_Inner = { "StoredWaterHeightMapAlphaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData_MetaData[] = {
		{ "Category", "Code" },
		{ "Comment", "//Sampled Water Heightmap Alpha\n" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
		{ "ToolTip", "Sampled Water Heightmap Alpha" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData = { "StoredWaterHeightMapAlphaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, StoredWaterHeightMapAlphaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseHeight_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseHeight = { "BaseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, BaseHeight), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseWidth_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseWidth = { "BaseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, BaseWidth), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightOcean_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightOcean = { "HeightOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, HeightOcean), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightOcean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_WidthOcean_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_WidthOcean = { "WidthOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightMapVolumeData, WidthOcean), METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_WidthOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_WidthOcean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/HeightMapVolumeData.h" },
	};
#endif
	void Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated_SetBit(void* Obj)
	{
		((UHeightMapVolumeData*)Obj)->PlanedUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated = { "PlanedUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHeightMapVolumeData), &Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightMapVolumeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightMapOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightXTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightYTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanXTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_OceanYTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreHumidity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanHeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_bIgnoreOceanAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHeightResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxTemperatureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxHumidityResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxAlphaResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanHeightResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_MaxOceanAlphaResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_DataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredTemperatureData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHumidityData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredHeightMapAlphaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_StoredWaterHeightMapAlphaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_BaseWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_HeightOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_WidthOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightMapVolumeData_Statics::NewProp_PlanedUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightMapVolumeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapVolumeData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightMapVolumeData_Statics::ClassParams = {
		&UHeightMapVolumeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeightMapVolumeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightMapVolumeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightMapVolumeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightMapVolumeData()
	{
		if (!Z_Registration_Info_UClass_UHeightMapVolumeData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapVolumeData.OuterSingleton, Z_Construct_UClass_UHeightMapVolumeData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightMapVolumeData.OuterSingleton;
	}
	template<> WORLDSCAPEVOLUME_API UClass* StaticClass<UHeightMapVolumeData>()
	{
		return UHeightMapVolumeData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightMapVolumeData);
	UHeightMapVolumeData::~UHeightMapVolumeData() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::EnumInfo[] = {
		{ EWSHeightMask_StaticEnum, TEXT("EWSHeightMask"), &Z_Registration_Info_UEnum_EWSHeightMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2389258652U) },
		{ EHMTilingMethod_StaticEnum, TEXT("EHMTilingMethod"), &Z_Registration_Info_UEnum_EHMTilingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 769985015U) },
		{ EHMSamplingMethod_StaticEnum, TEXT("EHMSamplingMethod"), &Z_Registration_Info_UEnum_EHMSamplingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2039263761U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapVolumeData, UHeightMapVolumeData::StaticClass, TEXT("UHeightMapVolumeData"), &Z_Registration_Info_UClass_UHeightMapVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapVolumeData), 682920548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_3793564870(TEXT("/Script/WorldScapeVolume"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_WorldScape_Source_WorldScapeVolume_Public_HeightMapVolumeData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

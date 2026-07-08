// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsAndProd/FUserHardwareData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFUserHardwareData() {}

// ********** Begin Cross Module References ********************************************************
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FUserHardwareData();
UPackage* Z_Construct_UPackage__Script_ToolsAndProd();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUserHardwareData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUserHardwareData;
class UScriptStruct* FUserHardwareData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUserHardwareData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUserHardwareData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserHardwareData, (UObject*)Z_Construct_UPackage__Script_ToolsAndProd(), TEXT("UserHardwareData"));
	}
	return Z_Registration_Info_UScriptStruct_FUserHardwareData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUserHardwareData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUBrand_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUCoreCount_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUBrand_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_renderingPlatform_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_totalPhysicalRAM_GB_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSVersion_MetaData[] = {
		{ "ModuleRelativePath", "FUserHardwareData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPUBrand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPUCoreCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GPUBrand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_renderingPlatform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_totalPhysicalRAM_GB;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OSVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserHardwareData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_CPUBrand = { "CPUBrand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, CPUBrand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUBrand_MetaData), NewProp_CPUBrand_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_CPUCoreCount = { "CPUCoreCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, CPUCoreCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUCoreCount_MetaData), NewProp_CPUCoreCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_GPUBrand = { "GPUBrand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, GPUBrand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUBrand_MetaData), NewProp_GPUBrand_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_renderingPlatform = { "renderingPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, renderingPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_renderingPlatform_MetaData), NewProp_renderingPlatform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_totalPhysicalRAM_GB = { "totalPhysicalRAM_GB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, totalPhysicalRAM_GB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_totalPhysicalRAM_GB_MetaData), NewProp_totalPhysicalRAM_GB_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_OSVersion = { "OSVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserHardwareData, OSVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSVersion_MetaData), NewProp_OSVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserHardwareData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_CPUBrand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_CPUCoreCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_GPUBrand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_renderingPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_totalPhysicalRAM_GB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewProp_OSVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserHardwareData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserHardwareData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsAndProd,
	nullptr,
	&NewStructOps,
	"UserHardwareData",
	Z_Construct_UScriptStruct_FUserHardwareData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserHardwareData_Statics::PropPointers),
	sizeof(FUserHardwareData),
	alignof(FUserHardwareData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserHardwareData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserHardwareData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserHardwareData()
{
	if (!Z_Registration_Info_UScriptStruct_FUserHardwareData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUserHardwareData.InnerSingleton, Z_Construct_UScriptStruct_FUserHardwareData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUserHardwareData.InnerSingleton;
}
// ********** End ScriptStruct FUserHardwareData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FUserHardwareData_h__Script_ToolsAndProd_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserHardwareData::StaticStruct, Z_Construct_UScriptStruct_FUserHardwareData_Statics::NewStructOps, TEXT("UserHardwareData"), &Z_Registration_Info_UScriptStruct_FUserHardwareData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserHardwareData), 2324100976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FUserHardwareData_h__Script_ToolsAndProd_2788737310(TEXT("/Script/ToolsAndProd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FUserHardwareData_h__Script_ToolsAndProd_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FUserHardwareData_h__Script_ToolsAndProd_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

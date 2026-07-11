// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsAndProd/FCombinedUserData.h"
#include "ToolsAndProd/FCombined_QA.h"
#include "ToolsAndProd/FUserHardwareData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFCombinedUserData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FCombined_QA();
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedUserData();
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FUserHardwareData();
UPackage* Z_Construct_UPackage__Script_ToolsAndProd();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombinedUserData *************************************************
static_assert(std::is_polymorphic<FCombinedUserData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombinedUserData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombinedUserData;
class UScriptStruct* FCombinedUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombinedUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombinedUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombinedUserData, (UObject*)Z_Construct_UPackage__Script_ToolsAndProd(), TEXT("CombinedUserData"));
	}
	return Z_Registration_Info_UScriptStruct_FCombinedUserData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCombinedUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FCombinedUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[] = {
		{ "Category", "CombinedUserData" },
		{ "ModuleRelativePath", "FCombinedUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timePlayed_MetaData[] = {
		{ "Category", "CombinedUserData" },
		{ "ModuleRelativePath", "FCombinedUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_userHardwareData_MetaData[] = {
		{ "Category", "CombinedUserData" },
		{ "ModuleRelativePath", "FCombinedUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_combined_QA_MetaData[] = {
		{ "Category", "CombinedUserData" },
		{ "ModuleRelativePath", "FCombinedUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_timePlayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_userHardwareData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_combined_QA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombinedUserData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedUserData, fileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileName_MetaData), NewProp_fileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_timePlayed = { "timePlayed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedUserData, timePlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timePlayed_MetaData), NewProp_timePlayed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_userHardwareData = { "userHardwareData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedUserData, userHardwareData), Z_Construct_UScriptStruct_FUserHardwareData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_userHardwareData_MetaData), NewProp_userHardwareData_MetaData) }; // 1236910932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_combined_QA = { "combined_QA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombinedUserData, combined_QA), Z_Construct_UScriptStruct_FCombined_QA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_combined_QA_MetaData), NewProp_combined_QA_MetaData) }; // 2852428177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombinedUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_fileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_timePlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_userHardwareData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewProp_combined_QA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombinedUserData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsAndProd,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CombinedUserData",
	Z_Construct_UScriptStruct_FCombinedUserData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedUserData_Statics::PropPointers),
	sizeof(FCombinedUserData),
	alignof(FCombinedUserData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombinedUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombinedUserData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombinedUserData()
{
	if (!Z_Registration_Info_UScriptStruct_FCombinedUserData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombinedUserData.InnerSingleton, Z_Construct_UScriptStruct_FCombinedUserData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCombinedUserData.InnerSingleton;
}
// ********** End ScriptStruct FCombinedUserData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FCombinedUserData_h__Script_ToolsAndProd_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombinedUserData::StaticStruct, Z_Construct_UScriptStruct_FCombinedUserData_Statics::NewStructOps, TEXT("CombinedUserData"), &Z_Registration_Info_UScriptStruct_FCombinedUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombinedUserData), 2401722569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FCombinedUserData_h__Script_ToolsAndProd_2785722816(TEXT("/Script/ToolsAndProd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FCombinedUserData_h__Script_ToolsAndProd_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FCombinedUserData_h__Script_ToolsAndProd_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsAndProd/FSingle_QA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFSingle_QA() {}

// ********** Begin Cross Module References ********************************************************
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FSingle_QA();
UPackage* Z_Construct_UPackage__Script_ToolsAndProd();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSingle_QA ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSingle_QA;
class UScriptStruct* FSingle_QA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSingle_QA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSingle_QA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingle_QA, (UObject*)Z_Construct_UPackage__Script_ToolsAndProd(), TEXT("Single_QA"));
	}
	return Z_Registration_Info_UScriptStruct_FSingle_QA.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSingle_QA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FSingle_QA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Question_MetaData[] = {
		{ "Category", "Single_QA" },
		{ "ModuleRelativePath", "FSingle_QA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Answer_MetaData[] = {
		{ "Category", "Single_QA" },
		{ "ModuleRelativePath", "FSingle_QA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Question;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Answer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingle_QA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSingle_QA_Statics::NewProp_Question = { "Question", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingle_QA, Question), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Question_MetaData), NewProp_Question_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSingle_QA_Statics::NewProp_Answer = { "Answer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingle_QA, Answer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Answer_MetaData), NewProp_Answer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingle_QA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingle_QA_Statics::NewProp_Question,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingle_QA_Statics::NewProp_Answer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingle_QA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingle_QA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsAndProd,
	nullptr,
	&NewStructOps,
	"Single_QA",
	Z_Construct_UScriptStruct_FSingle_QA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingle_QA_Statics::PropPointers),
	sizeof(FSingle_QA),
	alignof(FSingle_QA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingle_QA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSingle_QA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSingle_QA()
{
	if (!Z_Registration_Info_UScriptStruct_FSingle_QA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSingle_QA.InnerSingleton, Z_Construct_UScriptStruct_FSingle_QA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSingle_QA.InnerSingleton;
}
// ********** End ScriptStruct FSingle_QA **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FSingle_QA_h__Script_ToolsAndProd_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSingle_QA::StaticStruct, Z_Construct_UScriptStruct_FSingle_QA_Statics::NewStructOps, TEXT("Single_QA"), &Z_Registration_Info_UScriptStruct_FSingle_QA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingle_QA), 3963026017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FSingle_QA_h__Script_ToolsAndProd_1407249727(TEXT("/Script/ToolsAndProd"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FSingle_QA_h__Script_ToolsAndProd_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_FSingle_QA_h__Script_ToolsAndProd_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

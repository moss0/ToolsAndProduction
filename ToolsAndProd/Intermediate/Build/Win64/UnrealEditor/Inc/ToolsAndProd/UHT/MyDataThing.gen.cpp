// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsAndProd/MyDataThing.h"
#include "ToolsAndProd/FCombined_QA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyDataThing() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TOOLSANDPROD_API UClass* Z_Construct_UClass_UMyDataThing();
TOOLSANDPROD_API UClass* Z_Construct_UClass_UMyDataThing_NoRegister();
TOOLSANDPROD_API UScriptStruct* Z_Construct_UScriptStruct_FCombined_QA();
UPackage* Z_Construct_UPackage__Script_ToolsAndProd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyDataThing Function CSV_MakerAndSender *********************************
struct Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics
{
	struct MyDataThing_eventCSV_MakerAndSender_Parms
	{
		float secondsPlayed;
		FCombined_QA combined_QA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyDataFileMakers" },
		{ "ModuleRelativePath", "MyDataThing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_combined_QA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_secondsPlayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_combined_QA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::NewProp_secondsPlayed = { "secondsPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDataThing_eventCSV_MakerAndSender_Parms, secondsPlayed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::NewProp_combined_QA = { "combined_QA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDataThing_eventCSV_MakerAndSender_Parms, combined_QA), Z_Construct_UScriptStruct_FCombined_QA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_combined_QA_MetaData), NewProp_combined_QA_MetaData) }; // 2852428177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::NewProp_secondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::NewProp_combined_QA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyDataThing, nullptr, "CSV_MakerAndSender", Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::MyDataThing_eventCSV_MakerAndSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::MyDataThing_eventCSV_MakerAndSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyDataThing::execCSV_MakerAndSender)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_secondsPlayed);
	P_GET_STRUCT(FCombined_QA,Z_Param_combined_QA);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyDataThing::CSV_MakerAndSender(Z_Param_secondsPlayed,Z_Param_combined_QA);
	P_NATIVE_END;
}
// ********** End Class UMyDataThing Function CSV_MakerAndSender ***********************************

// ********** Begin Class UMyDataThing Function JsonMakerAndSender *********************************
struct Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics
{
	struct MyDataThing_eventJsonMakerAndSender_Parms
	{
		float secondsPlayed;
		FCombined_QA combined_QA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyDataFileMakers" },
		{ "ModuleRelativePath", "MyDataThing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_combined_QA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_secondsPlayed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_combined_QA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::NewProp_secondsPlayed = { "secondsPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDataThing_eventJsonMakerAndSender_Parms, secondsPlayed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::NewProp_combined_QA = { "combined_QA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyDataThing_eventJsonMakerAndSender_Parms, combined_QA), Z_Construct_UScriptStruct_FCombined_QA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_combined_QA_MetaData), NewProp_combined_QA_MetaData) }; // 2852428177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::NewProp_secondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::NewProp_combined_QA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyDataThing, nullptr, "JsonMakerAndSender", Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::MyDataThing_eventJsonMakerAndSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::MyDataThing_eventJsonMakerAndSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyDataThing::execJsonMakerAndSender)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_secondsPlayed);
	P_GET_STRUCT(FCombined_QA,Z_Param_combined_QA);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMyDataThing::JsonMakerAndSender(Z_Param_secondsPlayed,Z_Param_combined_QA);
	P_NATIVE_END;
}
// ********** End Class UMyDataThing Function JsonMakerAndSender ***********************************

// ********** Begin Class UMyDataThing *************************************************************
void UMyDataThing::StaticRegisterNativesUMyDataThing()
{
	UClass* Class = UMyDataThing::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CSV_MakerAndSender", &UMyDataThing::execCSV_MakerAndSender },
		{ "JsonMakerAndSender", &UMyDataThing::execJsonMakerAndSender },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyDataThing;
UClass* UMyDataThing::GetPrivateStaticClass()
{
	using TClass = UMyDataThing;
	if (!Z_Registration_Info_UClass_UMyDataThing.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyDataThing"),
			Z_Registration_Info_UClass_UMyDataThing.InnerSingleton,
			StaticRegisterNativesUMyDataThing,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMyDataThing.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyDataThing_NoRegister()
{
	return UMyDataThing::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyDataThing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyDataThing.h" },
		{ "ModuleRelativePath", "MyDataThing.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyDataThing_CSV_MakerAndSender, "CSV_MakerAndSender" }, // 4233582681
		{ &Z_Construct_UFunction_UMyDataThing_JsonMakerAndSender, "JsonMakerAndSender" }, // 1755141674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDataThing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyDataThing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsAndProd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataThing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyDataThing_Statics::ClassParams = {
	&UMyDataThing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataThing_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyDataThing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyDataThing()
{
	if (!Z_Registration_Info_UClass_UMyDataThing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyDataThing.OuterSingleton, Z_Construct_UClass_UMyDataThing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyDataThing.OuterSingleton;
}
UMyDataThing::UMyDataThing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDataThing);
UMyDataThing::~UMyDataThing() {}
// ********** End Class UMyDataThing ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_MyDataThing_h__Script_ToolsAndProd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyDataThing, UMyDataThing::StaticClass, TEXT("UMyDataThing"), &Z_Registration_Info_UClass_UMyDataThing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyDataThing), 549749191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_MyDataThing_h__Script_ToolsAndProd_3449925430(TEXT("/Script/ToolsAndProd"),
	Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_MyDataThing_h__Script_ToolsAndProd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ToolsAndProduction_ToolsAndProd_Source_ToolsAndProd_MyDataThing_h__Script_ToolsAndProd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

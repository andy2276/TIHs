// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHStationCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHStationCore() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHTestPawn();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHTestPawn_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDataRefParameter();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandReferenceData();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter;
class UScriptStruct* FTIHCommandDataRefParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandDataRefParameter"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandDataRefParameter>()
{
	return FTIHCommandDataRefParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataRefType_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataRefType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataRefIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataRefIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xed\x97\xa4\xeb\x8d\x94\xec\x99\x80 \xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xec\x95\xa1\xec\x85\x98\xec\x9d\x80 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4.\n\x09\xea\xb5\xac\xec\x84\xb1\xec\x9d\x84 \xec\xa0\x84\xeb\x8b\xac\xed\x95\xa0\xeb\x95\x8c\xeb\x8a\x94 \xeb\xa0\x88\xed\x8d\xbc\xeb\x9f\xb0\xec\x8a\xa4\xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4. \xec\x9d\xbd\xea\xb8\xb0 \xec\xa0\x84\xec\x9a\xa9\xec\x9d\xb4 \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb8\xb0\xeb\x8a\x94\xed\x95\x9c\xeb\x8d\xb0, \xec\x86\x94\xec\xa7\x81\xed\x9e\x88 \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\xb4 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xea\xb2\x8c \xec\xa2\x80 \xec\x95\xa0\xeb\xb0\x94\xeb\x8b\xa4.\n\n\n\x09\xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c\xeb\x8a\x94 \xec\x83\x81\xec\x86\x8d\xec\x9c\xbc\xeb\xa1\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09\xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c\xeb\x8a\x94 \xeb\xb2\x84\xec\xb6\x94\xec\x96\xbc\xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94\xec\x9d\xb4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x98\xea\xb8\xb0\xec\xa0\x84\xec\x97\x90 \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xed\x97\xa4\xeb\x8d\x94\xec\x99\x80 \xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c \xec\x95\xa1\xec\x85\x98\xec\x9d\x80 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c \xeb\xa7\x8c\xeb\x93\xa0\xeb\x8b\xa4.\n\xea\xb5\xac\xec\x84\xb1\xec\x9d\x84 \xec\xa0\x84\xeb\x8b\xac\xed\x95\xa0\xeb\x95\x8c\xeb\x8a\x94 \xeb\xa0\x88\xed\x8d\xbc\xeb\x9f\xb0\xec\x8a\xa4\xeb\xa5\xbc \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4. \xec\x9d\xbd\xea\xb8\xb0 \xec\xa0\x84\xec\x9a\xa9\xec\x9d\xb4 \xeb\xb9\xa0\xeb\xa5\xb4\xea\xb8\xb0\xeb\x8a\x94\xed\x95\x9c\xeb\x8d\xb0, \xec\x86\x94\xec\xa7\x81\xed\x9e\x88 \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\xb4 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c\xea\xb2\x8c \xec\xa2\x80 \xec\x95\xa0\xeb\xb0\x94\xeb\x8b\xa4.\n\n\n\xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c\xeb\x8a\x94 \xec\x83\x81\xec\x86\x8d\xec\x9c\xbc\xeb\xa1\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\x9c\xeb\x8b\xa4.\n        \xec\xbb\xa4\xeb\xa7\xa8\xeb\x93\x9c\xeb\x8a\x94 \xeb\xb2\x84\xec\xb6\x94\xec\x96\xbc\xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94\xec\x9d\xb4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x98\xea\xb8\xb0\xec\xa0\x84\xec\x97\x90 \xec\xb2\x98\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8f\x84\xeb\xa1\x9d\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandDataRefParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefType = { "DataRefType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandDataRefParameter, DataRefType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefType_MetaData), Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefIndex = { "DataRefIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandDataRefParameter, DataRefIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewProp_DataRefIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandDataRefParameter",
		Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::PropPointers),
		sizeof(FTIHCommandDataRefParameter),
		alignof(FTIHCommandDataRefParameter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDataRefParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandReferenceData;
class UScriptStruct* FTIHCommandReferenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandReferenceData, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandReferenceData"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandReferenceData>()
{
	return FTIHCommandReferenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int64Array;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandReferenceData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array_Inner = { "Int64Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array = { "Int64Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, Int64Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray_Inner = { "DoubleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray = { "DoubleArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, DoubleArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray_Inner = { "TransformArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray = { "TransformArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, TransformArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandReferenceData, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray_MetaData), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int32Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_Int64Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_DoubleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_TransformArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewProp_StringArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandReferenceData",
		Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::PropPointers),
		sizeof(FTIHCommandReferenceData),
		alignof(FTIHCommandReferenceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandReferenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandReferenceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas;
class UScriptStruct* FTIHCommandTestDelayDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandTestDelayDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandTestDelayDatas>()
{
	return FTIHCommandTestDelayDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test00_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Test00;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test01_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Test01;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test02_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Test02;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test03_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Test03;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\n\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""FTIHCommandTestDelayDatas\n\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\x09----\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----\n                                                                                                FTIHCommandTestDelayDatas\n----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----    ----" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandTestDelayDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test00_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test00 = { "Test00", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandTestDelayDatas, Test00), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test00_MetaData), Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test00_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test01_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test01 = { "Test01", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandTestDelayDatas, Test01), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test01_MetaData), Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test01_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test02_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test02 = { "Test02", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandTestDelayDatas, Test02), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test02_MetaData), Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test02_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test03_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test03 = { "Test03", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandTestDelayDatas, Test03), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test03_MetaData), Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test03_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test00,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test01,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewProp_Test03,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandTestDelayDatas",
		Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::PropPointers),
		sizeof(FTIHCommandTestDelayDatas),
		alignof(FTIHCommandTestDelayDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas.InnerSingleton;
	}
	void ATIHTestPawn::StaticRegisterNativesATIHTestPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHTestPawn);
	UClass* Z_Construct_UClass_ATIHTestPawn_NoRegister()
	{
		return ATIHTestPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATIHTestPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHTestPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHTestPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHTestPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TIHStationCore.h" },
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHTestPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHTestPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHTestPawn_Statics::ClassParams = {
		&ATIHTestPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHTestPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHTestPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHTestPawn()
	{
		if (!Z_Registration_Info_UClass_ATIHTestPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHTestPawn.OuterSingleton, Z_Construct_UClass_ATIHTestPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHTestPawn.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<ATIHTestPawn>()
	{
		return ATIHTestPawn::StaticClass();
	}
	ATIHTestPawn::ATIHTestPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHTestPawn);
	ATIHTestPawn::~ATIHTestPawn() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo[] = {
		{ FTIHCommandDataRefParameter::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewStructOps, TEXT("TIHCommandDataRefParameter"), &Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandDataRefParameter), 3023450043U) },
		{ FTIHCommandReferenceData::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewStructOps, TEXT("TIHCommandReferenceData"), &Z_Registration_Info_UScriptStruct_TIHCommandReferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandReferenceData), 2409184653U) },
		{ FTIHCommandTestDelayDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewStructOps, TEXT("TIHCommandTestDelayDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandTestDelayDatas), 2838461347U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHTestPawn, ATIHTestPawn::StaticClass, TEXT("ATIHTestPawn"), &Z_Registration_Info_UClass_ATIHTestPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHTestPawn), 37092845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_1151198784(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

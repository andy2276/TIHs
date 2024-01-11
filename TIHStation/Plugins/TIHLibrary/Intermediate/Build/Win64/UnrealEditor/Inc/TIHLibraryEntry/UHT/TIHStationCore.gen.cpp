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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDataRefParameter();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandMethod();
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
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandHeader;
class UScriptStruct* FTIHCommandHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandHeader>()
{
	return FTIHCommandHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProtocolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option0_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Option0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option1_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Option1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0 = { "Option0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Option0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1 = { "Option1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Option1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandHeader",
		Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::PropPointers),
		sizeof(FTIHCommandHeader),
		alignof(FTIHCommandHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandMethod;
class UScriptStruct* FTIHCommandMethod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandMethod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandMethod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandMethod, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandMethod"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandMethod.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandMethod>()
{
	return FTIHCommandMethod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandMethod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProtocolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteMethodType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ExecuteMethodType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MethodAddtionalInfoIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MethodAddtionalInfoIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandMethod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_Protocol_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ProtocolOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09{Async,Tickable,Contine,Check}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{Async,Tickable,Contine,Check}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ExecuteMethodType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ExecuteMethodType = { "ExecuteMethodType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, ExecuteMethodType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ExecuteMethodType_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ExecuteMethodType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_MethodAddtionalInfoIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09{CommandInFunc,StrategyFunc,DelegateFunc,}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{CommandInFunc,StrategyFunc,DelegateFunc,}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_MethodAddtionalInfoIndex = { "MethodAddtionalInfoIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, MethodAddtionalInfoIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_MethodAddtionalInfoIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_MethodAddtionalInfoIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ProtocolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_ExecuteMethodType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_MethodAddtionalInfoIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandMethod",
		Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::PropPointers),
		sizeof(FTIHCommandMethod),
		alignof(FTIHCommandMethod),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandMethod()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandMethod.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandMethod.InnerSingleton;
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas;
class UScriptStruct* FTIHCommandCreateAssignPoolDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandCreateAssignPoolDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandCreateAssignPoolDatas>()
{
	return FTIHCommandCreateAssignPoolDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolMask_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PoolMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PoolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandCreateAssignPoolDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType = { "CreateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, CreateType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask = { "PoolMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, PoolMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption = { "PoolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, PoolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount = { "DataCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption = { "DataOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandCreateAssignPoolDatas",
		Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers),
		sizeof(FTIHCommandCreateAssignPoolDatas),
		alignof(FTIHCommandCreateAssignPoolDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas;
class UScriptStruct* FTIHCommandCreateNewAllocDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandCreateNewAllocDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandCreateNewAllocDatas>()
{
	return FTIHCommandCreateNewAllocDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAllocType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_NewAllocType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAllocOption0_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_NewAllocOption0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAllocOption1_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_NewAllocOption1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAllocCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_NewAllocCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAllocOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_NewAllocOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandCreateNewAllocDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_CreateType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_CreateType = { "CreateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, CreateType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_CreateType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_CreateType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocType = { "NewAllocType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, NewAllocType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption0 = { "NewAllocOption0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, NewAllocOption0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption0_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption1_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption1 = { "NewAllocOption1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, NewAllocOption1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption1_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocCount = { "NewAllocCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, NewAllocCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocCount_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption = { "NewAllocOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateNewAllocDatas, NewAllocOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_CreateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewProp_NewAllocOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandCreateNewAllocDatas",
		Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::PropPointers),
		sizeof(FTIHCommandCreateNewAllocDatas),
		alignof(FTIHCommandCreateNewAllocDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas.InnerSingleton;
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
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
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
	void UTIHCommandFactoryConfigure::StaticRegisterNativesUTIHCommandFactoryConfigure()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHCommandFactoryConfigure);
	UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure_NoRegister()
	{
		return UTIHCommandFactoryConfigure::StaticClass();
	}
	struct Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFactorySettingType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_mFactorySettingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFactorySettingTypeOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_mFactorySettingTypeOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFactoryReserveSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_mFactoryReserveSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mIsRogginEnabledOnRuntime_MetaData[];
#endif
		static void NewProp_mIsRogginEnabledOnRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mIsRogginEnabledOnRuntime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mIsRoggingEnabledOnSaveing_MetaData[];
#endif
		static void NewProp_mIsRoggingEnabledOnSaveing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mIsRoggingEnabledOnSaveing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mIsRoggingEnabledPassToServer_MetaData[];
#endif
		static void NewProp_mIsRoggingEnabledPassToServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mIsRoggingEnabledPassToServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mIsRoggingEnabledForDebuging_MetaData[];
#endif
		static void NewProp_mIsRoggingEnabledForDebuging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mIsRoggingEnabledForDebuging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRoggingSavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mRoggingSavePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRoggingServerUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mRoggingServerUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n\x09*\x09@brief commandFactoryConfigure\n\x09*\x09@detail \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\xa4\x91 \xed\x95\x98\xeb\x82\x98\xec\x9d\xb8 configure \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\x82\x98\xec\xa4\x91\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa3\xbc\xec\x9e\x90,\n\x09*///#define TIHMACRO_CHAINBUILDER_CASTING( TIHTemplateType , cmdTarget )\\\n//static_cast<FTIHCommandCreateAssignPool*>( cmdTarget )->SetCommandFeature(GetCastedBuildersCommandData<FTIHCommandDataCreateAssginPool>());\n" },
#endif
		{ "IncludePath", "TIHStationCore.h" },
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n       *       @brief commandFactoryConfigure\n       *       @detail \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\xa4\x91 \xed\x95\x98\xeb\x82\x98\xec\x9d\xb8 configure \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\xec\x9d\x84 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\x82\x98\xec\xa4\x91\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa3\xbc\xec\x9e\x90,\n       //#define TIHMACRO_CHAINBUILDER_CASTING( TIHTemplateType , cmdTarget )\\\n//static_cast<FTIHCommandCreateAssignPool*>( cmdTarget )->SetCommandFeature(GetCastedBuildersCommandData<FTIHCommandDataCreateAssginPool>());" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType = { "mFactorySettingType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactorySettingType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption = { "mFactorySettingTypeOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactorySettingTypeOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize = { "mFactoryReserveSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactoryReserveSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRogginEnabledOnRuntime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime = { "mIsRogginEnabledOnRuntime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledOnSaveing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing = { "mIsRoggingEnabledOnSaveing", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledPassToServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer = { "mIsRoggingEnabledPassToServer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledForDebuging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging = { "mIsRoggingEnabledForDebuging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath = { "mRoggingSavePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mRoggingSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHStationCore.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl = { "mRoggingServerUrl", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mRoggingServerUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHCommandFactoryConfigure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::ClassParams = {
		&UTIHCommandFactoryConfigure::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure()
	{
		if (!Z_Registration_Info_UClass_UTIHCommandFactoryConfigure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHCommandFactoryConfigure.OuterSingleton, Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHCommandFactoryConfigure.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<UTIHCommandFactoryConfigure>()
	{
		return UTIHCommandFactoryConfigure::StaticClass();
	}
	UTIHCommandFactoryConfigure::UTIHCommandFactoryConfigure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHCommandFactoryConfigure);
	UTIHCommandFactoryConfigure::~UTIHCommandFactoryConfigure() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo[] = {
		{ FTIHCommandDataRefParameter::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandDataRefParameter_Statics::NewStructOps, TEXT("TIHCommandDataRefParameter"), &Z_Registration_Info_UScriptStruct_TIHCommandDataRefParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandDataRefParameter), 1572514628U) },
		{ FTIHCommandHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps, TEXT("TIHCommandHeader"), &Z_Registration_Info_UScriptStruct_TIHCommandHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandHeader), 1136336976U) },
		{ FTIHCommandMethod::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps, TEXT("TIHCommandMethod"), &Z_Registration_Info_UScriptStruct_TIHCommandMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandMethod), 3159039865U) },
		{ FTIHCommandReferenceData::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandReferenceData_Statics::NewStructOps, TEXT("TIHCommandReferenceData"), &Z_Registration_Info_UScriptStruct_TIHCommandReferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandReferenceData), 2409184653U) },
		{ FTIHCommandCreateAssignPoolDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewStructOps, TEXT("TIHCommandCreateAssignPoolDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandCreateAssignPoolDatas), 1420441777U) },
		{ FTIHCommandCreateNewAllocDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandCreateNewAllocDatas_Statics::NewStructOps, TEXT("TIHCommandCreateNewAllocDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandCreateNewAllocDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandCreateNewAllocDatas), 3869821629U) },
		{ FTIHCommandTestDelayDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandTestDelayDatas_Statics::NewStructOps, TEXT("TIHCommandTestDelayDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandTestDelayDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandTestDelayDatas), 3975050477U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHCommandFactoryConfigure, UTIHCommandFactoryConfigure::StaticClass, TEXT("UTIHCommandFactoryConfigure"), &Z_Registration_Info_UClass_UTIHCommandFactoryConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHCommandFactoryConfigure), 4132874346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_2444387281(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHStationCore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

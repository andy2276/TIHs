// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHCommandCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHCommandCore() {}
// Cross Module References
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandFunctorHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandMethod();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0 = { "Option0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Option0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandProcessingProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CommandProcessingProtocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandProgressionProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CommandProgressionProtocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompleteFunctorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CompleteFunctorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandMethod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol = { "CommandProcessingProtocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, CommandProcessingProtocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09{Strategies,Delegates,MultiThreading}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{Strategies,Delegates,MultiThreading}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol = { "CommandProgressionProtocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, CommandProgressionProtocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CompleteFunctorIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09{Continue,Reapeate,Async}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{Continue,Reapeate,Async}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CompleteFunctorIndex = { "CompleteFunctorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, CompleteFunctorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CompleteFunctorIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CompleteFunctorIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CompleteFunctorIndex,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader;
class UScriptStruct* FTIHCommandFunctorHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandFunctorHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandFunctorHeader>()
{
	return FTIHCommandFunctorHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionInt8_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_OptionInt8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionInt16_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_OptionInt16;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandFunctorHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt8_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt8 = { "OptionInt8", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, OptionInt8), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt8_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt8_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt16_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n\x09*\x09@brief \xec\x9d\xb4\xea\xb1\xb0\xec\x9d\x98 \xeb\xaa\xa9\xec\xa0\x81\xec\x9d\x80 \xeb\x8b\xa4\xec\x9a\xa9\xeb\x8f\x84\xec\x9d\xb4\xea\xb8\xb4\xed\x95\x9c\xeb\x8d\xb0 \xec\x9d\xbc\xeb\x8b\xa8 managedOBject \xec\x9d\x98 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9.\n\x09*\x09@detail \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommandCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n       *       @brief \xec\x9d\xb4\xea\xb1\xb0\xec\x9d\x98 \xeb\xaa\xa9\xec\xa0\x81\xec\x9d\x80 \xeb\x8b\xa4\xec\x9a\xa9\xeb\x8f\x84\xec\x9d\xb4\xea\xb8\xb4\xed\x95\x9c\xeb\x8d\xb0 \xec\x9d\xbc\xeb\x8b\xa8 managedOBject \xec\x9d\x98 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9.\n       *       @detail" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt16 = { "OptionInt16", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, OptionInt16), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt16_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt16_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_OptionInt16,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandFunctorHeader",
		Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::PropPointers),
		sizeof(FTIHCommandFunctorHeader),
		alignof(FTIHCommandFunctorHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandFunctorHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommandCore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommandCore_h_Statics::ScriptStructInfo[] = {
		{ FTIHCommandHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps, TEXT("TIHCommandHeader"), &Z_Registration_Info_UScriptStruct_TIHCommandHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandHeader), 1148537544U) },
		{ FTIHCommandMethod::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps, TEXT("TIHCommandMethod"), &Z_Registration_Info_UScriptStruct_TIHCommandMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandMethod), 645103139U) },
		{ FTIHCommandFunctorHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewStructOps, TEXT("TIHCommandFunctorHeader"), &Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandFunctorHeader), 558986177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommandCore_h_2056661866(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommandCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommandCore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

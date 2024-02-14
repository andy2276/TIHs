// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHCommands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHCommands() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHCommandFactoryConfigure_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandFunctorHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandMethod();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas();
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
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0 = { "Option0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandHeader, Option0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData), Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewProp_Option1_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
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
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandMethod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol = { "CommandProcessingProtocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandMethod, CommandProcessingProtocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProcessingProtocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewProp_CommandProgressionProtocol_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09{Strategies,Delegates,MultiThreading}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
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
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas;
class UScriptStruct* FTIHCommandServerConnectDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerConnectDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerConnectDatas>()
{
	return FTIHCommandServerConnectDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerConnectDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerConnectDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerConnectDatas),
		alignof(FTIHCommandServerConnectDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas;
class UScriptStruct* FTIHCommandServerSendDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerSendDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerSendDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerSendDatas>()
{
	return FTIHCommandServerSendDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerSendDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerSendDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerSendDatas),
		alignof(FTIHCommandServerSendDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerSendDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas;
class UScriptStruct* FTIHCommandServerListenDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerListenDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerListenDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerListenDatas>()
{
	return FTIHCommandServerListenDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerListenDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerListenDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerListenDatas),
		alignof(FTIHCommandServerListenDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerListenDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas;
class UScriptStruct* FTIHCommandServerDisConnectDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandServerDisConnectDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandServerDisConnectDatas>()
{
	return FTIHCommandServerDisConnectDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandServerDisConnectDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandServerDisConnectDatas",
		nullptr,
		0,
		sizeof(FTIHCommandServerDisConnectDatas),
		alignof(FTIHCommandServerDisConnectDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas;
class UScriptStruct* FTIHCommandDeleteRejectPoolDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandDeleteRejectPoolDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandDeleteRejectPoolDatas>()
{
	return FTIHCommandDeleteRejectPoolDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandDeleteRejectPoolDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandDeleteRejectPoolDatas",
		nullptr,
		0,
		sizeof(FTIHCommandDeleteRejectPoolDatas),
		alignof(FTIHCommandDeleteRejectPoolDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas;
class UScriptStruct* FTIHCommanEDeleteDestoryDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommanEDeleteDestoryDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommanEDeleteDestoryDatas>()
{
	return FTIHCommanEDeleteDestoryDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommanEDeleteDestoryDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommanEDeleteDestoryDatas",
		nullptr,
		0,
		sizeof(FTIHCommanEDeleteDestoryDatas),
		alignof(FTIHCommanEDeleteDestoryDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas;
class UScriptStruct* FTIHCommandModifyTransformDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyTransformDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyTransformDatas>()
{
	return FTIHCommandModifyTransformDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyTransformDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyTransformDatas",
		nullptr,
		0,
		sizeof(FTIHCommandModifyTransformDatas),
		alignof(FTIHCommandModifyTransformDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas;
class UScriptStruct* FTIHCommandModifyValueDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandModifyValueDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandModifyValueDatas>()
{
	return FTIHCommandModifyValueDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandModifyValueDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandModifyValueDatas",
		nullptr,
		0,
		sizeof(FTIHCommandModifyValueDatas),
		alignof(FTIHCommandModifyValueDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas;
class UScriptStruct* FTIHCommandInOutReadAndSaveDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandInOutReadAndSaveDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandInOutReadAndSaveDatas>()
{
	return FTIHCommandInOutReadAndSaveDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandInOutReadAndSaveDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandInOutReadAndSaveDatas",
		nullptr,
		0,
		sizeof(FTIHCommandInOutReadAndSaveDatas),
		alignof(FTIHCommandInOutReadAndSaveDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas;
class UScriptStruct* FTIHCommandInOutWriteAndModifyDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandInOutWriteAndModifyDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandInOutWriteAndModifyDatas>()
{
	return FTIHCommandInOutWriteAndModifyDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandInOutWriteAndModifyDatas>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandInOutWriteAndModifyDatas",
		nullptr,
		0,
		sizeof(FTIHCommandInOutWriteAndModifyDatas),
		alignof(FTIHCommandInOutWriteAndModifyDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas.InnerSingleton;
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
		{ "IncludePath", "TIHCommands.h" },
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType = { "mFactorySettingType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactorySettingType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption = { "mFactorySettingTypeOption", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactorySettingTypeOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactorySettingTypeOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize = { "mFactoryReserveSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mFactoryReserveSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mFactoryReserveSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRogginEnabledOnRuntime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime = { "mIsRogginEnabledOnRuntime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRogginEnabledOnRuntime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledOnSaveing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing = { "mIsRoggingEnabledOnSaveing", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledOnSaveing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledPassToServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer = { "mIsRoggingEnabledPassToServer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledPassToServer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_SetBit(void* Obj)
	{
		((UTIHCommandFactoryConfigure*)Obj)->mIsRoggingEnabledForDebuging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging = { "mIsRoggingEnabledForDebuging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTIHCommandFactoryConfigure), &Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mIsRoggingEnabledForDebuging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath = { "mRoggingSavePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHCommandFactoryConfigure, mRoggingSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData), Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingSavePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHCommandFactoryConfigure_Statics::NewProp_mRoggingServerUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProtocolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ReferenceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandFunctorHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ProtocolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ReferenceIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n\x09*\x09@brief \xec\x9d\xb4\xea\xb1\xb0\xec\x9d\x98 \xeb\xaa\xa9\xec\xa0\x81\xec\x9d\x80 \xeb\x8b\xa4\xec\x9a\xa9\xeb\x8f\x84\xec\x9d\xb4\xea\xb8\xb4\xed\x95\x9c\xeb\x8d\xb0 \xec\x9d\xbc\xeb\x8b\xa8 managedOBject \xec\x9d\x98 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9.\n\x09*\x09@detail \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHCommands.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n       *       @brief \xec\x9d\xb4\xea\xb1\xb0\xec\x9d\x98 \xeb\xaa\xa9\xec\xa0\x81\xec\x9d\x80 \xeb\x8b\xa4\xec\x9a\xa9\xeb\x8f\x84\xec\x9d\xb4\xea\xb8\xb4\xed\x95\x9c\xeb\x8d\xb0 \xec\x9d\xbc\xeb\x8b\xa8 managedOBject \xec\x9d\x98 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9.\n       *       @detail" },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ReferenceIndex = { "ReferenceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandFunctorHeader, ReferenceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ReferenceIndex_MetaData), Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ReferenceIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ProtocolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewProp_ReferenceIndex,
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
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo[] = {
		{ FTIHCommandHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandHeader_Statics::NewStructOps, TEXT("TIHCommandHeader"), &Z_Registration_Info_UScriptStruct_TIHCommandHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandHeader), 443569041U) },
		{ FTIHCommandMethod::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandMethod_Statics::NewStructOps, TEXT("TIHCommandMethod"), &Z_Registration_Info_UScriptStruct_TIHCommandMethod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandMethod), 3514658511U) },
		{ FTIHCommandServerConnectDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerConnectDatas_Statics::NewStructOps, TEXT("TIHCommandServerConnectDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerConnectDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerConnectDatas), 945904665U) },
		{ FTIHCommandServerSendDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerSendDatas_Statics::NewStructOps, TEXT("TIHCommandServerSendDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerSendDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerSendDatas), 3920132505U) },
		{ FTIHCommandServerListenDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerListenDatas_Statics::NewStructOps, TEXT("TIHCommandServerListenDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerListenDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerListenDatas), 1638330967U) },
		{ FTIHCommandServerDisConnectDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandServerDisConnectDatas_Statics::NewStructOps, TEXT("TIHCommandServerDisConnectDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandServerDisConnectDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandServerDisConnectDatas), 2196975461U) },
		{ FTIHCommandDeleteRejectPoolDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandDeleteRejectPoolDatas_Statics::NewStructOps, TEXT("TIHCommandDeleteRejectPoolDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandDeleteRejectPoolDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandDeleteRejectPoolDatas), 3902375792U) },
		{ FTIHCommanEDeleteDestoryDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommanEDeleteDestoryDatas_Statics::NewStructOps, TEXT("TIHCommanEDeleteDestoryDatas"), &Z_Registration_Info_UScriptStruct_TIHCommanEDeleteDestoryDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommanEDeleteDestoryDatas), 1013351403U) },
		{ FTIHCommandModifyTransformDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyTransformDatas_Statics::NewStructOps, TEXT("TIHCommandModifyTransformDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyTransformDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyTransformDatas), 1373459174U) },
		{ FTIHCommandModifyValueDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandModifyValueDatas_Statics::NewStructOps, TEXT("TIHCommandModifyValueDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandModifyValueDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandModifyValueDatas), 1646058626U) },
		{ FTIHCommandInOutReadAndSaveDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandInOutReadAndSaveDatas_Statics::NewStructOps, TEXT("TIHCommandInOutReadAndSaveDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandInOutReadAndSaveDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandInOutReadAndSaveDatas), 508582326U) },
		{ FTIHCommandInOutWriteAndModifyDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandInOutWriteAndModifyDatas_Statics::NewStructOps, TEXT("TIHCommandInOutWriteAndModifyDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandInOutWriteAndModifyDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandInOutWriteAndModifyDatas), 894517057U) },
		{ FTIHCommandFunctorHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandFunctorHeader_Statics::NewStructOps, TEXT("TIHCommandFunctorHeader"), &Z_Registration_Info_UScriptStruct_TIHCommandFunctorHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandFunctorHeader), 4287774763U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHCommandFactoryConfigure, UTIHCommandFactoryConfigure::StaticClass, TEXT("UTIHCommandFactoryConfigure"), &Z_Registration_Info_UClass_UTIHCommandFactoryConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHCommandFactoryConfigure), 983425203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_900627937(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHCommands_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

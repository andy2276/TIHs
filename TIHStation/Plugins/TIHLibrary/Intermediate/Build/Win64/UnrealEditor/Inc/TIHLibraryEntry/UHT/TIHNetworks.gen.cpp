// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Projects_Rapid/Project/TIH/20231011/TIHStation/Plugins/TIHLibrary/Source/TIHLibrary/Public/TIHNetworks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHNetworks() {}
// Cross Module References
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHServerHeader();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHServerHeader;
class UScriptStruct* FTIHServerHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHServerHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHServerHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHServerHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHServerHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHServerHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHServerHeader>()
{
	return FTIHServerHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHServerHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCategory_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ServerCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCategoryOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ServerCategoryOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ServerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAction_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ServerAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHServerHeader_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n*\x09@brief \xec\x84\x9c\xeb\xb2\x84\xeb\x8a\x94 \xec\x9d\xb4\xec\xa0\x9c \xec\x9d\xb4\xea\xb1\xb8 \xeb\xaa\xa8\xeb\x91\x90 \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84\xec\x84\x9c \xeb\xa7\x8c\xeb\x93\x9c\xeb\x8a\x94 \xea\xb2\x83\xec\x9d\xb4\xeb\x8b\xa4. \xec\x9d\xb4\xea\xb2\x83\xeb\x8f\x84 CRTP \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x82\x98?\n*\x09@detail\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHNetworks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n*      @brief \xec\x84\x9c\xeb\xb2\x84\xeb\x8a\x94 \xec\x9d\xb4\xec\xa0\x9c \xec\x9d\xb4\xea\xb1\xb8 \xeb\xaa\xa8\xeb\x91\x90 \xec\x83\x81\xec\x86\x8d\xeb\xb0\x9b\xec\x95\x84\xec\x84\x9c \xeb\xa7\x8c\xeb\x93\x9c\xeb\x8a\x94 \xea\xb2\x83\xec\x9d\xb4\xeb\x8b\xa4. \xec\x9d\xb4\xea\xb2\x83\xeb\x8f\x84 CRTP \xeb\xa1\x9c \xeb\xa7\x8c\xeb\x93\xa4\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x82\x98?\n*      @detail" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHServerHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHNetworks.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategory = { "ServerCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHServerHeader, ServerCategory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategory_MetaData), Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategoryOption_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//{tcpip,iocp,webSocket,https}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHNetworks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{tcpip,iocp,webSocket,https}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategoryOption = { "ServerCategoryOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHServerHeader, ServerCategoryOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategoryOption_MetaData), Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategoryOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHNetworks.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerLocation = { "ServerLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHServerHeader, ServerLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerLocation_MetaData), Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerAction_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// local , remote\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHNetworks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "local , remote" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerAction = { "ServerAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHServerHeader, ServerAction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerAction_MetaData), Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHServerHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerCategoryOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewProp_ServerAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHServerHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHServerHeader",
		Z_Construct_UScriptStruct_FTIHServerHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::PropPointers),
		sizeof(FTIHServerHeader),
		alignof(FTIHServerHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHServerHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHServerHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHServerHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHServerHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHServerHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHServerHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHServerHeader.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHNetworks_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHNetworks_h_Statics::ScriptStructInfo[] = {
		{ FTIHServerHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHServerHeader_Statics::NewStructOps, TEXT("TIHServerHeader"), &Z_Registration_Info_UScriptStruct_TIHServerHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHServerHeader), 1129478613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHNetworks_h_3046638280(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHNetworks_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHNetworks_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

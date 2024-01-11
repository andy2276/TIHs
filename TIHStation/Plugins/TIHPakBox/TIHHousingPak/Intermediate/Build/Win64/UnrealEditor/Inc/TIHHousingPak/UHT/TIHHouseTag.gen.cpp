// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseTag() {}
// Cross Module References
	TIHHOUSINGPAK_API UScriptStruct* Z_Construct_UScriptStruct_FTIHHouseTag();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHHouseTag;
class UScriptStruct* FTIHHouseTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHHouseTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHHouseTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHHouseTag, (UObject*)Z_Construct_UPackage__Script_TIHHousingPak(), TEXT("TIHHouseTag"));
	}
	return Z_Registration_Info_UScriptStruct_TIHHouseTag.OuterSingleton;
}
template<> TIHHOUSINGPAK_API UScriptStruct* StaticStruct<FTIHHouseTag>()
{
	return FTIHHouseTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHHouseTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHHouseTag_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/TIHHouseTag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHHouseTag>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHHouseTag.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHHouseTag, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHHouseTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHHouseTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
		nullptr,
		&NewStructOps,
		"TIHHouseTag",
		Z_Construct_UScriptStruct_FTIHHouseTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHouseTag_Statics::PropPointers),
		sizeof(FTIHHouseTag),
		alignof(FTIHHouseTag),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHouseTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHHouseTag_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHouseTag_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHHouseTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHHouseTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHHouseTag.InnerSingleton, Z_Construct_UScriptStruct_FTIHHouseTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHHouseTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseTag_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseTag_h_Statics::ScriptStructInfo[] = {
		{ FTIHHouseTag::StaticStruct, Z_Construct_UScriptStruct_FTIHHouseTag_Statics::NewStructOps, TEXT("TIHHouseTag"), &Z_Registration_Info_UScriptStruct_TIHHouseTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHHouseTag), 2639354075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseTag_h_76043572(TEXT("/Script/TIHHousingPak"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseTag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseTag_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

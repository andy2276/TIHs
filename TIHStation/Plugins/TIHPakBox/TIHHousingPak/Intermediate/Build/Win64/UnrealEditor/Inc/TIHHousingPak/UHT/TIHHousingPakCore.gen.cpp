// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHousingPakCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHousingPakCore() {}
// Cross Module References
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHousingPakCore();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHousingPakCore_NoRegister();
	TIHHOUSINGPAK_API UScriptStruct* Z_Construct_UScriptStruct_FTIHHousingParsingBlock();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock;
class UScriptStruct* FTIHHousingParsingBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHHousingParsingBlock, (UObject*)Z_Construct_UPackage__Script_TIHHousingPak(), TEXT("TIHHousingParsingBlock"));
	}
	return Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.OuterSingleton;
}
template<> TIHHOUSINGPAK_API UScriptStruct* StaticStruct<FTIHHousingParsingBlock>()
{
	return FTIHHousingParsingBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_TabCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09to-do\n\x09\xed\x95\xb4\xeb\x8b\xb9 \xed\x8c\x8c\xec\x8b\xb1 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xea\xb0\x80\xec\xa0\xb8\xec\x95\xbc\xed\x95\xa0 \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xec\x97\xac\xea\xb8\xb0\xeb\x8b\xa4 \xeb\x84\xa3\xec\x96\xb4\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4.\n\x09\xec\x96\xb4\xeb\x96\xa4\xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x88\xea\xb9\x8c?\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHHousingPakCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xed\x95\xb4\xeb\x8b\xb9 \xed\x8c\x8c\xec\x8b\xb1 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xea\xb0\x80\xec\xa0\xb8\xec\x95\xbc\xed\x95\xa0 \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xec\x97\xac\xea\xb8\xb0\xeb\x8b\xa4 \xeb\x84\xa3\xec\x96\xb4\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4.\n\xec\x96\xb4\xeb\x96\xa4\xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x88\xea\xb9\x8c?" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHHousingParsingBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_TabCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHHousingPakCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_TabCount = { "TabCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHHousingParsingBlock, TabCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_TabCount_MetaData), Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_TabCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHHousingPakCore.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHHousingParsingBlock, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_Padding_MetaData), Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_Padding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_TabCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewProp_Padding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
		nullptr,
		&NewStructOps,
		"TIHHousingParsingBlock",
		Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::PropPointers),
		sizeof(FTIHHousingParsingBlock),
		alignof(FTIHHousingParsingBlock),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHHousingParsingBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.InnerSingleton, Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock.InnerSingleton;
	}
	void ATIHHousingPakCore::StaticRegisterNativesATIHHousingPakCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHousingPakCore);
	UClass* Z_Construct_UClass_ATIHHousingPakCore_NoRegister()
	{
		return ATIHHousingPakCore::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHousingPakCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHousingPakCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATIHPakBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousingPakCore_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHousingPakCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHHousingPakCore.h" },
		{ "ModuleRelativePath", "Public/TIHHousingPakCore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHousingPakCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHousingPakCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHousingPakCore_Statics::ClassParams = {
		&ATIHHousingPakCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousingPakCore_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHousingPakCore_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHHousingPakCore()
	{
		if (!Z_Registration_Info_UClass_ATIHHousingPakCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHousingPakCore.OuterSingleton, Z_Construct_UClass_ATIHHousingPakCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHousingPakCore.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATIHHousingPakCore>()
	{
		return ATIHHousingPakCore::StaticClass();
	}
	ATIHHousingPakCore::ATIHHousingPakCore() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHousingPakCore);
	ATIHHousingPakCore::~ATIHHousingPakCore() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ScriptStructInfo[] = {
		{ FTIHHousingParsingBlock::StaticStruct, Z_Construct_UScriptStruct_FTIHHousingParsingBlock_Statics::NewStructOps, TEXT("TIHHousingParsingBlock"), &Z_Registration_Info_UScriptStruct_TIHHousingParsingBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHHousingParsingBlock), 409032047U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHousingPakCore, ATIHHousingPakCore::StaticClass, TEXT("ATIHHousingPakCore"), &Z_Registration_Info_UClass_ATIHHousingPakCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHousingPakCore), 2672215116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_1633204883(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousingPakCore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

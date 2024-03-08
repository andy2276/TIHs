// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseStuff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseStuff() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseStuff();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseStuff_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeLinkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void ATIHHouseStuff::StaticRegisterNativesATIHHouseStuff()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHouseStuff);
	UClass* Z_Construct_UClass_ATIHHouseStuff_NoRegister()
	{
		return ATIHHouseStuff::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHouseStuff_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHouseNodeLinkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHouseNodeLinkComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHouseStuff_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseStuff_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseStuff_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHHouseStuff.h" },
		{ "ModuleRelativePath", "Public/TIHHouseStuff.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseStuff_Statics::NewProp_mHouseNodeLinkComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TIHHouseStuff.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATIHHouseStuff_Statics::NewProp_mHouseNodeLinkComponent = { "mHouseNodeLinkComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHouseStuff, mHouseNodeLinkComponent), Z_Construct_UClass_UTIHHouseNodeLinkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseStuff_Statics::NewProp_mHouseNodeLinkComponent_MetaData), Z_Construct_UClass_ATIHHouseStuff_Statics::NewProp_mHouseNodeLinkComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATIHHouseStuff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHouseStuff_Statics::NewProp_mHouseNodeLinkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHouseStuff_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHouseStuff>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHouseStuff_Statics::ClassParams = {
		&ATIHHouseStuff::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATIHHouseStuff_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseStuff_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseStuff_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHouseStuff_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseStuff_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATIHHouseStuff()
	{
		if (!Z_Registration_Info_UClass_ATIHHouseStuff.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHouseStuff.OuterSingleton, Z_Construct_UClass_ATIHHouseStuff_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHouseStuff.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATIHHouseStuff>()
	{
		return ATIHHouseStuff::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHouseStuff);
	ATIHHouseStuff::~ATIHHouseStuff() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuff_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuff_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHouseStuff, ATIHHouseStuff::StaticClass, TEXT("ATIHHouseStuff"), &Z_Registration_Info_UClass_ATIHHouseStuff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHouseStuff), 2134848131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuff_h_191299235(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuff_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

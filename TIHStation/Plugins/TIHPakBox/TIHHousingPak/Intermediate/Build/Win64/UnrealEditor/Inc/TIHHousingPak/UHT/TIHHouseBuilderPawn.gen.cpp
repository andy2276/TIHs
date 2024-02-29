// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseBuilderPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseBuilderPawn() {}
// Cross Module References
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseBuilderPawn();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseBuilderPawn_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHousePawn();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void ATIHHouseBuilderPawn::StaticRegisterNativesATIHHouseBuilderPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHouseBuilderPawn);
	UClass* Z_Construct_UClass_ATIHHouseBuilderPawn_NoRegister()
	{
		return ATIHHouseBuilderPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHouseBuilderPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATIHHousePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TIHHouseBuilderPawn.h" },
		{ "ModuleRelativePath", "Public/TIHHouseBuilderPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHouseBuilderPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::ClassParams = {
		&ATIHHouseBuilderPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHHouseBuilderPawn()
	{
		if (!Z_Registration_Info_UClass_ATIHHouseBuilderPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHouseBuilderPawn.OuterSingleton, Z_Construct_UClass_ATIHHouseBuilderPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHouseBuilderPawn.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATIHHouseBuilderPawn>()
	{
		return ATIHHouseBuilderPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHouseBuilderPawn);
	ATIHHouseBuilderPawn::~ATIHHouseBuilderPawn() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseBuilderPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseBuilderPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHouseBuilderPawn, ATIHHouseBuilderPawn::StaticClass, TEXT("ATIHHouseBuilderPawn"), &Z_Registration_Info_UClass_ATIHHouseBuilderPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHouseBuilderPawn), 697915473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseBuilderPawn_h_583388689(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseBuilderPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseBuilderPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

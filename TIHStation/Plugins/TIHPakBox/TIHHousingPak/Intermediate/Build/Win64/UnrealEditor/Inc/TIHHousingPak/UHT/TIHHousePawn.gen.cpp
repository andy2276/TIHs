// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHousePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHousePawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHousePawn();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHousePawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void ATIHHousePawn::StaticRegisterNativesATIHHousePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHousePawn);
	UClass* Z_Construct_UClass_ATIHHousePawn_NoRegister()
	{
		return ATIHHousePawn::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHousePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mInputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_mInputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_mInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHousePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHousePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TIHHousePawn.h" },
		{ "ModuleRelativePath", "Public/TIHHousePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputMapping_MetaData[] = {
		{ "Category", "TIHHousePawn" },
		{ "ModuleRelativePath", "Public/TIHHousePawn.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputMapping = { "mInputMapping", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHousePawn, mInputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputMapping_MetaData), Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHHousePawn.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputAction = { "mInputAction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHousePawn, mInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputAction_MetaData), Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATIHHousePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHousePawn_Statics::NewProp_mInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHousePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHousePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHousePawn_Statics::ClassParams = {
		&ATIHHousePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATIHHousePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHousePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHousePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATIHHousePawn()
	{
		if (!Z_Registration_Info_UClass_ATIHHousePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHousePawn.OuterSingleton, Z_Construct_UClass_ATIHHousePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHousePawn.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATIHHousePawn>()
	{
		return ATIHHousePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHousePawn);
	ATIHHousePawn::~ATIHHousePawn() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHousePawn, ATIHHousePawn::StaticClass, TEXT("ATIHHousePawn"), &Z_Registration_Info_UClass_ATIHHousePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHousePawn), 4026294427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousePawn_h_2692873378(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHousePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

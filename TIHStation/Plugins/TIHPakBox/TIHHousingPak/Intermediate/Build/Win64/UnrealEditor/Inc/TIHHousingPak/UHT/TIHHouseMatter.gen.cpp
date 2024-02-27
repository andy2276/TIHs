// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseMatter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseMatter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseMatter();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseMatter_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseStuff();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseStuffChildsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void ATIHHouseMatter::StaticRegisterNativesATIHHouseMatter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHouseMatter);
	UClass* Z_Construct_UClass_ATIHHouseMatter_NoRegister()
	{
		return ATIHHouseMatter::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHouseMatter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mChildActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mChildActorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mStaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHouseMatter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATIHHouseStuff,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseMatter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TIHHouseMatter.h" },
		{ "ModuleRelativePath", "Public/TIHHouseMatter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mChildActorComponent_MetaData[] = {
		{ "Category", "TIHHouseMatter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n\x09*\x09@brief \n\x09*\x09@detail \n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TIHHouseMatter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "!\n       *       @brief\n       *       @detail" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mChildActorComponent = { "mChildActorComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHouseMatter, mChildActorComponent), Z_Construct_UClass_UTIHHouseStuffChildsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mChildActorComponent_MetaData), Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mChildActorComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mStaticMeshComponent_MetaData[] = {
		{ "Category", "TIHHouseMatter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TIHHouseMatter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mStaticMeshComponent = { "mStaticMeshComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHouseMatter, mStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mStaticMeshComponent_MetaData), Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mStaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATIHHouseMatter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mChildActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHouseMatter_Statics::NewProp_mStaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHouseMatter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHouseMatter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHouseMatter_Statics::ClassParams = {
		&ATIHHouseMatter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATIHHouseMatter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHouseMatter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseMatter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATIHHouseMatter()
	{
		if (!Z_Registration_Info_UClass_ATIHHouseMatter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHouseMatter.OuterSingleton, Z_Construct_UClass_ATIHHouseMatter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHouseMatter.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<ATIHHouseMatter>()
	{
		return ATIHHouseMatter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHouseMatter);
	ATIHHouseMatter::~ATIHHouseMatter() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMatter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMatter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHouseMatter, ATIHHouseMatter::StaticClass, TEXT("ATIHHouseMatter"), &Z_Registration_Info_UClass_ATIHHouseMatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHouseMatter), 1974343790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMatter_h_642759964(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMatter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMatter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHPakBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHPakBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_ATIHPakBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	void ATIHPakBase::StaticRegisterNativesATIHPakBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHPakBase);
	UClass* Z_Construct_UClass_ATIHPakBase_NoRegister()
	{
		return ATIHPakBase::StaticClass();
	}
	struct Z_Construct_UClass_ATIHPakBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHPakBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHPakBase.h" },
		{ "ModuleRelativePath", "Public/TIHPakBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHPakBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHPakBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHPakBase_Statics::ClassParams = {
		&ATIHPakBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHPakBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATIHPakBase()
	{
		if (!Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton, Z_Construct_UClass_ATIHPakBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHPakBase.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<ATIHPakBase>()
	{
		return ATIHPakBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHPakBase);
	ATIHPakBase::~ATIHPakBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHPakBase, ATIHPakBase::StaticClass, TEXT("ATIHPakBase"), &Z_Registration_Info_UClass_ATIHPakBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHPakBase), 3436691286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_1955507538(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHPakBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

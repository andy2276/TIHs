// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHTempLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHTempLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHTempLibrary();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHTempLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void UTIHTempLibrary::StaticRegisterNativesUTIHTempLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHTempLibrary);
	UClass* Z_Construct_UClass_UTIHTempLibrary_NoRegister()
	{
		return UTIHTempLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTIHTempLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHTempLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHTempLibrary_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHTempLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TIHTempLibrary.h" },
		{ "ModuleRelativePath", "Public/TIHTempLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHTempLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHTempLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHTempLibrary_Statics::ClassParams = {
		&UTIHTempLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHTempLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHTempLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHTempLibrary()
	{
		if (!Z_Registration_Info_UClass_UTIHTempLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHTempLibrary.OuterSingleton, Z_Construct_UClass_UTIHTempLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHTempLibrary.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHTempLibrary>()
	{
		return UTIHTempLibrary::StaticClass();
	}
	UTIHTempLibrary::UTIHTempLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHTempLibrary);
	UTIHTempLibrary::~UTIHTempLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHTempLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHTempLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHTempLibrary, UTIHTempLibrary::StaticClass, TEXT("UTIHTempLibrary"), &Z_Registration_Info_UClass_UTIHTempLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHTempLibrary), 3391248746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHTempLibrary_h_3471162819(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHTempLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHTempLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

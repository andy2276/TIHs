// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseMouseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseMouseComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseMouseComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseMouseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void UTIHHouseMouseComponent::StaticRegisterNativesUTIHHouseMouseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseMouseComponent);
	UClass* Z_Construct_UClass_UTIHHouseMouseComponent_NoRegister()
	{
		return UTIHHouseMouseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseMouseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseMouseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseMouseComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseMouseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TIHHouseMouseComponent.h" },
		{ "ModuleRelativePath", "Public/TIHHouseMouseComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseMouseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseMouseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseMouseComponent_Statics::ClassParams = {
		&UTIHHouseMouseComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseMouseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseMouseComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHHouseMouseComponent()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseMouseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseMouseComponent.OuterSingleton, Z_Construct_UClass_UTIHHouseMouseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseMouseComponent.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseMouseComponent>()
	{
		return UTIHHouseMouseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseMouseComponent);
	UTIHHouseMouseComponent::~UTIHHouseMouseComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMouseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMouseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHHouseMouseComponent, UTIHHouseMouseComponent::StaticClass, TEXT("UTIHHouseMouseComponent"), &Z_Registration_Info_UClass_UTIHHouseMouseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseMouseComponent), 1661539054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMouseComponent_h_1748403284(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMouseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseMouseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

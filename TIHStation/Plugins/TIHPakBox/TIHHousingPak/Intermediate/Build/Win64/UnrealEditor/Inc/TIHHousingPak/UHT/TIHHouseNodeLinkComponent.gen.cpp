// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseNodeLinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseNodeLinkComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_ATIHHouseStuff_NoRegister();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeLinkComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseNodeLinkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void UTIHHouseNodeLinkComponent::StaticRegisterNativesUTIHHouseNodeLinkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseNodeLinkComponent);
	UClass* Z_Construct_UClass_UTIHHouseNodeLinkComponent_NoRegister()
	{
		return UTIHHouseNodeLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHouseStuff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHouseStuff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*!\n*\x09\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TIHHouseNodeLinkComponent.h" },
		{ "ModuleRelativePath", "Public/TIHHouseNodeLinkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::NewProp_mHouseStuff_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHHouseNodeLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::NewProp_mHouseStuff = { "mHouseStuff", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHHouseNodeLinkComponent, mHouseStuff), Z_Construct_UClass_ATIHHouseStuff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::NewProp_mHouseStuff_MetaData), Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::NewProp_mHouseStuff_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::NewProp_mHouseStuff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseNodeLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::ClassParams = {
		&UTIHHouseNodeLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTIHHouseNodeLinkComponent()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseNodeLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseNodeLinkComponent.OuterSingleton, Z_Construct_UClass_UTIHHouseNodeLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseNodeLinkComponent.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseNodeLinkComponent>()
	{
		return UTIHHouseNodeLinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseNodeLinkComponent);
	UTIHHouseNodeLinkComponent::~UTIHHouseNodeLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNodeLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNodeLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHHouseNodeLinkComponent, UTIHHouseNodeLinkComponent::StaticClass, TEXT("UTIHHouseNodeLinkComponent"), &Z_Registration_Info_UClass_UTIHHouseNodeLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseNodeLinkComponent), 66622558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNodeLinkComponent_h_824590797(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNodeLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseNodeLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

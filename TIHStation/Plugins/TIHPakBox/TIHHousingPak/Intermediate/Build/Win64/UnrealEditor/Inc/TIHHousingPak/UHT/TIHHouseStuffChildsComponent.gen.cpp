// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHHousingPak/Public/TIHHouseStuffChildsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseStuffChildsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseStuffChildsComponent();
	TIHHOUSINGPAK_API UClass* Z_Construct_UClass_UTIHHouseStuffChildsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHHousingPak();
// End Cross Module References
	void UTIHHouseStuffChildsComponent::StaticRegisterNativesUTIHHouseStuffChildsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHHouseStuffChildsComponent);
	UClass* Z_Construct_UClass_UTIHHouseStuffChildsComponent_NoRegister()
	{
		return UTIHHouseStuffChildsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChildActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHHousingPak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "TIHHouseStuffChildsComponent.h" },
		{ "ModuleRelativePath", "Public/TIHHouseStuffChildsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHHouseStuffChildsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::ClassParams = {
		&UTIHHouseStuffChildsComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHHouseStuffChildsComponent()
	{
		if (!Z_Registration_Info_UClass_UTIHHouseStuffChildsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHHouseStuffChildsComponent.OuterSingleton, Z_Construct_UClass_UTIHHouseStuffChildsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHHouseStuffChildsComponent.OuterSingleton;
	}
	template<> TIHHOUSINGPAK_API UClass* StaticClass<UTIHHouseStuffChildsComponent>()
	{
		return UTIHHouseStuffChildsComponent::StaticClass();
	}
	UTIHHouseStuffChildsComponent::UTIHHouseStuffChildsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHHouseStuffChildsComponent);
	UTIHHouseStuffChildsComponent::~UTIHHouseStuffChildsComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuffChildsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuffChildsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHHouseStuffChildsComponent, UTIHHouseStuffChildsComponent::StaticClass, TEXT("UTIHHouseStuffChildsComponent"), &Z_Registration_Info_UClass_UTIHHouseStuffChildsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHHouseStuffChildsComponent), 1970131502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuffChildsComponent_h_1646269435(TEXT("/Script/TIHHousingPak"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuffChildsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHPakBox_TIHHousingPak_Source_TIHHousingPak_Public_TIHHouseStuffChildsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

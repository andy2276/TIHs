// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Projects_Rapid/Project/TIH/20231011/TIHStation/Plugins/TIHLibrary/Source/TIHLibrary/Public/TIHChildrenActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHChildrenActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHChildrenActorComponent();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHChildrenActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	void UTIHChildrenActorComponent::StaticRegisterNativesUTIHChildrenActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHChildrenActorComponent);
	UClass* Z_Construct_UClass_UTIHChildrenActorComponent_NoRegister()
	{
		return UTIHChildrenActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTIHChildrenActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHChildrenActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TIHChildrenActorComponent.h" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHChildrenActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHChildrenActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::ClassParams = {
		&UTIHChildrenActorComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTIHChildrenActorComponent()
	{
		if (!Z_Registration_Info_UClass_UTIHChildrenActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHChildrenActorComponent.OuterSingleton, Z_Construct_UClass_UTIHChildrenActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHChildrenActorComponent.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<UTIHChildrenActorComponent>()
	{
		return UTIHChildrenActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHChildrenActorComponent);
	UTIHChildrenActorComponent::~UTIHChildrenActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHChildrenActorComponent, UTIHChildrenActorComponent::StaticClass, TEXT("UTIHChildrenActorComponent"), &Z_Registration_Info_UClass_UTIHChildrenActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHChildrenActorComponent), 940589440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_4254123448(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

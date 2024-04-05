// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Projects_Rapid/Project/TIH/20231011/TIHStation/Plugins/TIHLibrary/Source/TIHLibrary/Public/TIHGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHGameInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHGameInstance();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	void UTIHGameInstance::StaticRegisterNativesUTIHGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHGameInstance);
	UClass* Z_Construct_UClass_UTIHGameInstance_NoRegister()
	{
		return UTIHGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTIHGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mTest_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * to-do\n\x09\xec\x97\xac\xea\xb8\xb0\xec\x97\x90\xeb\x8b\xa4\xea\xb0\x80 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 \xec\x8b\x9c\xec\xbc\x9c\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xeb\x8d\xb0 \xed\x9d\xa0...\n */" },
#endif
		{ "IncludePath", "TIHGameInstance.h" },
		{ "ModuleRelativePath", "Public/TIHGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n       \xec\x97\xac\xea\xb8\xb0\xec\x97\x90\xeb\x8b\xa4\xea\xb0\x80 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 \xec\x8b\x9c\xec\xbc\x9c\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94\xeb\x8d\xb0 \xed\x9d\xa0..." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHGameInstance_Statics::NewProp_mTest_MetaData[] = {
		{ "Category", "TIHGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FTIHDefaultStation* mTIHStation;\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FTIHDefaultStation* mTIHStation;" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTIHGameInstance_Statics::NewProp_mTest = { "mTest", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHGameInstance, mTest), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHGameInstance_Statics::NewProp_mTest_MetaData), Z_Construct_UClass_UTIHGameInstance_Statics::NewProp_mTest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHGameInstance_Statics::NewProp_mTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHGameInstance_Statics::ClassParams = {
		&UTIHGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTIHGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTIHGameInstance()
	{
		if (!Z_Registration_Info_UClass_UTIHGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHGameInstance.OuterSingleton, Z_Construct_UClass_UTIHGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHGameInstance.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<UTIHGameInstance>()
	{
		return UTIHGameInstance::StaticClass();
	}
	UTIHGameInstance::UTIHGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHGameInstance);
	UTIHGameInstance::~UTIHGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHGameInstance, UTIHGameInstance::StaticClass, TEXT("UTIHGameInstance"), &Z_Registration_Info_UClass_UTIHGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHGameInstance), 1438310253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHGameInstance_h_2918533154(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

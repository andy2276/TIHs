// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHStation/Public/TIHHouseNodeTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHHouseNodeTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TIHSTATION_API UClass* Z_Construct_UClass_ATIHHouseNodeTest();
	TIHSTATION_API UClass* Z_Construct_UClass_ATIHHouseNodeTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHStation();
// End Cross Module References
	void ATIHHouseNodeTest::StaticRegisterNativesATIHHouseNodeTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATIHHouseNodeTest);
	UClass* Z_Construct_UClass_ATIHHouseNodeTest_NoRegister()
	{
		return ATIHHouseNodeTest::StaticClass();
	}
	struct Z_Construct_UClass_ATIHHouseNodeTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mStaticMeshTestComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mStaticMeshTestComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATIHHouseNodeTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHStation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseNodeTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseNodeTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHHouseNodeTest.h" },
		{ "ModuleRelativePath", "Public/TIHHouseNodeTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATIHHouseNodeTest_Statics::NewProp_mStaticMeshTestComponent_MetaData[] = {
		{ "Category", "TIHHouseNodeTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TIHHouseNodeTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATIHHouseNodeTest_Statics::NewProp_mStaticMeshTestComponent = { "mStaticMeshTestComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATIHHouseNodeTest, mStaticMeshTestComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseNodeTest_Statics::NewProp_mStaticMeshTestComponent_MetaData), Z_Construct_UClass_ATIHHouseNodeTest_Statics::NewProp_mStaticMeshTestComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATIHHouseNodeTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATIHHouseNodeTest_Statics::NewProp_mStaticMeshTestComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATIHHouseNodeTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATIHHouseNodeTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATIHHouseNodeTest_Statics::ClassParams = {
		&ATIHHouseNodeTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATIHHouseNodeTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseNodeTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseNodeTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ATIHHouseNodeTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATIHHouseNodeTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATIHHouseNodeTest()
	{
		if (!Z_Registration_Info_UClass_ATIHHouseNodeTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATIHHouseNodeTest.OuterSingleton, Z_Construct_UClass_ATIHHouseNodeTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATIHHouseNodeTest.OuterSingleton;
	}
	template<> TIHSTATION_API UClass* StaticClass<ATIHHouseNodeTest>()
	{
		return ATIHHouseNodeTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATIHHouseNodeTest);
	ATIHHouseNodeTest::~ATIHHouseNodeTest() {}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHHouseNodeTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHHouseNodeTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATIHHouseNodeTest, ATIHHouseNodeTest::StaticClass, TEXT("ATIHHouseNodeTest"), &Z_Registration_Info_UClass_ATIHHouseNodeTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATIHHouseNodeTest), 1902012962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHHouseNodeTest_h_3291137193(TEXT("/Script/TIHStation"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHHouseNodeTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Source_TIHStation_Public_TIHHouseNodeTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

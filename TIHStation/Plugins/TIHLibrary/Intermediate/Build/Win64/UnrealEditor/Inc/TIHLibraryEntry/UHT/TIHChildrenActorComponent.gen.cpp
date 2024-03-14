// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHChildrenActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHChildrenActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHChildrenActorComponent();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHChildrenActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	DEFINE_FUNCTION(UTIHChildrenActorComponent::execAddChildActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChildActorClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	void UTIHChildrenActorComponent::StaticRegisterNativesUTIHChildrenActorComponent()
	{
		UClass* Class = UTIHChildrenActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildActorClass", &UTIHChildrenActorComponent::execAddChildActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics
	{
		struct TIHChildrenActorComponent_eventAddChildActorClass_Parms
		{
			TSubclassOf<AActor>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TIHChildrenActorComponent_eventAddChildActorClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TIHComponent" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTIHChildrenActorComponent, nullptr, "AddChildActorClass", nullptr, nullptr, Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::TIHChildrenActorComponent_eventAddChildActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::TIHChildrenActorComponent_eventAddChildActorClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHChildrenActorComponent);
	UClass* Z_Construct_UClass_UTIHChildrenActorComponent_NoRegister()
	{
		return UTIHChildrenActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTIHChildrenActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mChildrenActorClassArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mChildrenActorClassArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mChildrenActorClassArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildrenActorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenActorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenActorArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildActorTemplatesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorTemplatesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildActorTemplatesArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHChildrenActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTIHChildrenActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTIHChildrenActorComponent_AddChildActorClass, "AddChildActorClass" }, // 3066556703
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TIHChildrenActorComponent.h" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray_Inner = { "mChildrenActorClassArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildrenActorComponent" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
		{ "OnlyPlaceable", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray = { "mChildrenActorClassArray", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHChildrenActorComponent, mChildrenActorClassArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray_MetaData), Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray_Inner = { "ChildrenActorArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildrenActorComponent" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray = { "ChildrenActorArray", nullptr, (EPropertyFlags)0x0044800000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHChildrenActorComponent, ChildrenActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray_MetaData), Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray_Inner = { "ChildActorTemplatesArray", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray_MetaData[] = {
		{ "Category", "ChildrenActorComponent" },
		{ "ModuleRelativePath", "Public/TIHChildrenActorComponent.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray = { "ChildActorTemplatesArray", nullptr, (EPropertyFlags)0x0044000000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHChildrenActorComponent, ChildActorTemplatesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray_MetaData), Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHChildrenActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_mChildrenActorClassArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildrenActorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHChildrenActorComponent_Statics::NewProp_ChildActorTemplatesArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHChildrenActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHChildrenActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHChildrenActorComponent_Statics::ClassParams = {
		&UTIHChildrenActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTIHChildrenActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHChildrenActorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHChildrenActorComponent_Statics::PropPointers) < 2048);
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
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTIHChildrenActorComponent)
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHChildrenActorComponent, UTIHChildrenActorComponent::StaticClass, TEXT("UTIHChildrenActorComponent"), &Z_Registration_Info_UClass_UTIHChildrenActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHChildrenActorComponent), 3933367530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_3659826488(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHChildrenActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

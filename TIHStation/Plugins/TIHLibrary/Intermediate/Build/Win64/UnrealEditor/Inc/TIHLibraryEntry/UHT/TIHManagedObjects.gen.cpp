// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TIHLibrary/Public/TIHManagedObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTIHManagedObjects() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjComponentHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHNewAllocPrepareData();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjHeader;
class UScriptStruct* FTIHMngObjHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjHeader>()
{
	return FTIHMngObjHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedObjectState_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ManagedObjectState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_ManagedObjectState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_ManagedObjectState = { "ManagedObjectState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, ManagedObjectState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_ManagedObjectState_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_ManagedObjectState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjHeader, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Padding_MetaData), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Padding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_ManagedObjectState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewProp_Padding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjHeader",
		Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers),
		sizeof(FTIHMngObjHeader),
		alignof(FTIHMngObjHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas;
class UScriptStruct* FTIHMngObjPoolConfigureDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPoolConfigureDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPoolConfigureDatas>()
{
	return FTIHMngObjPoolConfigureDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WholeManagedObjectMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_WholeManagedObjectMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhase_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MaxPhase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddWholeCapasityWhenFullWhole_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AddWholeCapasityWhenFullWhole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option0_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Option0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option1_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Option1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPoolConfigureDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_WholeManagedObjectMaxCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_WholeManagedObjectMaxCount = { "WholeManagedObjectMaxCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, WholeManagedObjectMaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_WholeManagedObjectMaxCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_WholeManagedObjectMaxCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_MaxPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_MaxPhase = { "MaxPhase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, MaxPhase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_MaxPhase_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_MaxPhase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AddWholeCapasityWhenFullWhole_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AddWholeCapasityWhenFullWhole = { "AddWholeCapasityWhenFullWhole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, AddWholeCapasityWhenFullWhole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AddWholeCapasityWhenFullWhole_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AddWholeCapasityWhenFullWhole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option0_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option0 = { "Option0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, Option0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option0_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//{bitmask : isSet  WholeManagedObjectMaxCount,MaxPhase,AddWholeCapasityWhenFullWhole}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "{bitmask : isSet  WholeManagedObjectMaxCount,MaxPhase,AddWholeCapasityWhenFullWhole}" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option1 = { "Option1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigureDatas, Option1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option1_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_WholeManagedObjectMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_MaxPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AddWholeCapasityWhenFullWhole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewProp_Option1,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPoolConfigureDatas",
		Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::PropPointers),
		sizeof(FTIHMngObjPoolConfigureDatas),
		alignof(FTIHMngObjPoolConfigureDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure;
class UScriptStruct* FTIHMngObjPoolConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPoolConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPoolConfigure>()
{
	return FTIHMngObjPoolConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolDatas_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoolDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPoolConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_PoolDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_PoolDatas = { "PoolDatas", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, PoolDatas), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_PoolDatas_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_PoolDatas_MetaData) }; // 418133472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_SpawnSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_SpawnSpace = { "SpawnSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, SpawnSpace), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_SpawnSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_SpawnSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_OwnerActor_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_OwnerActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_DefaultTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_DefaultTransform = { "DefaultTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolConfigure, DefaultTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_DefaultTransform_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_DefaultTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_PoolDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_SpawnSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewProp_DefaultTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPoolConfigure",
		Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers),
		sizeof(FTIHMngObjPoolConfigure),
		alignof(FTIHMngObjPoolConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader;
class UScriptStruct* FTIHMngObjComponentHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjComponentHeader"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjComponentHeader>()
{
	return FTIHMngObjComponentHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProtocolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjComponentHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjComponentHeader, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Protocol_MetaData), Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Protocol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_AllocationSpace_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//{}\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjComponentHeader, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_ProtocolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_ProtocolOption = { "ProtocolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjComponentHeader, ProtocolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_ProtocolOption_MetaData), Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_ProtocolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Padding_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjComponentHeader, Padding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Padding_MetaData), Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Padding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_ProtocolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewProp_Padding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjComponentHeader",
		Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::PropPointers),
		sizeof(FTIHMngObjComponentHeader),
		alignof(FTIHMngObjComponentHeader),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjComponentHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData;
class UScriptStruct* FTIHNewAllocPrepareData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHNewAllocPrepareData"));
	}
	return Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHNewAllocPrepareData>()
{
	return FTIHNewAllocPrepareData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetClassType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_TargetClassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AllocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocateCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_AllocateCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CallParentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddOrder_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_AddOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetClassHash_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TargetClassHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHNewAllocPrepareData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassType = { "TargetClassType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, TargetClassType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassType_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocationSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocationSpace = { "AllocationSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, AllocationSpace), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocationSpace_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocationSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocateCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocateCount = { "AllocateCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, AllocateCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocateCount_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocateCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_CallParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_CallParentIndex = { "CallParentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, CallParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_CallParentIndex_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_CallParentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AddOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AddOrder = { "AddOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, AddOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AddOrder_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AddOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassHash = { "TargetClassHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, TargetClassHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassHash_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassHash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AllocateCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_CallParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_AddOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetClassHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHNewAllocPrepareData",
		Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::PropPointers),
		sizeof(FTIHNewAllocPrepareData),
		alignof(FTIHNewAllocPrepareData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHNewAllocPrepareData()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.InnerSingleton, Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas;
class UScriptStruct* FTIHCommandCreateAssignPoolDatas::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHCommandCreateAssignPoolDatas"));
	}
	return Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHCommandCreateAssignPoolDatas>()
{
	return FTIHCommandCreateAssignPoolDatas::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolMask_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PoolMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PoolOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataOption_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DataOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//USTRUCT()\n//struct FTIHMngObjPoolingDatas\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY()\n//\x09int8 AllocationSpace;\n//\n//\x09UPROPERTY()\n//\x09int8 UEObjectBase;\n//\n//\x09UPROPERTY()\n//\x09int16 PoolingCount;\n//\n//\x09UPROPERTY()\n//\x09TIHObjectHash64 UEObjectHash;\n//};\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTRUCT()\nstruct FTIHMngObjPoolingDatas\n{\n       GENERATED_BODY()\n\n       UPROPERTY()\n       int8 AllocationSpace;\n\n       UPROPERTY()\n       int8 UEObjectBase;\n\n       UPROPERTY()\n       int16 PoolingCount;\n\n       UPROPERTY()\n       TIHObjectHash64 UEObjectHash;\n};" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHCommandCreateAssignPoolDatas>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType = { "CreateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, CreateType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask = { "PoolMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, PoolMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption = { "PoolOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, PoolOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount = { "DataCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption = { "DataOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHCommandCreateAssignPoolDatas, DataOption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_CreateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_PoolOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewProp_DataOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHCommandCreateAssignPoolDatas",
		Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers),
		sizeof(FTIHCommandCreateAssignPoolDatas),
		alignof(FTIHCommandCreateAssignPoolDatas),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton, Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo[] = {
		{ FTIHMngObjHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewStructOps, TEXT("TIHMngObjHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjHeader), 1505819096U) },
		{ FTIHMngObjPoolConfigureDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewStructOps, TEXT("TIHMngObjPoolConfigureDatas"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolConfigureDatas), 418133472U) },
		{ FTIHMngObjPoolConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewStructOps, TEXT("TIHMngObjPoolConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolConfigure), 74255458U) },
		{ FTIHMngObjComponentHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewStructOps, TEXT("TIHMngObjComponentHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjComponentHeader), 418840677U) },
		{ FTIHNewAllocPrepareData::StaticStruct, Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewStructOps, TEXT("TIHNewAllocPrepareData"), &Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHNewAllocPrepareData), 3823794186U) },
		{ FTIHCommandCreateAssignPoolDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewStructOps, TEXT("TIHCommandCreateAssignPoolDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandCreateAssignPoolDatas), 1258235918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_381120936(TEXT("/Script/TIHLibraryEntry"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

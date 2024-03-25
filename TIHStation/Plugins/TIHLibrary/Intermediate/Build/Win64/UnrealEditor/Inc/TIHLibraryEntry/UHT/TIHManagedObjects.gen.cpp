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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject();
	TIHLIBRARYENTRY_API UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject_NoRegister();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjComponentHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjHeader();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas();
	TIHLIBRARYENTRY_API UScriptStruct* Z_Construct_UScriptStruct_FTIHNewAllocPrepareData();
	UPackage* Z_Construct_UPackage__Script_TIHLibraryEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure;
class UScriptStruct* FTIHMeshPoolConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMeshPoolConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMeshPoolConfigure>()
{
	return FTIHMeshPoolConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlidingWindowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowSplitType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlidingWindowSplitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlidingWindowSplitValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SlidingWindowSplitValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlindingWindowDirection_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SlindingWindowDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareLoadPathType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PrepareLoadPathType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareLoadPathDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_PrepareLoadPathDataIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateInnerQueryType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateInnerQueryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCategoryPop_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CreateCategoryPop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCategoryHashDefaultIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CreateCategoryHashDefaultIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMeshPoolConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xec\x9c\x88\xeb\x8f\x84\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09""EStuckEnd,\x09""EInfiniteEnd,ESlackEnd,ECircling,\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xec\x9c\x88\xeb\x8f\x84\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85\xec\x9d\xb4\xeb\x8b\xa4.\nEStuckEnd,      EInfiniteEnd,ESlackEnd,ECircling," },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType = { "SlidingWindowType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType = { "SlidingWindowSplitType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowSplitType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\x96\xbc\xeb\xa7\x88\xec\x94\xa9 \xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9\xec\x9d\x84 \xed\x95\xa0\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4. \xec\xa6\x89 \xed\x95\x9c\xeb\xb2\x88\xec\x9d\x98 \xeb\xb2\x94\xec\x9c\x84\xec\x9d\xb4\xeb\xa9\xb0, count \xec\x9d\xb4\xeb\x8b\xa4.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x9c\xeb\xb2\x88\xec\x97\x90 \xec\x96\xbc\xeb\xa7\x88\xec\x94\xa9 \xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9\xec\x9d\x84 \xed\x95\xa0\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4. \xec\xa6\x89 \xed\x95\x9c\xeb\xb2\x88\xec\x9d\x98 \xeb\xb2\x94\xec\x9c\x84\xec\x9d\xb4\xeb\xa9\xb0, count \xec\x9d\xb4\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue = { "SlidingWindowSplitValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlidingWindowSplitValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xeb\xb0\xa9\xed\x96\xa5 left = -1 , right = 1\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xac\xeb\x9d\xbc\xec\x9d\xb4\xeb\x94\xa9 \xeb\xb0\xa9\xed\x96\xa5 left = -1 , right = 1" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection = { "SlindingWindowDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, SlindingWindowDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xeb\x95\x8c \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\n\x09\x09perElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09UnknownType = 0,StartEnd = 1,PerElement = 2\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xeb\x95\x8c \xec\x96\xb4\xeb\x96\xbb\xea\xb2\x8c \xec\x96\xbb\xec\x96\xb4\xeb\x82\xbc\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\nstartEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\nperElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\nUnknownType = 0,StartEnd = 1,PerElement = 2" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType = { "PrepareLoadPathType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, PrepareLoadPathType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09to-do\n\x09\x09\xec\x9d\xb4\xea\xb1\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94\xea\xb3\xb3 \xec\xb0\xa8\xea\xb8\xb0 \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9d\xb4\xec\x9c\xa0\xeb\x8a\x94 \xec\x9e\x88\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb8\xb0\xec\x96\xb5\xec\x9d\xb4 \xec\x95\x88\xeb\x82\xa8.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xec\x9d\xb4\xea\xb1\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94\xea\xb3\xb3 \xec\xb0\xa8\xea\xb8\xb0 \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9d\xb4\xec\x9c\xa0\xeb\x8a\x94 \xec\x9e\x88\xeb\x8a\x94\xeb\x8d\xb0 \xea\xb8\xb0\xec\x96\xb5\xec\x9d\xb4 \xec\x95\x88\xeb\x82\xa8." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex = { "PrepareLoadPathDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, PrepareLoadPathDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\n\x09\x09perElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\n\x09\x09UnknownType = 0,StartEnd = 1,PerElement = 2\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "startEnd \xeb\x8a\x94 0 \xea\xb3\xbc 1 \xec\x9d\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\xa9\xb0\nperElement \xeb\x8a\x94 \xea\xb7\xb8\xeb\x83\xa5 \xea\xb0\x81 \xec\x9d\xb8\xeb\x8d\xb1\xec\x8a\xa4\xec\x9d\xb4\xeb\x8b\xa4.\nUnknownType = 0,StartEnd = 1,PerElement = 2" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType = { "CreateInnerQueryType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateInnerQueryType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac \xed\x81\x90\xeb\xa5\xbc \xed\x8c\x9d\xed\x95\xa0\xea\xb1\xb4\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\x09\x09\xeb\xb3\xb4\xed\x86\xb5 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xea\xb0\x80 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\xa0\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac \xed\x81\x90\xeb\xa5\xbc \xed\x8c\x9d\xed\x95\xa0\xea\xb1\xb4\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4.\n\xeb\xb3\xb4\xed\x86\xb5 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xea\xb0\x80 \xed\x95\x98\xeb\x82\x98\xec\x9d\x98 \xeb\xa7\xa4\xec\x89\xac\xeb\xa5\xbc \xeb\x9c\xbb\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80 \xec\x95\x84\xeb\x8b\x88\xeb\xa9\xb4 \xeb\xb2\x94\xec\x9c\x84\xeb\xa5\xbc \xec\xa0\x95\xed\x95\x98\xeb\x8a\x94\xec\xa7\x80\xeb\xa5\xbc \xec\xa0\x95\xed\x95\xa0\xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop = { "CreateCategoryPop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateCategoryPop), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\x09mDefaultCategories.Add(0, TEXT(\"NotAllocCategory\"));\n\x09\x09mDefaultCategories.Add(1, TEXT(\"Default0\"));\n\x09\x09mDefaultCategories.Add(2, TEXT(\"Default1\"));\n\x09\x09mDefaultCategories.Add(3, TEXT(\"Default2\"));\n\x09\x09mDefaultCategories.Add(4, TEXT(\"Default3\"));\n\x09\x09mDefaultCategories.Add(5, TEXT(\"StMeshDefault\"));\n\x09\x09mDefaultCategories.Add(6, TEXT(\"SkMeshDefault\"));\n\x09\x09\xec\x9d\xb4\xea\xb2\x8c \xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xec\x9e\x84.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mDefaultCategories.Add(0, TEXT(\"NotAllocCategory\"));\nmDefaultCategories.Add(1, TEXT(\"Default0\"));\nmDefaultCategories.Add(2, TEXT(\"Default1\"));\nmDefaultCategories.Add(3, TEXT(\"Default2\"));\nmDefaultCategories.Add(4, TEXT(\"Default3\"));\nmDefaultCategories.Add(5, TEXT(\"StMeshDefault\"));\nmDefaultCategories.Add(6, TEXT(\"SkMeshDefault\"));\n\xec\x9d\xb4\xea\xb2\x8c \xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8 \xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac\xec\x9e\x84." },
#endif
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex = { "CreateCategoryHashDefaultIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolConfigure, CreateCategoryHashDefaultIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlidingWindowSplitValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_SlindingWindowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_PrepareLoadPathDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateInnerQueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryPop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewProp_CreateCategoryHashDefaultIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMeshPoolConfigure",
		Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers),
		sizeof(FTIHMeshPoolConfigure),
		alignof(FTIHMeshPoolConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure;
class UScriptStruct* FTIHMeshPoolCenterConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMeshPoolCenterConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMeshPoolCenterConfigure>()
{
	return FTIHMeshPoolCenterConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderType_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_OrderType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09?? \xec\x9d\xb4\xea\xb1\xb0 \xec\x99\x9c\xeb\xa7\x8c\xeb\x93\xa4\xec\x97\x87\xec\xa7\x80?\n//\x09\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xea\xb2\xb0\xea\xb5\xad \xeb\xa7\xa4\xec\x89\xac\xed\x92\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "?? \xec\x9d\xb4\xea\xb1\xb0 \xec\x99\x9c\xeb\xa7\x8c\xeb\x93\xa4\xec\x97\x87\xec\xa7\x80?\n\xec\x9d\xb4\xea\xb1\xb0\xeb\x8a\x94 \xea\xb2\xb0\xea\xb5\xad \xeb\xa7\xa4\xec\x89\xac\xed\x92\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0\xec\x9c\x84\xed\x95\x9c \xec\xa0\x95\xeb\xb3\xb4\xea\xb0\x80 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMeshPoolCenterConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType = { "OrderType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMeshPoolCenterConfigure, OrderType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData), Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewProp_OrderType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMeshPoolCenterConfigure",
		Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers),
		sizeof(FTIHMeshPoolCenterConfigure),
		alignof(FTIHMeshPoolCenterConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure.InnerSingleton;
	}
	void UTIHMeshPoolConfigObject::StaticRegisterNativesUTIHMeshPoolConfigObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTIHMeshPoolConfigObject);
	UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject_NoRegister()
	{
		return UTIHMeshPoolConfigObject::StaticClass();
	}
	struct Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMeshDefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mMeshDefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMeshPathCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mMeshPathCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TIHManagedObjects.h" },
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath = { "mMeshDefaultPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHMeshPoolConfigObject, mMeshDefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount = { "mMeshPathCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTIHMeshPoolConfigObject, mMeshPathCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshDefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::NewProp_mMeshPathCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTIHMeshPoolConfigObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::ClassParams = {
		&UTIHMeshPoolConfigObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTIHMeshPoolConfigObject()
	{
		if (!Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton, Z_Construct_UClass_UTIHMeshPoolConfigObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTIHMeshPoolConfigObject.OuterSingleton;
	}
	template<> TIHLIBRARYENTRY_API UClass* StaticClass<UTIHMeshPoolConfigObject>()
	{
		return UTIHMeshPoolConfigObject::StaticClass();
	}
	UTIHMeshPoolConfigObject::UTIHMeshPoolConfigObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTIHMeshPoolConfigObject);
	UTIHMeshPoolConfigObject::~UTIHMeshPoolConfigObject() {}
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n\x09\x09\x09\x09\x09\x09\x09\x09ManagedObject Meta Infos\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n                                                               ManagedObject Meta Infos\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98" },
#endif
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure;
class UScriptStruct* FTIHMngObjPoolCenterConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjPoolCenterConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjPoolCenterConfigure>()
{
	return FTIHMngObjPoolCenterConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareDataQueCapacityCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_PrepareDataQueCapacityCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForActorQueueCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ForActorQueueCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForCompositeCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ForCompositeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForLeafCount_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_ForLeafCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09to-do\n\x09\xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 \xec\x8a\xa4\xed\x85\x8c\xec\x9d\xb4\xec\x85\x98\xec\x9d\x84 \xec\x8b\x9c\xec\x9e\x91\xed\x95\x98\xea\xb8\xb0\xec\xa0\x84\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa4\x98\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "to-do\n\xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 \xec\x8a\xa4\xed\x85\x8c\xec\x9d\xb4\xec\x85\x98\xec\x9d\x84 \xec\x8b\x9c\xec\x9e\x91\xed\x95\x98\xea\xb8\xb0\xec\xa0\x84\xec\x97\x90 \xec\x84\xa4\xec\xa0\x95\xed\x95\xb4\xec\xa4\x98\xec\x95\xbc\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjPoolCenterConfigure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_PrepareDataQueCapacityCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_PrepareDataQueCapacityCount = { "PrepareDataQueCapacityCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolCenterConfigure, PrepareDataQueCapacityCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_PrepareDataQueCapacityCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_PrepareDataQueCapacityCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForActorQueueCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForActorQueueCount = { "ForActorQueueCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolCenterConfigure, ForActorQueueCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForActorQueueCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForActorQueueCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForCompositeCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForCompositeCount = { "ForCompositeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolCenterConfigure, ForCompositeCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForCompositeCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForCompositeCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForLeafCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForLeafCount = { "ForLeafCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHMngObjPoolCenterConfigure, ForLeafCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForLeafCount_MetaData), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForLeafCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_PrepareDataQueCapacityCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForActorQueueCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForCompositeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewProp_ForLeafCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjPoolCenterConfigure",
		Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::PropPointers),
		sizeof(FTIHMngObjPoolCenterConfigure),
		alignof(FTIHMngObjPoolCenterConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure.InnerSingleton;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUEClassBase_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_TargetUEClassBase;
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09NewAlloc Prepare\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n                                                                               NewAlloc Prepare\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHNewAllocPrepareData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetUEClassBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetUEClassBase = { "TargetUEClassBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTIHNewAllocPrepareData, TargetUEClassBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetUEClassBase_MetaData), Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetUEClassBase_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewProp_TargetUEClassBase,
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
		{ "Comment", "/*\n\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n\x09\x09\x09\x09\x09\x09\x09\x09\x09""Assign Pool\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x8c\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x90\n                                                                       Assign Pool\n\xe2\x94\x94\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x98" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TIHMngObjConfigure;
class UScriptStruct* FTIHMngObjConfigure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTIHMngObjConfigure, (UObject*)Z_Construct_UPackage__Script_TIHLibraryEntry(), TEXT("TIHMngObjConfigure"));
	}
	return Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.OuterSingleton;
}
template<> TIHLIBRARYENTRY_API UScriptStruct* StaticStruct<FTIHMngObjConfigure>()
{
	return FTIHMngObjConfigure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TIHManagedObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTIHMngObjConfigure>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TIHLibraryEntry,
		nullptr,
		&NewStructOps,
		"TIHMngObjConfigure",
		nullptr,
		0,
		sizeof(FTIHMngObjConfigure),
		alignof(FTIHMngObjConfigure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTIHMngObjConfigure()
	{
		if (!Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.InnerSingleton, Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TIHMngObjConfigure.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo[] = {
		{ FTIHMeshPoolConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMeshPoolConfigure_Statics::NewStructOps, TEXT("TIHMeshPoolConfigure"), &Z_Registration_Info_UScriptStruct_TIHMeshPoolConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMeshPoolConfigure), 2386625599U) },
		{ FTIHMeshPoolCenterConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMeshPoolCenterConfigure_Statics::NewStructOps, TEXT("TIHMeshPoolCenterConfigure"), &Z_Registration_Info_UScriptStruct_TIHMeshPoolCenterConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMeshPoolCenterConfigure), 4261091302U) },
		{ FTIHMngObjHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjHeader_Statics::NewStructOps, TEXT("TIHMngObjHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjHeader), 3650520301U) },
		{ FTIHMngObjComponentHeader::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjComponentHeader_Statics::NewStructOps, TEXT("TIHMngObjComponentHeader"), &Z_Registration_Info_UScriptStruct_TIHMngObjComponentHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjComponentHeader), 418840677U) },
		{ FTIHMngObjPoolCenterConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolCenterConfigure_Statics::NewStructOps, TEXT("TIHMngObjPoolCenterConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolCenterConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolCenterConfigure), 4294195490U) },
		{ FTIHMngObjPoolConfigureDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigureDatas_Statics::NewStructOps, TEXT("TIHMngObjPoolConfigureDatas"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigureDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolConfigureDatas), 418133472U) },
		{ FTIHMngObjPoolConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjPoolConfigure_Statics::NewStructOps, TEXT("TIHMngObjPoolConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjPoolConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjPoolConfigure), 74255458U) },
		{ FTIHNewAllocPrepareData::StaticStruct, Z_Construct_UScriptStruct_FTIHNewAllocPrepareData_Statics::NewStructOps, TEXT("TIHNewAllocPrepareData"), &Z_Registration_Info_UScriptStruct_TIHNewAllocPrepareData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHNewAllocPrepareData), 3937283054U) },
		{ FTIHCommandCreateAssignPoolDatas::StaticStruct, Z_Construct_UScriptStruct_FTIHCommandCreateAssignPoolDatas_Statics::NewStructOps, TEXT("TIHCommandCreateAssignPoolDatas"), &Z_Registration_Info_UScriptStruct_TIHCommandCreateAssignPoolDatas, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHCommandCreateAssignPoolDatas), 1400191168U) },
		{ FTIHMngObjConfigure::StaticStruct, Z_Construct_UScriptStruct_FTIHMngObjConfigure_Statics::NewStructOps, TEXT("TIHMngObjConfigure"), &Z_Registration_Info_UScriptStruct_TIHMngObjConfigure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTIHMngObjConfigure), 3149738079U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTIHMeshPoolConfigObject, UTIHMeshPoolConfigObject::StaticClass, TEXT("UTIHMeshPoolConfigObject"), &Z_Registration_Info_UClass_UTIHMeshPoolConfigObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTIHMeshPoolConfigObject), 3340085010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_3377429161(TEXT("/Script/TIHLibraryEntry"),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Rapid_Project_TIH_20231011_TIHStation_Plugins_TIHLibrary_Source_TIHLibrary_Public_TIHManagedObjects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TIHTempLibrary.generated.h"

#pragma region TIHReturnValue

enum ETIHNodeReturnForGraph
{
	NotImplement = -256,
};

#pragma endregion

#define TIHDEBUG_MACRO_OPTIMAIZE (!defined(UE_BUILD_SHIPPING)&&(defined(UE_BUILD_DEBUG)||defined(UE_BUILD_DEVELOPMENT)))

#if UE_BUILD_SHIPPING

#define TIHDEBUG_LOG(logDescription)

#else
#define TIHDEBUG_LOG(logDescription)
#endif


class FTIHDebugLog
{
public:
	std::deque<std::string> mLogs;
	~FTIHDebugLog();
	static FTIHDebugLog* GetTIHDebugLog()
	{
		static FTIHDebugLog* self = new FTIHDebugLog();
		return self;
	}
protected:

private:
	FTIHDebugLog();
protected:

private:

};





#pragma region NodeGraphInterface
template
<typename TIHNodeType = UObject>
class ITIHNodeGraph
{
public:
	ITIHNodeGraph();
	virtual ~ITIHNodeGraph() = 0
	{
	}
protected:
	
public:
	virtual INT64 AddNodeByPtr(TIHNodeType* ptr);
	virtual INT64 AddNodeBySmartPtr(TSharedPtr<TIHNodeType> smartPtr);
	virtual INT64 AddNodeByNewPtr();

	virtual INT64 InsertNodeByPtrWithIndex(TIHNodeType* ptr, int32 index);
	virtual INT64 InsertNodeByNewPrt(int32 index);

	virtual TIHNodeType* SearchNodeByTagConnectFirst(FName tag);
	virtual TArray< TIHNodeType*> SearchNodeByTagConnectAll(FName tag);
	virtual TSharedPtr<TIHNodeType> SearchSmartNodeByTagConnectFirst(FName tag);
	virtual TArray< TSharedPtr<TIHNodeType>> SearchSmartNodeByTagConnectAll(FName tag);

	virtual INT64 RemoveNodeByTagConnectFirst(FName tag);
	virtual INT64 RemoveNodeByTagConnectAll(FName tag);
	virtual INT64 RemoveNodeByIndex(int32 index);

};
#pragma region TemplateImplement
template
<typename TIHNodeType /*= UObject*/>
ITIHNodeGraph<TIHNodeType>::ITIHNodeGraph()
{
	
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::AddNodeByPtr(TIHNodeType* ptr)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::AddNodeBySmartPtr(TSharedPtr<TIHNodeType> smartPtr)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::AddNodeByNewPtr()
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::InsertNodeByPtrWithIndex(TIHNodeType* ptr, int32 index)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::InsertNodeByNewPrt(int32 index)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}
template
<typename TIHNodeType /*= UObject*/>
TIHNodeType* ITIHNodeGraph<TIHNodeType>::SearchNodeByTagConnectFirst(FName tag)
{
	return nullptr;
}
template
<typename TIHNodeType /*= UObject*/>
TArray< TIHNodeType*> ITIHNodeGraph<TIHNodeType>::SearchNodeByTagConnectAll(FName tag)
{
	return TArray< TIHNodeType*>();
}

template
<typename TIHNodeType /*= UObject*/>
TSharedPtr<TIHNodeType> ITIHNodeGraph<TIHNodeType>::SearchSmartNodeByTagConnectFirst(FName tag)
{
	return nullptr;
}

template
<typename TIHNodeType /*= UObject*/>
TArray< TSharedPtr<TIHNodeType>> ITIHNodeGraph<TIHNodeType>::SearchSmartNodeByTagConnectAll(FName tag)
{
	return TArray<  TSharedPtr<TIHNodeType>>();
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::RemoveNodeByTagConnectFirst(FName tag)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::RemoveNodeByTagConnectAll(FName tag)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}

template
<typename TIHNodeType /*= UObject*/>
INT64 ITIHNodeGraph<TIHNodeType>::RemoveNodeByIndex(int32 index)
{
	return (INT64)ETIHNodeReturnForGraph::NotImplement;
}


#pragma endregion
#pragma endregion // nodeGraphInterface

#pragma region TIHPath
class FTIHFilePathData
{
public:

	enum ETIHFilePathType : BYTE
	{
		NotSave = 0,
		RemoteStorage = 1 << 0,
		LocalStorage = 1 << 1,
	};

	const ETIHFilePathType GetSaveFilePathEnum()
	{
		return mFilePathSavePlaceType;
	}
	const int32 GetSaveFilePathTypeWithInt32()
	{
		int32 reValue= 0;

		switch (mFilePathSavePlaceType)
		{
		case FTIHFilePathData::NotSave:
			reValue = 0;
			break;
		case FTIHFilePathData::RemoteStorage:
			reValue = 1;
			break;
		case FTIHFilePathData::LocalStorage:
			reValue = 2;
			break;
		}
		return reValue;
	}
	const FString GetSaveLocalFilePath()
	{
		TIHDEBUG_LOG("changeLocalPath return before");
		return mLocalSavePath;
	}
	
	const FString GetSaveRemoteFilePath()
	{
		TIHDEBUG_LOG("get RemoteSavePath");
		return mRemoteSavePath;
	}
	
	const FString SetLocalSavePathReturnBeforePath(const FString& localPath )
	{
		TIHDEBUG_LOG("changeLocalPath return before");
		FString beforePath = mLocalSavePath;
		mLocalSavePath = localPath;
		return beforePath;
	}
	void SetLocalSavePathDirectly(const FString& localPath)
	{
		TIHDEBUG_LOG("changeLocalPath");
		mLocalSavePath = localPath;
	}
	const FString SetRemoteSavePathReturnBeforePath(const FString& remotePath)
	{
		TIHDEBUG_LOG("changeLocalPath return before");
		FString beforePath = mLocalSavePath;
		mLocalSavePath = remotePath;
		return beforePath;
	}
	void SetRemoteSavePathDirectly(const FString& remotePath)
	{
		TIHDEBUG_LOG("changeLocalPath");
		mLocalSavePath = remotePath;
	}

protected:

private:

protected:
	ETIHFilePathType mFilePathSavePlaceType;
	FString mLocalSavePath;
	FString mRemoteSavePath;
private:

};

#pragma endregion


enum ETIHHouseNodeMainTitleTypes :char
{
	Matter = 1,
	Display = 2,
};
enum ETIHHouseNodeCastTypes :char
{
	UTIHHouseNodeType,
	UTIHHouseNodeMatterType,
	UTIHHouseNodeDisplayType,
};

union FUnionTIHHouseNodeProtocol
{
	union FUnionTIHHouseNodeTitles
	{
		struct FTIHHouseNodeTitleSections
		{
			char MainTitleType;
			char CastType;
			union FUnionTIHHouseNodeTitleSubTitles
			{
				struct FTIHHouseNodeTitleMatterDesc
				{
					char IndexInStuffProcessor;
					char AddtionalCommand;
				}MatterDesc;
				struct FTIHHouseNodeTitleDisplayDesc
				{
					char b;
					char c;
				}DisplayDesc;
				char SubTitleDataArray[2];
			}SubTitles;
		}Sections;
		int32 TitleWholeData;
	}Titles;
	union
	{
		struct
		{

			union FUnionTIHA
			{

			}A;
			union FUnionTIHB
			{

			}B;
		};
		int32 OptionWholeData;
	}Methods;

	INT64 ProtocolWholeData;
};


/**
 * 
 */
UCLASS()
class TIHHOUSINGPAK_API UTIHTempLibrary : public UObject
{
	GENERATED_BODY()
	
};




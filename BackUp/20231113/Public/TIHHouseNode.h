// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 이거는 나중에 라이브러리로 옮겨야한다.
 */
typedef unsigned long TIHReturnValue;
namespace TIHReturnHelper
{
	namespace Common
	{
		enum ReturnSemantics : unsigned long
		{
			PassReturn = 0,
			EmptyReturn = 0,
		};
	}
	namespace Container
	{
		enum ReturnSemantics : unsigned long
		{
			EmptyReturn = 0,
			FailAdd = 1,
			FailDelete = 2,
			SuccessAdd = 11,
			SuccessDelete = 12,
		};
	}
	
}

class TIHHOUSINGPAK_API FTIHHouseNode
{
public:
	FTIHHouseNode();
	virtual ~FTIHHouseNode()=0
	{
	}
#pragma region Operation Function
	/*!
	*	일반적인 탐색
	*/
	virtual TIHReturnValue ExploreForOneFrame();
	/*!
	*	하나씩 전진	
	*/
	virtual TIHReturnValue ExploreForEachFrame();

#pragma endregion
#pragma region Add/Delete Function
	/*!
	*	
	*/
	virtual TIHReturnValue AddNode(FTIHHouseNode* houseNode);
	/*!
	*	
	*/
	virtual TIHReturnValue RemoveNodeByIndex(int32 index);
#pragma endregion
#pragma region Find Function
	/*!
	*	
	*/
	virtual FTIHHouseNode* GetNodeByIndex(int32 index);
	/*!
	*	
	*/
	virtual std::vector<std::shared_ptr< FTIHHouseNode>> GetNodesByTag(const FName& tagName);
#pragma endregion
#pragma region Tag Function
	/*!
	*	아직은 안만듦
	*/
	TIHReturnValue AddTag(FName tagName);
	/*!
	*	아직은 안만듦
	*/
	TIHReturnValue AddTags(TArray<FName> tagNameArray);
	/*!
	*	아직은 안만듦
	*/
	TIHReturnValue RemoveTagByTagName(FName tagName);
	/*!
	*	아직은 안만듦
	*/
	TIHReturnValue RemoveTagByIndex(int32 index);

#pragma endregion

protected:
	//THashTable<FName> TagHashTable;
	TSet<FName> TagHashTable;
private:

	
};

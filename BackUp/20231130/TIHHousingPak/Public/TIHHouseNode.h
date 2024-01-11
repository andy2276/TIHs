// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHTempLibrary.h"

#include "TIHHouseNode.generated.h"

class FTIHHouseNodeComposite;
class FTIHHouseVisitor;

enum ETIHHouseResultProtocol : char
{

	ErrorResult = -1,
	EmptyOrTest = 0,
	NodeGraph = 1,
	
};

union FUnionTIHHouseNodeResult
{
	
	union FUnionTIHHouseNodeProtocol
	{
		char TIHHouseNodeResultType;
		struct FTIHHouseNodeGraph
		{
			char Param0;
			char Param1;
			char Param2;
		};
		int32 WholeValue32;
	}Protocol;
	union  FUnionTIHHouseNodeAction
	{
		struct FTIHHouseCompositeAddResult
		{
			short CompositeIndex;
			short LayerIndex;
		}AddResult;
		struct FTIHHouseCompositeInsertResult
		{
			short CompositeIndex;
			short LayerIndex;
		}InsertResult;
		struct FTIHHouseCompositeSearchResult
		{
			short CompositeIndex;
			short LayerIndex;
		}SearchResult;
		struct FTIHHouseCompositeDeleteResult
		{
			short CompositeIndex;
			short LayerIndex;
		}DeleteResult;
		
	}NodeAction;

	INT64 WholeValue64;
};

/*!
*	@brief build 제작을 위한 node
*	@detail 
*/
UCLASS(Abstract)
class TIHHOUSINGPAK_API UTIHHouseNode : public UObject,public ITIHNodeGraph<UTIHHouseNode>
{
	GENERATED_BODY()
public:
	/*!
	*	@brief 나중에 result 를 컨트롤 하는곳에 옮기자. 혹은 ETIHHouseResultProtocol 만옮기던가
	*	@detail 
	*/
	static INT64 ConvertHouseResultToInt64(const FUnionTIHHouseNodeResult result)
	{
		INT64 reValue = result.WholeValue64;
		return reValue;
	}


	UTIHHouseNode();

	virtual void AcceptVisitor(FTIHHouseVisitor* visitor);


	INT64 AddNodeByPtr(UTIHHouseNode* ptr) override;


	INT64 AddNodeBySmartPtr(TSharedPtr<UTIHHouseNode> smartPtr) override;


	INT64 AddNodeByNewPtr() override;


	INT64 InsertNodeByPtrWithIndex(UTIHHouseNode* ptr, int32 index) override;


	INT64 InsertNodeByNewPrt(int32 index) override;


	UTIHHouseNode* SearchNodeByTagConnectFirst(FName tag) override;


	TArray<UTIHHouseNode*> SearchNodeByTagConnectAll(FName tag) override;


	TSharedPtr<UTIHHouseNode> SearchSmartNodeByTagConnectFirst(FName tag) override;


	TArray<TSharedPtr<UTIHHouseNode>> SearchSmartNodeByTagConnectAll(FName tag) override;


	INT64 RemoveNodeByTagConnectFirst(FName tag) override;


	INT64 RemoveNodeByTagConnectAll(FName tag) override;


	INT64 RemoveNodeByIndex(int32 index) override;



protected:

private:

protected:
	/*!
	*	@brief 인터페이스 구현 법칙을 무시한 변수
	*	@detail
	*/
	int32 InsertDirection;

	int32 mIndexWithinParentComposite;
	/*!
	*	@brief 노드의 위치
	*	@detail 
	*/
	UPROPERTY()
	int32 mNodePositionX;
	/*!
	*	@brief 노드의 위치
	*	@detail 
	*/
	UPROPERTY()
	int32 mNodePositionY;
	/*!
	*	@brief weakptr 부모 노드
	*	@detail 
	*/
	TWeakPtr<UTIHHouseNode> mParentNode;
	/*!
	*	@brief sharedptr 자식노드들을 가지고 있는 composite 
	*	@detail 
	*/
	TArray<TSharedPtr<FTIHHouseNodeComposite>> mBuildNodeComposite;
private:
	int32 mCurrentLayerIndex;
};

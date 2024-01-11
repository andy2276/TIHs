#pragma once

#include "CoreMinimal.h"
#include "TIHTempLibrary.h"

class UTIHHouseNode;
class FTIHLayer;

/*!
*	@brief 레이어이다. 노드들을 가지는 컨테이너이며, 물체가 배치되어야하는 영역을 추상화한 클래스
*	@detail
*/
class TIHHOUSINGPAK_API FTIHHouseNodeComposite : public ITIHNodeGraph<UTIHHouseNode>
{
public:
	FTIHHouseNodeComposite() {};
	virtual ~FTIHHouseNodeComposite();

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 AddNodeByPtr(UTIHHouseNode* ptr) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 AddNodeBySmartPtr(TSharedPtr<UTIHHouseNode> smartPtr) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 AddNodeByNewPtr() override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 InsertNodeByPtrWithIndex(UTIHHouseNode* ptr, int32 index) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 InsertNodeByNewPrt(int32 index) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	UTIHHouseNode* SearchNodeByTagConnectFirst(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	TArray<UTIHHouseNode*> SearchNodeByTagConnectAll(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	TSharedPtr<UTIHHouseNode> SearchSmartNodeByTagConnectFirst(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	TArray<TSharedPtr<UTIHHouseNode>> SearchSmartNodeByTagConnectAll(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 RemoveNodeByTagConnectFirst(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 RemoveNodeByTagConnectAll(FName tag) override;

	/*!
	*	@brief 
	*	@detail 
	*/
	INT64 RemoveNodeByIndex(int32 index) override;

private:

protected:
	
	FTransform mReleativeTransform;

private:
	UTIHHouseNode* mOwnerNode;
	FTIHLayer* mBuildLayer;
	TArray<TSharedPtr<UTIHHouseNode>> mBuildNodeChilds;
	
};

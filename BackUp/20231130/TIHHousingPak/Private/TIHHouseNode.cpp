// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNode.h"
#include "TIHHouseNodeComposite.h"
#include "TIHHouseNodeLayer.h"

UTIHHouseNode::UTIHHouseNode()
{
	
}

void UTIHHouseNode::AcceptVisitor(FTIHHouseVisitor* visitor)
{
	
}

INT64 UTIHHouseNode::AddNodeByPtr(UTIHHouseNode* ptr)
{
	TIHDEBUG_LOG("NotImplement");
	FUnionTIHHouseNodeResult reValue;
	reValue.WholeValue64 = 0;
	int32 ptrReserveIndex = ptr->mIndexWithinParentComposite;

	if(-1 < ptrReserveIndex)
	{
		if (ptrReserveIndex < mBuildNodeComposite.Num())
		{
			reValue.Protocol.TIHHouseNodeResultType = ETIHHouseResultProtocol::NodeGraph;

			int32 indexAddCompositeResult = mBuildNodeComposite[ptrReserveIndex]->AddNodeByPtr(ptr);
			//	이걸 이제 컴포지트 결과 to 변환후
			//	composite index 와 지금 넣을거 넣기
		}
	}
	else // ptrReserveIndex <= -1
	{
		ptrReserveIndex *= -1;
		

	}
	
	return 
}

INT64 UTIHHouseNode::AddNodeBySmartPtr(TSharedPtr<UTIHHouseNode> smartPtr)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

INT64 UTIHHouseNode::AddNodeByNewPtr()
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

INT64 UTIHHouseNode::InsertNodeByPtrWithIndex(UTIHHouseNode* ptr, int32 index)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

INT64 UTIHHouseNode::InsertNodeByNewPrt(int32 index)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

UTIHHouseNode* UTIHHouseNode::SearchNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	return nullptr;
}

TArray<UTIHHouseNode*> UTIHHouseNode::SearchNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	return TArray< UTIHHouseNode*>();
}

TSharedPtr<UTIHHouseNode> UTIHHouseNode::SearchSmartNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	
	return nullptr;
}

TArray<TSharedPtr<UTIHHouseNode>> UTIHHouseNode::SearchSmartNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	return TArray<TSharedPtr<UTIHHouseNode>>();
}

INT64 UTIHHouseNode::RemoveNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

INT64 UTIHHouseNode::RemoveNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}

INT64 UTIHHouseNode::RemoveNodeByIndex(int32 index)
{
	TIHDEBUG_LOG("NotImplement");
	return ETIHNodeReturnForGraph::NotImplement;
}


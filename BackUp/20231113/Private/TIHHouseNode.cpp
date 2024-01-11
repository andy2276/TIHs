// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNode.h"

FTIHHouseNode::FTIHHouseNode()
{
}

TIHReturnValue FTIHHouseNode::ExploreForOneFrame()
{
	return 0;
}

TIHReturnValue FTIHHouseNode::ExploreForEachFrame()
{
	return 0;
}

TIHReturnValue FTIHHouseNode::AddNode(FTIHHouseNode* houseNode)
{
	return 0;
}

TIHReturnValue FTIHHouseNode::RemoveNodeByIndex(int32 index)
{
	return 0;
}

FTIHHouseNode* FTIHHouseNode::GetNodeByIndex(int32 index)
{
	return nullptr;
}

std::vector<std::shared_ptr< FTIHHouseNode>> FTIHHouseNode::GetNodesByTag(const FName& tagName)
{
	return std::vector<std::shared_ptr< FTIHHouseNode>>();
}

TIHReturnValue FTIHHouseNode::AddTag(FName tagName)
{
	TIHReturnValue reValue = (TIHReturnValue)TIHReturnHelper::Common::ReturnSemantics::EmptyReturn;
	
	if(false == TagHashTable.Contains(tagName))
	{
		TagHashTable.Add(tagName);
		reValue = (TIHReturnValue)TIHReturnHelper::Container::ReturnSemantics::SuccessAdd;
	}
	else 
	{
		reValue = (TIHReturnValue)TIHReturnHelper::Container::ReturnSemantics::FailAdd;
	}
	return reValue;
}

TIHReturnValue FTIHHouseNode::AddTags(TArray<FName> tagNameArray)
{
	bool failAddCommand = false;
	TIHReturnValue reValue = (TIHReturnValue)TIHReturnHelper::Container::ReturnSemantics::SuccessAdd;
	for(int itor = tagNameArray.Num()-1; -1 < itor; --itor)
	{
		reValue = AddTag(tagNameArray[itor]);
		if((TIHReturnValue)TIHReturnHelper::Container::ReturnSemantics::FailAdd == reValue)
		{
			failAddCommand = true;
		}
	}
	if(true == failAddCommand)
	{
		reValue = (TIHReturnValue)TIHReturnHelper::Container::ReturnSemantics::FailAdd;
	}
	return reValue;

}

TIHReturnValue FTIHHouseNode::RemoveTagByTagName(FName tagName)
{
	/*!
	*	not yet
	*/
	return TIHReturnHelper::Container::ReturnSemantics::EmptyReturn;
}

TIHReturnValue FTIHHouseNode::RemoveTagByIndex(int32 index)
{
	/*!
	*	not yet
	*/
	return TIHReturnHelper::Container::ReturnSemantics::EmptyReturn;
}


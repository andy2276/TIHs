// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FTIHHouseNodeComposite;
/*!
*	@brief build 제작을 위한 node
*	@detail 
*/
class TIHHOUSINGPAK_API FTIHHouseNode
{
public:
	FTIHHouseNode();
	virtual ~FTIHHouseNode() = 0
	{

	}

	virtual void AddNodeByPointer(FTIHHouseNode* newNode);
	/*!
	*	@brief 나중에만들기
	*	@detail 
	*/
	//virtual void AddNodeBySmartPointer(std::shared_ptr<FTIHHouseNode> newNode);
	virtual void RemoveNodeByIndex(uint32 index);
	//virtual void RemoveNodeByTagFirst(FName tag);
	//virtual void RemoveNodeByTagEntire(FName tag);

	virtual void AddLayerBySmartPointer(std::shared_ptr<FTIHHouseNodeComposite> newLayer);
	

	std::shared_ptr<FTIHHouseNodeComposite> GetHouseBuildLayerByIndex(uint32 index)
	{
		if (index < mBuildNodeComposite.size())
		{
			mCurrentLayerIndex = index;
			return mBuildNodeComposite[index];
		}
		return nullptr;
	}
	//std::shared_ptr<FTIHHouseNode> GetHouseNodeCurrentByIndex(uint32 index);
	

	std::shared_ptr<FTIHHouseNodeComposite> operator[](uint32 index)
	{
		if (index < mBuildNodeComposite.size())
		{
			mCurrentLayerIndex = index;
			return mBuildNodeComposite[index];
		}
		return nullptr;
	}

	
protected:

private:

protected:
	int32 mNodeStep;
	int32 mNodeOder;
	std::weak_ptr<FTIHHouseNode> mParentNode;
	std::vector<std::shared_ptr<FTIHHouseNodeComposite>> mBuildNodeComposite;
private:
	uint32 mCurrentLayerIndex;
};

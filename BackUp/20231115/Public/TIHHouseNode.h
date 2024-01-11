// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ATIHThumnail;
/**
 * 
 */
class TIHHOUSINGPAK_API FTIHHouseNode
{
public:
	FTIHHouseNode();
	virtual ~FTIHHouseNode() = 0
	{

	}
public:
	virtual DWORD AddNodePointer(FTIHHouseNode* addNode);
	virtual DWORD DeleteNodeByIndex(int32 targetIndex);

	virtual DWORD RunProcess();
	/*virtual DWORD RunProcessByArgue()*/

	virtual std::shared_ptr<FTIHHouseNode> GetChildByIndex(int32 targetIndex);

	inline void SetRootNode(std::weak_ptr<FTIHHouseNode> rootNode)
	{
		mRootNode = rootNode;
	}
	inline void SetParentNode(std::weak_ptr<FTIHHouseNode> parentNode)
	{
		mParentNode = parentNode;
	}
protected:
	std::weak_ptr< FTIHHouseNode> mRootNode;
	std::weak_ptr< FTIHHouseNode> mParentNode;

	ATIHThumnail* mThumnailData;

private:
protected:
private:
};

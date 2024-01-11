// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHHouseNode.h"
/**
 * 
 */
class TIHHOUSINGPAK_API FTIHHouseComposite : public FTIHHouseNode
{
public:
	FTIHHouseComposite();
	virtual ~FTIHHouseComposite();

	DWORD AddNodePointer(FTIHHouseNode* addNode) override;


	DWORD DeleteNodeByIndex(int32 targetIndex) override;


	DWORD RunProcess() override;


	std::shared_ptr<FTIHHouseNode> GetChildByIndex(int32 targetIndex) override;

protected:
private:
protected:
	std::vector<std::shared_ptr<FTIHHouseNode>> mContainerChilds;
private:
};

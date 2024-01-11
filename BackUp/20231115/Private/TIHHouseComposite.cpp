// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseComposite.h"


FTIHHouseComposite::FTIHHouseComposite()
{
}

FTIHHouseComposite::~FTIHHouseComposite()
{

}

DWORD FTIHHouseComposite::AddNodePointer(FTIHHouseNode* addNode)
{
	return 0;
}

DWORD FTIHHouseComposite::DeleteNodeByIndex(int32 targetIndex)
{
	return 0;
}

DWORD FTIHHouseComposite::RunProcess()
{
	return 0;
}

std::shared_ptr<FTIHHouseNode> FTIHHouseComposite::GetChildByIndex(int32 targetIndex)
{
	if (targetIndex < mContainerChilds.size())
	{
		return mContainerChilds[targetIndex];
	}
	return nullptr;
}

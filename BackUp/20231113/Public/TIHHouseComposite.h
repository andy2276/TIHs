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
	virtual ~FTIHHouseComposite() = 0
	{

	}
#pragma region Add/Delete Function
	virtual 
#pragma endregion

protected:
	std::vector< std::shared_ptr< FTIHHouseNode>> mAllHouseNodes;
private:

protected:

private:
};

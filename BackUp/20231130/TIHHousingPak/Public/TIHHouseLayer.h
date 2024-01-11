// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
class FTIHHouseNodeComposite;
/**
 * 
 */
class TIHHOUSINGPAK_API FTIHHouseLayer
{
public:
	FTIHHouseLayer();
	virtual ~FTIHHouseLayer();

protected:

private:

protected:
	
	TWeakPtr<FTIHHouseNodeComposite> mOwnerComponent;
	/*!
	*	@brief aabb 로 바운드
	*	@detail 
	*/
	TArray<FVector2DHalf> mAABBBound;

	
private:
};

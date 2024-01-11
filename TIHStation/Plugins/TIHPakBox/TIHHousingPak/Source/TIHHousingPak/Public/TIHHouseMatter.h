// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHHouseStuff.h"
#include "TIHTempLibrary.h"

#include "TIHHouseMatter.generated.h"


class UTIHHouseStuffChildsComponent;

/**
 * 
 */
UCLASS()
class TIHHOUSINGPAK_API ATIHHouseMatter : public ATIHHouseStuff
{
	GENERATED_BODY()
public:
	ATIHHouseMatter();

protected:
	/*!
	*	@brief 
	*	@detail 
	*/
	UPROPERTY(EditAnywhere)
	UTIHHouseStuffChildsComponent* mChildActorComponent;
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent*  mStaticMeshComponent;
private:


};

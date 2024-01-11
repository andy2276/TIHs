// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHHousePawn.h"
#include "TIHHouseBuilderPawn.generated.h"

/**
 * 
 */
UCLASS()
class TIHHOUSINGPAK_API ATIHHouseBuilderPawn : public ATIHHousePawn
{
	GENERATED_BODY()
public:
	ATIHHouseBuilderPawn();

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};

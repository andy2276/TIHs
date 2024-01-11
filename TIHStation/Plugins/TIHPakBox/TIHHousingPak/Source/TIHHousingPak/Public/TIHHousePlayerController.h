// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TIHHousePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TIHHOUSINGPAK_API ATIHHousePlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	void OnPossess(APawn* aPawn) override;

};

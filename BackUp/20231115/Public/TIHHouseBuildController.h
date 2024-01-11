// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TIHHouseBuildController.generated.h"

/**
 * 
 */
UCLASS()
class TIHHOUSINGPAK_API ATIHHouseBuildController : public APlayerController
{
	GENERATED_BODY()
public:
	/*!
	*	
	*/
	UFUNCTION()
	void OnClickPressLeftMouseButton();
	/*!
	*	
	*/
	UFUNCTION()
	void OnClickReleaseLeftMouseButton();

protected:
	void SetupInputComponent() override; 

};

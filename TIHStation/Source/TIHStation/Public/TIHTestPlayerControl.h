// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TIHTestPlayerControl.generated.h"


/**
 * 
 */
UCLASS()
class TIHSTATION_API ATIHTestPlayerControl : public APlayerController
{
	GENERATED_BODY()
public:

	UFUNCTION()
	void TestSelectFunc();

protected:
	void SetupInputComponent() override;

	void PressRightMouseButton();
};

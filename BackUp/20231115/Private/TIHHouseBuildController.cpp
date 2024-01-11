// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseBuildController.h"

void ATIHHouseBuildController::OnClickPressLeftMouseButton()
{
	FHitResult hitResult;
	bool isHit = false;
	isHit = GetHitResultUnderCursor(
		ECollisionChannel::ECC_Visibility,
		false,
		hitResult
	);
	if(true == isHit)
	{
		if(nullptr != hitResult.GetActor())
		{
			UE_LOG(LogTemp, Warning, TEXT("click Actor!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("click empty!"));
	}
}

void ATIHHouseBuildController::OnClickReleaseLeftMouseButton()
{
	
}

void ATIHHouseBuildController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindAction
		(
			TEXT("RightMouseButton"),
			EInputEvent::IE_Pressed,
			this,
			&ATIHHouseBuildController::OnClickPressLeftMouseButton
		);
	InputComponent->BindAction
	(
		TEXT("RightMouseButton"),
		EInputEvent::IE_Released,
		this,
		&ATIHHouseBuildController::OnClickReleaseLeftMouseButton
	);

}

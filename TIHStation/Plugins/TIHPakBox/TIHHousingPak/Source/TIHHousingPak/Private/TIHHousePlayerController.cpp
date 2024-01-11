// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHousePlayerController.h"

 void ATIHHousePlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	this->bShowMouseCursor = true;
}

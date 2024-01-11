// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseBuilderPawn.h"

// Sets default values
ATIHHouseBuilderPawn::ATIHHouseBuilderPawn()
{

	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called to bind functionality to input
void ATIHHouseBuilderPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);



}


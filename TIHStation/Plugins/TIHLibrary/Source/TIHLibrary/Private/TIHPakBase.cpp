// Fill out your copyright notice in the Description page of Project Settings
#include "TIHPakBase.h"
#include "TIHStationCore.h"

// Sets default values
ATIHPakBase::ATIHPakBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

void ATIHPakBase::ConnectingStation()
{
	TIHReturn64 reValue = 0;
	mStation = &TIHSTATION;

	reValue = TIHSTATION.PrepareStation();
	


}

// Called when the game starts or when spawned
void ATIHPakBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATIHPakBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATIHPakBase::BeginDestroy()
{
	Super::BeginDestroy();
	
}

void FTIHIntellisense::Tick(float DeltaTime)
{
	if (LastFrameNumberWeTicked != GFrameCounter)
	{

		LastFrameNumberWeTicked = GFrameCounter;
	}
}

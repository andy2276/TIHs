
// Fill out your copyright notice in the Description page of Project Settings
#include "TIHPakBase.h"


// Sets default values
ATIHPakBase::ATIHPakBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;



}

void ATIHPakBase::ConnectingStation()
{
	TIHReturn64 reValue = 0;
	mStation = &TIHSTATION;

	/*
		to-do
		여기서 호출해주는 이유가 뭐야.

	*/
	//reValue = TIHSTATION.PrepareStation();
	


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


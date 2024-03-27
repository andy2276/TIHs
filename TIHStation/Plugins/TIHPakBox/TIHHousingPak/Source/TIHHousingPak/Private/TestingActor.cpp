// Fill out your copyright notice in the Description page of Project Settings.


#include "TestingActor.h"
#include "TIHStationCore.h"
#include "TIHCommands.h"

#include "TIHManagedObjects.h"
#include "TIHManagedObjectLeafs.h"

// Sets default values
ATestingActor::ATestingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestingActor::OnTestingButton()
{
	static TIHSTATION_TYPE& station = TIHSTATION;
	
	TIHHash64 a = 0;
	a = FTIHCmdTester::TIHClassNameHash();

	UE_LOG(LogTemp, Warning, TEXT("%lld"), a);
}

void ATestingActor::On00StationInstantiate()
{

}

void ATestingActor::On01StationPrepare()
{

}

void ATestingActor::On01StationInit()
{

}


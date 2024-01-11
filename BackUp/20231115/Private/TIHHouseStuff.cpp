
// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseStuff.h"
#include "TIHHouseLayerLinker.h"

// Sets default values
ATIHHouseStuff::ATIHHouseStuff()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mContainerHouseLayers.Add(CreateDefaultSubobject<UTIHHouseLayerLinker>(TEXT("HouseLayer")));
	RootComponent = mContainerHouseLayers[0];
}

// Called when the game starts or when spawned
void ATIHHouseStuff::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATIHHouseStuff::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


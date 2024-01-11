// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseStuff.h"

// Sets default values
ATIHHouseStuff::ATIHHouseStuff()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mHouseNodeLinkComponent = CreateDefaultSubobject<UTIHHouseNodeLinkComponent>(TEXT("LinkNodeComponet"));
	RootComponent = mHouseNodeLinkComponent;
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


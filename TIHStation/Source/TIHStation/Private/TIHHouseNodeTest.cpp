// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNodeTest.h"

// Sets default values
ATIHHouseNodeTest::ATIHHouseNodeTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	mStaticMeshTestComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TestBody"));
	mStaticMeshTestComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATIHHouseNodeTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATIHHouseNodeTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


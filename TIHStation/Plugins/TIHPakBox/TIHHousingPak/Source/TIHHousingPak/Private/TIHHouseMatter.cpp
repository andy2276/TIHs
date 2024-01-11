// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseMatter.h"
#include "TIHHouseStuffChildsComponent.h"

ATIHHouseMatter::ATIHHouseMatter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mChildActorComponent = CreateDefaultSubobject<UTIHHouseStuffChildsComponent>(TEXT("ChildActorHierarchial"));
	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	
	mChildActorComponent->SetupAttachment(RootComponent);
	mStaticMeshComponent->SetupAttachment(RootComponent);
}
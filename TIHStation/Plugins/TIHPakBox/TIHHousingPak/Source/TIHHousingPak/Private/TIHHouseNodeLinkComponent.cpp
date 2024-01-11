// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNodeLinkComponent.h"

// Sets default values for this component's properties
UTIHHouseNodeLinkComponent::UTIHHouseNodeLinkComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTIHHouseNodeLinkComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTIHHouseNodeLinkComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

DWORD UTIHHouseNodeLinkComponent::UpdateToNodeFromStuff()
{
	return 0;
}

DWORD UTIHHouseNodeLinkComponent::UpdateToStuffFromNode()
{
	return 0;
}


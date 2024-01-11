// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseLayerLinker.h"

// Sets default values for this component's properties
UTIHHouseLayerLinker::UTIHHouseLayerLinker()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	mBaseTag = TEXT("HouseLayer");

	/*!
	*	tag 기반으로 검색을 해야해서.	
	*/
	AActor* owner = GetOwner();
	if(owner != nullptr)
	{
		bool isExist = owner->Tags.Contains(mBaseTag);
		if(isExist == false)
		{
			owner->Tags.Add(mBaseTag);
		}
		else //	exist == true
		{
			FName multiLayerTag = TEXT("MultiLayer");
			isExist = owner->Tags.Contains(multiLayerTag);
			if (isExist == false)
			{
				owner->Tags.Add(multiLayerTag);
			}
		}
		
	}
	
}


// Called when the game starts
void UTIHHouseLayerLinker::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTIHHouseLayerLinker::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


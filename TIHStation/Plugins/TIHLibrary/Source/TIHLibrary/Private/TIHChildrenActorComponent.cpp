// Fill out your copyright notice in the Description page of Project Settings.

#include "TIHChildrenActorComponent.h"
#include "Engine/World.h"
#include "Engine/DemoNetDriver.h"
#include "TIHManagedObjects.h"


// Sets default values for this component's properties
UTIHChildrenActorComponent::UTIHChildrenActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UTIHChildrenActorComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	mMngObjPoolAllocSpace = GetOwner()->GetTIHData0();
	mSelfMngObjectIndex = GetOwner()->GetTIHData1();
}

void UTIHChildrenActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

}

int16 UTIHChildrenActorComponent::PoolingChildMngObj()
{
	return 0;
}

FTIHMngObj* UTIHChildrenActorComponent::GetChildMngObjByIndex(int16 mngObjIndex)
{
	return nullptr;
}

void UTIHChildrenActorComponent::UpdateTransformToChild()
{
	static TIHSTATION_TYPE& tihStation = TIHSTATION;
	const FTransform parentTransform = GetOwner()->GetActorTransform();
	for(const int16 mngIndex : mMngObjIndices)
	{
		FTIHMngObj* mngObj = GetChildMngObjByIndex(mngIndex);
		mngObj->QueryLeafActorMoveRoot(parentTransform);
		/*
			CommandHelper.
		
		*/
	}
}

void UTIHChildrenActorComponent::OnRegister()
{
	Super::OnRegister();
}

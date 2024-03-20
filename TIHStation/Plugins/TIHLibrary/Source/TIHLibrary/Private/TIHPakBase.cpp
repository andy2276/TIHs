// Fill out your copyright notice in the Description page of Project Settings
#include "TIHPakBase.h"


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

FTIHIntellisense::FTIHIntellisense()
	:
	LastFrameNumberWeTicked(INDEX_NONE),
	mStation(&TIHSTATION)
{
	if(mStation != nullptr)
	{
		mMngObjCenter = &mStation->GetManagedObjectPoolCenter();
		mMeshPool = &mStation->GetMeshPool();
		mTickTock = &mStation->GetTickTock();
		mCommander = &mStation->GetCommander();
		mCommandList = &mCommander->GetCommandList();

		if(mMngObjCenter == nullptr)
		{
			/*
				to-do
				TIHLog.Out.Err(Nullptr,"mMngObjCenter is nullptr");
			*/
		}
		if (mMeshPool == nullptr)
		{
			/*
				to-do
				TIHLog.Out.Err(Nullptr,"mMeshPool is nullptr");
			*/
		}
		if (mTickTock == nullptr)
		{
			/*
				to-do
				TIHLog.Out.Err(Nullptr,"mTickTock is nullptr");
			*/
		}
		if (mCommander == nullptr)
		{
			/*
				to-do
				TIHLog.Out.Err(Nullptr,"mCommander is nullptr");
			*/
		}
		if (mCommandList == nullptr)
		{
			/*
				to-do
				TIHLog.Out.Err(Nullptr,"mCommandList is nullptr");
			*/
		}

	}
}

void FTIHIntellisense::Tick(float DeltaTime)
{
	if (LastFrameNumberWeTicked != GFrameCounter)
	{
		/*
			to-do
			시간 타임확인
			지금 틱이 제대로 들어와잇는지 확인-> 이거때문에라도 state 만들어야겠네.
			
			커맨더에 커맨드가 들어가있는지 확인하는 함수
			확인햇으면 tickable의 tickon

		*/


		LastFrameNumberWeTicked = GFrameCounter;
	}
}


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

FTIHIntellisense::FTIHIntellisense()
	:
	LastFrameNumberWeTicked(INDEX_NONE),
	mStation(&TIHSTATION),
	mMngObjCenter(nullptr),
	mMeshPool(nullptr),
	mTickTock(nullptr),
	mCommander(nullptr),
	mCommandList(nullptr),
	mTickableScheduler(nullptr)
{

	if(mStation != nullptr)
	{
		mMngObjCenter = &mStation->GetManagedObjectPoolCenter();
		mMeshPool = &mStation->GetMeshPool();
		mTickTock = &mStation->GetTickTock();
		mCommander = &mStation->GetCommander();
		mCommandList = &mCommander->GetCommandList();

		mTickableScheduler = new FTIHTickableScheduler;
		mTickableScheduler->OffTick();
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

FTIHIntellisense::~FTIHIntellisense()
{
	mStation=nullptr;
	mMngObjCenter=nullptr;
	mMeshPool=nullptr;
	mTickTock=nullptr;
	mCommander=nullptr;
	mCommandList = nullptr;

	SafeDeletePtr(mTickableScheduler);
}

void FTIHIntellisense::Tick(float DeltaTime)
{
	if (LastFrameNumberWeTicked != GFrameCounter)
	{
		mStation->UpdateTickTock();

		if(CheckNormalCommandList() == true)
		{
			OnExecuteNormalCommandList();
		}

		LastFrameNumberWeTicked = GFrameCounter;
	}
}

bool FTIHIntellisense::CheckTimeCommandList()
{
	bool reValue = false;
	if(mCommander->IsChainEmpty(TIHNameSpaceCommandType::CommanderListType::TimerCommandList) == false)
	{
		
		reValue = true;
	}
	

	return reValue;
}

void FTIHIntellisense::OnExecuteTimeCommandList()
{

}

bool FTIHIntellisense::CheckNormalCommandList()
{
	bool reValue = false;
	if(mCommander->GetCurrMainCmdListIndex() == TIHNameSpaceCommandType::CommanderListType::MainCommandList)
	{
		reValue = !mCommander->IsChainEmpty(TIHNameSpaceCommandType::CommanderListType::MainCommandList);
	}
	return reValue;
}

void FTIHIntellisense::OnExecuteNormalCommandList()
{
	TIHReturn64 reValue = 0;
	reValue = mCommander->ExecuteCommands();
	/*
		to-do
		로그
	*/
}

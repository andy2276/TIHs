
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
	mCommandList(nullptr)
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

FTIHIntellisense::~FTIHIntellisense()
{
	mStation=nullptr;
	mMngObjCenter=nullptr;
	mMeshPool=nullptr;
	mTickTock=nullptr;
	mCommander=nullptr;
	mCommandList = nullptr;
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
		/*
			여기서 부터 일단 인텔리 센스가 비었는지를 확인한다.
			시간을 확인한다
			무조건 시간이 먼저이다.
			시간을 먼저 확인하고 일반 커맨드 실행
		
		*/
		//if(CheckTimeCommandList() == true)
		//{
		//	OnExecuteTimeCommandList();
		//}

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

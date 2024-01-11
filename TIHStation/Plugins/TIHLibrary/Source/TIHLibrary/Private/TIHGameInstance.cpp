// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHGameInstance.h"
#include "TIHStationCore.h"

void UTIHGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Warning, TEXT("Gimochi"));

	mTIHStation = MakeUnique<FTIHDefaultStation>();
	mTIHStation->PrepareStation();

	//	이거는 커맨더로 넘길까?
	//mTIHStation->InitializeStation();
}

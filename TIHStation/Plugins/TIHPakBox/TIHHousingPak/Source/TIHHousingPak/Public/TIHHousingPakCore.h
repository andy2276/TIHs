// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHPakBase.h"
#include "TIHCommandCore.h"
#include "TIHManagedObjects.h"
#include "TIHStationCoreDefines.h"

#include "TIHHousingPakCore.generated.h"
/**
 * 
 */


/*
	to-do
	해당 파싱 데이터가 가져야할 정보를 여기다 넣어야한다.
	어떤데이터가 들어갈까?

*/

USTRUCT()
struct FTIHHousingParsingBlock
{
	GENERATED_BODY()

	UPROPERTY()
	int16 TabCount;

	UPROPERTY()
	int16 Padding;
};

class FTIHHousingParser
{
public:

private:

};



class FTIHCmdHousingOnStuff :public TTIHCommand<FTIHHousingParsingBlock>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCmdHousingOnStuff);
public:
	FTIHCmdHousingOnStuff()
	{
		mCmdHeader.SetProtocol(0);
		
		
	}

};


UCLASS()
class TIHHOUSINGPAK_API ATIHHousingPakCore : public ATIHPakBase
{
	GENERATED_BODY()
	
public:
	void InsertPak() override;


	void DropPak() override;


	void Tick(float DeltaTime) override;

protected:
	void BeginPlay() override;

};

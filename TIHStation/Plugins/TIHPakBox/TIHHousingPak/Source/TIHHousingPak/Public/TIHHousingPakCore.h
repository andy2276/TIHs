// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHPakBase.h"
#include "TIHHousingPakCore.generated.h"

/**
 * 
 */
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

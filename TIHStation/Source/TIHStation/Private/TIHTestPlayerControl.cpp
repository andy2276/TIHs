// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHTestPlayerControl.h"

void ATIHTestPlayerControl::TestSelectFunc()
{

}

 void ATIHTestPlayerControl::SetupInputComponent()
{
	Super::SetupInputComponent();
	//InputComponent->BindAction
	//(
	//	TEXT("TestRightMouseButton"),
	//	EInputEvent::IE_Pressed,
	//	this,
	//	ATIHTestPlayerControl::PressRightMouseButton
	//);
}

 void ATIHTestPlayerControl::PressRightMouseButton()
 {
	 //const float rayLength = 10000.f;
	 //FVector worldLocationVec;
	 //FVector worldDirectionVec;
	 //
	 //if (true == DeprojectMousePositionToWorld(worldLocationVec, worldDirectionVec))
	 //{
	 // FHitResult hitResult;
	 // FVector startPoint = worldLocationVec;
	 // FVector endPoint = startPoint + (worldDirectionVec * rayLength);
	 // FCollisionQueryParams queryParam;
	 // queryParam.AddIgnoredActor(this->GetPawn());
	 //
	 //// if(GetWorld()->LineTraceSingleByChannel(hitResult,))
	 //}
 }

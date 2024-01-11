// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TIHHouseNodeLinkComponent.generated.h"

class ATIHHouseStuff;
class FTIHHouseNode;



/*!
*	
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TIHHOUSINGPAK_API UTIHHouseNodeLinkComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTIHHouseNodeLinkComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/*!
	*	@breif Stuff 에서 node 로 업데이트 하는기능임.
	*	
	*/
	DWORD UpdateToNodeFromStuff();
	/*!
	*	@breif node 에서 stuff 로 업데이트 하는기능임.
	*/
	DWORD UpdateToStuffFromNode();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:

protected:
	UPROPERTY()
	ATIHHouseStuff* mHouseStuff;
	std::weak_ptr<FTIHHouseNode> mHouseNode;
private:
		
};

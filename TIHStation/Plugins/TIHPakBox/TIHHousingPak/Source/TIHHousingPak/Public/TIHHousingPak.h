// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTIHHousingPakModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
/*
	그냥 팩을 실행하는 녀석이 필요한데 결국 팩스스로가 실행이 되어야한다. 그럴려면 에디터에서 실행하는게 맞다.
	커스텀 커맨드를 만든다고 하더라도 그 커맨더를 주는 녀석이 필요하거든. 팩이라는게 프로세서 느낌이라 누군가 즉 사용자가 실행해야하는데, 
	그럴려면 해당 정보를 알아야함. 근데 그거는 에디터가 맞는거고 
	레벨이 바뀌더라도 팩은 유지되어야 하는가? 한다면 그건 아니다. 팩은 결국 에디터에 달려있는거다.
	그럼 이렇게 하자. 팩 인서터라는 오브젝트가 존재하고 그 오브젝트를 팩에서 상속을 받을건데, 아니면 팩은 Actor 를 상속받지만 SceneComponent 가 없는거임. 하여튼 이걸 상속받고 
	

*/
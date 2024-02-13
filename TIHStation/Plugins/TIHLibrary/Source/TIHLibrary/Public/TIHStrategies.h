#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHCommands.h"
#include "TIHStrategies.generated.h"

template<typename TIHTemplateType>
class FTIHCommandStrategyCRTP
{
public:
	FTIHCommandStrategyCRTP() : mSelfCRTP(this)
	{}
	virtual ~FTIHCommandStrategyCRTP();
protected:
	TIHTemplateType* mSelfCRTP;
};


class FTIHCommanderStrategyCreateAssignPool :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateAssignPool>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};
/*
	0 == prepare
	commandPrepare
	결과에 아무것도 쓰지 않는다. 혹은 쓸까? 아니 쓰지마
	1 == onGenerate
*/
class FTIHCommanderStrategyCreateNewAlloc :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateNewAlloc>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerConnect :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerConnect>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerSend :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerSend>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerListen :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerListen>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerDisConnect :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyServerDisConnect>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteRejectPool :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteRejectPool>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteDestory :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteDestory>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyTransform :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyTransform>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyValue :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyValue>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutReadAndSave :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutReadAndSave>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutWriteAndModify :public FTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutWriteAndModify>
{
public:
	TIHReturn64 ExecuteStrategy(FTIHCommandBase* cmdBase);
};

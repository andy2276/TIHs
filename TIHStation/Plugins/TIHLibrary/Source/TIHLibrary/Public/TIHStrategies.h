

#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHCommands.h"
//#include "TIHStrategies.generated.h"


class FTIHCommanderStrategyCreateAssignPool :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateAssignPool>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};
/*
	0 == prepare
	commandPrepare
	결과에 아무것도 쓰지 않는다. 혹은 쓸까? 아니 쓰지마
	1 == onGenerate
*/
class FTIHCommanderStrategyCreateNewAlloc :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyCreateNewAlloc>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerConnect :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyServerConnect>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerSend :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyServerSend>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerListen :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyServerListen>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyServerDisConnect :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyServerDisConnect>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteRejectPool :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteRejectPool>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyDeleteDestory :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyDeleteDestory>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyTransform :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyTransform>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyModifyValue :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyModifyValue>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutReadAndSave :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutReadAndSave>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderStrategyInOutWriteAndModify :public TTIHCommandStrategyCRTP<FTIHCommanderStrategyInOutWriteAndModify>
{
public:
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandBase* cmdBase);
};

class FTIHCommanderExtentionForExeCmdStrategy
{
public:
	virtual TIHReturn64 ExecuteCommandInheritance(FTIHCommandBase* primitiveCmd) = 0;
};

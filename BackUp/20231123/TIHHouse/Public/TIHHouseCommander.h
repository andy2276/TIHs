// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

enum ETIHCommandAsyncType : BYTE
{
	PerFrame,
	BackgroundThread,
	WorkWait,

};
/*!
*	@brief 일단은 필요하면 바꾸자.
*	@detail 
*/
union FTIHCommandState
{
	struct
	{
		BYTE VarAlfa;
		BYTE VarBravo;
		BYTE VarCharlie;
		BYTE VarDelta;
	}AnyCategory;

	struct
	{
		BYTE VarCommandAsyncType;
		union 
		{
			struct 
			{
				BYTE VarDelayFrame;
				BYTE VarMaxFrame;
				
			}AsyncPerFrame;
			struct
			{
				BYTE VarIsMakeNewThread;
				BYTE VarThreadPoolIndex;
			}AsyncBackground;
			struct
			{
				BYTE VarByteAlfa;
				BYTE VarByteBravo;
				BYTE VarByteCharlie;
			}AsyncWorkWait;

		}CmdType;
		BYTE VarCommandAdditionalInfoIndex;
	}AsyncState;

	unsigned long VarEntireStateValue;
};
/*!
*	@brief 예약데이터이다. 이걸 그냥 커맨드에 넣을지 말지는 나중에 생각
*	@detail 
*/
class FTIHHCommandReserveData
{


};
/*!
*	@brief 추가적인 정보를 담고있는 클래스이다. 해당클래스는 상속이 가능해서 작동이 따로있음.
*	@detail 
*/
class FTIHHCommandAdditionalInfo
{


};

/*!
*	@brief 
*	@detail 
*/
class FTIHCommand
{
public:
	
protected:
	/*!
	*	@brief 여기를 변경
	*	@detail 
	*/
	TFunction<DWORD()> mCommandFunction;
	FTIHCommandState mChainState;
private:
	
};
class FTIHHouseCommandDeck
{
public:
	uint32 GetChainIndex()
	{
		return mCurrentChainIndex;
	}


private:
	uint32 mCurrentChainIndex;
	std::vector< FTIHCommand> mCommandChain;
};

/**
 * 
 */
class TIHHOUSINGPAK_API FTIHCommander
{
public:
	FTIHCommander();
	virtual ~FTIHCommander();

};

class TIHHOUSINGPAK_API FTIHHouseCommander : public FTIHCommander
{
public:


};
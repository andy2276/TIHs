// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TIHTempLibrary.h"
#include "TIHHouseNode.generated.h"

#pragma region forwardDeclare

class UTIHHouseNode;
class FTIHHouseNodeVisitor;
class FTIHFilePathData;
class UTIHHouseNodeMatter;
class UTIHHouseNodeDisplay;
#pragma endregion


/**
 *	Node 란 데이터를 세이브 하고 로드를 하기위한 구조이며 데이터를 왔다갔다하는데 사용된다.
 *	이제 이걸 왜 UObject 라고 만들었을까? 간단하다. serialize 룰 사용하기 위해서 썼다. 
 */



class FTIHHouseNodeVisitor
{
public:
	INT64 VisitConcreateNode(UTIHHouseNode* node);
	INT64 VisitConcreateMatter(UTIHHouseNodeMatter* matter) { return 0; };
};

/*!
*	@brief 
*	@detail 
*/
UCLASS(Abstract)
class TIHHOUSINGPAK_API UTIHHouseNode : public UObject
{
	GENERATED_BODY()
public:
	static FUnionTIHHouseNodeProtocol ConvertInt64ToProtocol(INT64 orgin)
	{
		FUnionTIHHouseNodeProtocol reValue;
		reValue.ProtocolWholeData = orgin;
		return reValue;
	}

	UTIHHouseNode();

	virtual INT64 AcceptVisitor(FTIHHouseNodeVisitor* visitor);

	virtual INT64 PrepareHouseNode() { return 0; };
	virtual INT64 InitHouseNode() { return 0; };	//	여기서 자신의 처리대로 할것이다.

	virtual INT64 GenerateStuff() { return 0; };
	virtual INT64 UpdateHouseNode() { return 0; };

	virtual INT64 ExecuteHouseNode() { return 0; };
	virtual INT64 ExecuteHouseNodeAcyncTickable() { return 0; }
	virtual INT64 ExecuteHouseNodeAsyncMultiTask() { return 0; }
	virtual INT64 ExecuteHouseNodeAsyncUserWait() { return 0; }

	virtual INT64 Test();

	INT64 GetNodeProtocol()
	{
		TIHDEBUG_LOG("log");
		return mHouseNodeProtocol;
	}

	 void Serialize(FArchive& Ar) override;

protected:
	/*!
	*	@brief tag,type
	*	@detail 
	*/
	INT64 mHouseNodeProtocol;
	
	/*!
	*	@brief processor 의 노드리스트에서 들고온다.
	*	@detail 시리얼 라이즈시에는 인덱스화한다.
	*/
	TArray<TSharedPtr<UTIHHouseNode>> mHouseNodeChilds;

	FTIHFilePathData mFilePathData;
private:

protected:

private:

};
/*!
*	@brief 
*	@detail 
*/
UCLASS()
class TIHHOUSINGPAK_API UTIHHouseNodeMatter : public UTIHHouseNode
{
	GENERATED_BODY()
public:


};
/*!
*	@brief 
*	@detail 
*/
UCLASS()
class TIHHOUSINGPAK_API UTIHHouseNodeDisplay : public UTIHHouseNode
{
	GENERATED_BODY()
public:


};
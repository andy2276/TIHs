#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"

#include "TIHNetworks.generated.h"

/*!
*	@brief 서버는 이제 이걸 모두 상속받아서 만드는 것이다. 이것도 CRTP 로 만들어야하나?
*	@detail
*/

USTRUCT()
struct FTIHServerPrepareData
{
	GENERATED_BODY()

	UPROPERTY()
	FTIHServerHeader ServerHeader;
	UPROPERTY()
	FTIHServerConfigure ServerConfig;
}

USTRUCT()
struct FTIHServerHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 ServerCategory;//{tcpip,iocp,webSocket,https}
	UPROPERTY()
	int8 ServerCategoryOption;
	UPROPERTY()
	int8 ServerLocation;// local , remote
	UPROPERTY()
	int8 ServerAction;

	/*
		to-do
		서버 함수 옵션들
		예를 들어서 onCennect 를 object 로 할지 ufuntion 으로 할지 이런것들
	*/
	
};
USTRUCT()
struct FTIHServerConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	FString ServerName;

	UPROPERTY()
	FString ServerURL;

	UPROPERTY()
	FString ServerProtocol;

	UPROPERTY()
	int32 ServerPortIndex;
};
USTRUCT()
struct FTIHServerResultDetail
{
	GENERATED_BODY()

	UPROPERTY()
	int8 BeforeCallFunctionStep;

	UPROPERTY()
	int8 CurrentCallFunctionStep;

	UPROPERTY()
	int16 CallingOrder;
};

USTRUCT()
struct FTIHServerResult
{
	GENERATED_BODY()

	UPROPERTY()
	FTIHServerResultDetail ReturnResultDetail;

	UPROPERTY()
	TIHReturn64 ReturnValue;
};

class FTIHServerBase
{
public:
	void SetServerHeader(const FTIHServerHeader& value)
	{
		mServerHeader = value;
	}
	const FTIHServerHeader& GetServerHeader()
	{
		return mServerHeader;
	}

	void SetServerConfig(const FTIHServerConfigure& config)
	{
		mServerConfig = config;
	}
	const FTIHServerConfigure& GetServerConfig()
	{
		return mServerConfig;
	}
	/*
		이거 용도는 기본적인 기능을 버추얼로 실행할 때 사용한다.
		근데 거의 사용안함.
		to-do
		반드시 델리게이트를 만들어서 해당 함수 후에 호출해주자.
	*/
	virtual void OnVtPrepareServer() = 0;
	virtual void OnVtStartServer() = 0;
	virtual void OnVtConnecteServer() = 0;
	virtual void OnVtPauseServer() = 0;
	virtual void OnVtReceiveServer() = 0;
	virtual void OnVtRequestServer() = 0;
	virtual void OnVtDisConnectServer() = 0;

	inline void ChangeServerResult(int8 changeStep)
	{
		mReturnResult.ReturnResultDetail.BeforeCallFunctionStep =
			mReturnResult.ReturnResultDetail.CurrentCallFunctionStep;
		mReturnResult.ReturnResultDetail.CurrentCallFunctionStep =changeStep;
		++mReturnResult.ReturnResultDetail.CallingOrder;
		if(mReturnResult.ReturnResultDetail.CallingOrder < 0 )
		{
			mReturnResult.ReturnResultDetail.CallingOrder = 0;
		}
	}
protected:
	FTIHServerHeader mServerHeader;
	FTIHServerConfigure mServerConfig;
	FTIHServerResult mReturnResult;
};
template<typename TIHServerType>
class FTIHServer : public FTIHServerBase
{
public:
	virtual void InitiateThis()
	{
		mSelfPointer = this;
	}
	TIHReturn64 PrepareServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnPrepareServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->PrepareServer();
		return mReturnResult.ReturnValue;
	};
	TIHReturn64 StartServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnStartServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->StartServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 PauseServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnPauseServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->PauseServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 AcceptConnectionServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnAcceptConnectionServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->AcceptConnectionServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 BindServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnBindServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->BindServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 ReceiveDataServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnReceiveDataServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->ReceiveDataServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 SendDataServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnSendDataServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->SendDataServer();
		return mReturnResult.ReturnValue;
	}
	TIHReturn64 CloseServer()
	{
		ChangeServerResult(TIHNameSpaceServer::ServerSteps::OnCloseServer);
		mReturnResult.ReturnValue = (static_cast<TIHServerType*>(mSelfPointer))->CloseServer();
		return mReturnResult.ReturnValue;
	}

	void OnVtPrepareServer() override
	{
		PrepareServer();
	}


	void OnVtStartServer() override
	{
		StartServer();
	}


	void OnVtConnecteServer() override
	{
		AcceptConnectionServer();
	}


	void OnVtPauseServer() override
	{
		PauseServer();
	}


	void OnVtReceiveServer() override
	{
		ReceiveDataServer();
	}


	void OnVtRequestServer() override
	{
		SendDataServer();
	}


	void OnVtDisConnectServer() override
	{
		CloseServer();
	}

protected:
	FTIHServerBase* mSelfPointer;
private:
};


class FTIHNetworkInterface
{
public:
	template<typename TIHTemplateType>
	TIHReturn64 PrepareServer(TIHTemplateType& networkServer)
	{
		return networkServer.PrepareServer();
	};
	template<typename TIHTemplateType>
	TIHReturn64 StartServer(TIHTemplateType& networkServer)
	{
		return networkServer.StartServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 PauseServer(TIHTemplateType& networkServer)
	{
		return networkServer.PauseServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 AcceptConnectionServer(TIHTemplateType& networkServer)
	{
		return networkServer.AcceptConnectionServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 BindServer(TIHTemplateType& networkServer)
	{
		return networkServer.BindServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 ReceiveDataServer(TIHTemplateType& networkServer)
	{
		return networkServer.ReceiveDataServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 SendDataServer(TIHTemplateType& networkServer)
	{
		return networkServer.SendDataServer();
	}
	template<typename TIHTemplateType>
	TIHReturn64 CloseServer(TIHTemplateType& networkServer)
	{
		return networkServer.CloseServer();
	}
};


class FTIHWebserver : public FTIHServer<FTIHWebserver>
{
public:
	void InitiateThis() override;
	TIHReturn64 PrepareServer();
	TIHReturn64 StartServer();
	TIHReturn64 PauseServer();
	TIHReturn64 AcceptConnectionServer();
	TIHReturn64 BindServer();
	TIHReturn64 ReceiveDataServer();
	TIHReturn64 SendDataServer();
	TIHReturn64 CloseServer();
protected:
	
};

USTRUCT()
struct FTIHNetworkConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	int16 ServerArraySize;
	UPROPERTY()
	int8 LocalIpType;
	UPROPERTY()
	int8 NetworkingState;
};

class FTIHNetwork
{
public:
	static FTIHNetwork& GetSingle();
	
	virtual void InstantiateThis();
	 virtual void PrepareThis();
	 virtual void InitiateThis();

	 void SetNetworkingConfig(const FTIHNetworkConfigure& config)
	 {
		 mNetworkConfig = config;
	 }
	 const FTIHNetworkConfigure& GetNetworkingConfig()
	 {
		 return mNetworkConfig;
	 }
	 TDeque< FTIHServerPrepareData>& GetServerPrepareQueue()
	 {
		 return mServerPrepareQueue;
	 }
	 void RegistServerGenerateFunc(int8 servercat, TFunction < FTIHServerBase* ()> genFunc)
	 {
		 mGenServerFunc.Add(servercat, genFunc);
	 }
	 void RegistServer(int8 servercat, FTIHServerBase* serverBase)
	 {
		 if (mServerTable.Contains(servercat) == false)
		 {
			 int16 addIndex = mServerArray.Add(serverBase);
			 mServerTable.Add(servercat, addIndex);
		 }
		 else
		 {
			
		 }
	 }
	 void GenerateServer();
	 

protected:
	//TMap<FName, FTIHNetworkConfigure> mNetworks;
	TArray<FTIHServerBase*> mServerArray;
	TMap<int8, int16> mServerTable;

	TDeque< FTIHServerPrepareData> mServerPrepareQueue;
	TMap < int8, TFunction<FTIHServerBase* ()>> mGenServerFunc;


	FTIHNetworkConfigure mNetworkConfig;
	FString mLocalIp;
private:

};

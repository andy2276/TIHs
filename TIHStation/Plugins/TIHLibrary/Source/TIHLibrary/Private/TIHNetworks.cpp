#include "TIHNetworks.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h"
#include "Runtime/Sockets/Public/SocketSubsystem.h"
#include "TIHStationCoreDefines.h"
#include "TIHStationCore.h"

void FTIHWebserver::InitiateThis()
{
	mSelfPointer = this;
}

TIHReturn64 FTIHWebserver::PrepareServer()
{
	TIHReturn64 reValue = 0;
	

	/*
		이녀석은 처음의 값을 들고오는 녀석이라 그런게 필요없다.
	*/


	return reValue;
}

TIHReturn64 FTIHWebserver::StartServer()
{
	/*
		to-do
		0405
		이거는 networking 으로 옮기기
			InstantiateThis 여기로 옮기자
	*/
	TIHReturn64 reValue = 0;
	bool canBindAll;
	ISocketSubsystem* socketSubSystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	TSharedRef<FInternetAddr> localIp = socketSubSystem->GetLocalHostAddr(*GLog, canBindAll);
	FString localIpStr;
	/*
		to-do
		포트 번호 는 배열로 만들자.
	*/
	const FString portNum = TEXT("8080");
	if(localIp->IsValid())
	{
		localIpStr = localIp->ToString(false);
	}
	if(localIpStr.IsEmpty() == false)
	{
		localIpStr = TEXT("localhost");
	}
	
	const FString serverUrl = TEXT("localhost");
	const FString serverProtocol = TEXT("wss");
	FName webSockets = TEXT("WebSockets");
	FModuleManager& moduleMgr = FModuleManager::Get();

	if(FModuleManager::Get().IsModuleLoaded(webSockets) == false)
	{
		moduleMgr.LoadModule(webSockets);
	}

	TSharedPtr<IWebSocket> webSocket = FWebSocketsModule::Get().CreateWebSocket
	(
		serverUrl, serverProtocol
	);
	webSocket->OnConnected().AddSPLambda(
		[]()->void
		{
			UE_LOG(LogTemp, Log, TEXT("onCennect!"));
		}
	);
	webSocket->OnConnectionError ().AddSPLambda(
		[](const FString& errCode)->void
		{
			UE_LOG(LogTemp, Warning, TEXT("err! : %s"),&errCode);
		}
	);
	webSocket->OnClosed().AddSPLambda(
		[](int32 statusCode, const FString& reason, bool bWasClean)->void
		{
			UE_LOG(LogTemp, Log, TEXT("close"));
		}
	);
	webSocket->OnMessage().AddSPLambda(
		[](const FString& msg)->void
		{
			UE_LOG(LogTemp, Log, TEXT("onMsg : %s "),&msg);
		}
	);
	webSocket->OnMessage().AddSPLambda(
		[](const FString& msg)->void
		{
			UE_LOG(LogTemp, Log, TEXT("onMsg : %s "), &msg);
		}
	);
	webSocket->OnRawMessage().AddSPLambda(
		[](const void* data,SIZE_T sizeNum,SIZE_T byteNum)->void
		{
			UE_LOG(LogTemp, Log, TEXT("OnRawMessage "));
		}
	);
	webSocket->OnMessageSent().AddSPLambda(
		[](const FString& msg)->void
		{
			UE_LOG(LogTemp, Log, TEXT("OnMessageSent "));
		}
	);
	webSocket->Connect();
	return reValue;
}

TIHReturn64 FTIHWebserver::PauseServer()
{
	TIHReturn64 reValue = 0;


	return reValue;
}

TIHReturn64 FTIHWebserver::AcceptConnectionServer()
{
	TIHReturn64 reValue = 0;

	
	return reValue;
}

TIHReturn64 FTIHWebserver::BindServer()
{
	TIHReturn64 reValue = 0;

	return reValue;
}

TIHReturn64 FTIHWebserver::ReceiveDataServer()
{
	TIHReturn64 reValue = 0;

	return reValue;
}

TIHReturn64 FTIHWebserver::SendDataServer()
{
	TIHReturn64 reValue = 0;

	return reValue;
}

TIHReturn64 FTIHWebserver::CloseServer()
{

}

FTIHNetwork& FTIHNetwork::GetSingle()
{
	static FTIHNetwork& reValue = TIHSTATION.GetNetwork();
	return reValue;
}

void FTIHNetwork::InstantiateThis()
{
	mServerArray.Reserve(mNetworkConfig.ServerArraySize);


}

void FTIHNetwork::PrepareThis()
{
	int32 serverPrepareQueueSize = mServerPrepareQueue.Num();
	if (mNetworkConfig.ServerArraySize < serverPrepareQueueSize)
	{
		mServerArray.Reserve(serverPrepareQueueSize);
	}

	


}

void FTIHNetwork::InitiateThis()
{
	bool canBindAll;
	ISocketSubsystem* socketSubSystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	TSharedRef<FInternetAddr> localIp = socketSubSystem->GetLocalHostAddr(*GLog, canBindAll);
	
	if (localIp->IsValid())
	{
		mLocalIp = localIp->ToString(false);
	}

	if (mLocalIp.IsEmpty() == false)
	{
		mLocalIp = TEXT("localhost");
	}

}

void FTIHNetwork::GenerateServer()
{
	int32 serverPrepareQueueSize = mServerPrepareQueue.Num();
	if (mNetworkConfig.ServerArraySize < serverPrepareQueueSize)
	{
		mServerArray.Reserve(serverPrepareQueueSize);
	}

	while (mServerPrepareQueue.IsEmpty() == false)
	{
		FTIHServerPrepareData& curPrepare = mServerPrepareQueue.First();
		int8 serverCat = curPrepare.ServerHeader.ServerCategory;
		FTIHServerBase* newServer = nullptr;
		if (mGenServerFunc.Contains(serverCat) == true)
		{
			newServer = mGenServerFunc[serverCat]();
			RegistServer(serverCat, newServer);
			newServer->SetServerHeader(curPrepare.ServerHeader);
			newServer->SetServerConfig(curPrepare.ServerConfig);
			/*
				to-do
				뭐 서버 인덱스라든가 그런거 설정
			*/
		}

		mServerPrepareQueue.PopFirst();
	}
}

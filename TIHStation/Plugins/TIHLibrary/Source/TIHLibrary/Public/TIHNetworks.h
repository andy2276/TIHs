#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
//#include "TIHNetworks.generated.h"


struct FTIHServerConfigure
{
	FString FullUrl;
	FString Protocol;
	FString Url;
	int32 PortNumber;
	TMap<FName, FString> UserInfo;
	TMap<FName, FString> Token;
	TMap<FName, FString> QueryParams;
	TMap<FName, FString> Options;
};
/*!
*	@brief 서버는 이제 이걸 모두 상속받아서 만드는 것이다. 이것도 CRTP 로 만들어야하나?
*	@detail
*/

template<typename TIHTempateType>
class FTIHServer
{
public:
	TIHReturn64 PrepareServer();
	TIHReturn64 StartServer();
	TIHReturn64 StopServer();
	TIHReturn64 AcceptConnectionServer();
	TIHReturn64 ReceiveDataServer();
	TIHReturn64 SendDataServer();
protected:
	TIHTempateType* mSelfPointer;
private:


};

class FTIHNetwork
{
public:
	template<typename TIHTemplateType>
	TIHReturn64 PrepareServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->PrepareServer();
		return reValue;
	}

	template<typename TIHTemplateType>
	TIHReturn64 StartServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->StartServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 StopServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->StopServer();
		return reValue;
	}

	template<typename TIHTemplateType>
	TIHReturn64 AcceptConnectionServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->AcceptConnectionServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 ReceiveDataServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->ReceiveDataServer();
		return reValue;
	}
	template<typename TIHTemplateType>
	TIHReturn64 SendDataServer(TIHTemplateType* targetServer)
	{
		TIHReturn64 reValue = 0;
		reValue = targetServer->SendDataServer();
		return reValue;
	}

protected:

private:

protected:
	//TMap<FName, FTIHNetworkConfigure> mNetworks;
private:

};

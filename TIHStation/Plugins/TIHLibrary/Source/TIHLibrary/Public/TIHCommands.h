#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.h"
#include "TIHCommands.generated.h"

union FUnionTIHCommandResult
{
	struct FTIHCommandResultDetail
	{
		int8 CommandResult0;
		int8 CommandResult1;

		int8 ProcessingResult0;//{NextCommand,PopFornt,ErrorCall}
		int8 ProcessingResult1;

		int32 SimpleResult;
	}ResultDetail;
	TIHReturn64 WholeData;
};
USTRUCT()
struct FTIHCommandHeader
{
	GENERATED_BODY()

	using CmdProtocolType = ETIHCommandHeaderProtocols;

	UPROPERTY()
	int8 Protocol;

	UPROPERTY()
	int8 ProtocolOption;

	UPROPERTY()
	int8 Option0;
	UPROPERTY()
	int8 Option1;

	void RefreshForReuse()
	{
		Protocol = (int8)ETIHCommandHeaderProtocols::ETestDelay;
		ProtocolOption = 0;
		Option0 = 0;
		Option1 = 0;
	};

	TIHMACRO_CHAINBUILDER_SETTER(Protocol);
	TIHMACRO_CHAINBUILDER_SETTER(ProtocolOption);
	TIHMACRO_CHAINBUILDER_SETTER(Option0);
	TIHMACRO_CHAINBUILDER_SETTER(Option1);

};

USTRUCT()
struct FTIHCommandMethod
{
	GENERATED_BODY()
	
	UPROPERTY()
	int8 CommandProcessingProtocol;			//	{Strategies,Delegates,MultiThreading}
	UPROPERTY()
	int8 CommandProgressionProtocol;			//	{Continue,Reapeate,Async}
	UPROPERTY()
	int16 CompleteFunctorIndex;
	

	FTIHCommandMethod() :
		CommandProcessingProtocol( (int8)ETIHCommandHeaderProtocols::ETestDelay),
		CompleteFunctorIndex(-1),
		CommandProgressionProtocol(-1)
		
	{
	};
	void RefreshForReuse()
	{
		CommandProcessingProtocol = (int8)ETIHCommandHeaderProtocols::ETestDelay;
		CompleteFunctorIndex = -1;
		CommandProgressionProtocol = -1;
	};
	
	TIHMACRO_CHAINBUILDER_SETTER(CommandProcessingProtocol);
	TIHMACRO_CHAINBUILDER_SETTER(CompleteFunctorIndex);
	TIHMACRO_CHAINBUILDER_SETTER(CommandProgressionProtocol);
};

class FTIHCommandBase
{
	TIHMACRO_CLASS_STATIC_NAME_HASH(FTIHCommandBase)
public:
	const FTIHCommandHeader& GetCommandHeader()
	{
		return mCmdHeader;
	}
	const FTIHCommandMethod& GetCommandMethod()
	{
		return mCmdMethod;
	}

	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandHeader, mCmdHeader);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandMethod, mCmdMethod);

	template<typename TIHTemplateType>
	TIHTemplateType* GenerateThisCastedClass()
	{
		return TIHTemplateType::GenerateThisClass();
	}

	FTIHCommandBase()
	{};
	virtual ~FTIHCommandBase() = 0
	{}

	virtual int32 GetCommandFeatureSize()
	{
		return 0;
	}

	/*
		strategy 에 데이터를 넣고 이걸 처리할거임.
		단순하게 header 와 method 만 보고 해당 부분으로 데이터를 넘길거고
		strategy 에서
	*/
protected:
	FTIHCommandHeader mCmdHeader;
	FTIHCommandMethod mCmdMethod;
private:

};


template<typename TIHTemplateType>
class TTIHCommand : public FTIHCommandBase
{
	TIHMACRO_CLASS_STATIC_NAME_HASH(TTIHCommand);
public:
	TTIHCommand();
	virtual ~TTIHCommand();

	TIHTemplateType& GetCommandFeature()
	{
		return mCmdFeature;
	}

	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandFeature, mCmdFeature);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CompleteCallBack, mCompleteCallBack);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(ErrorCallBack, mErrorCallBack);

private:
	//	이걸 왜 포인터로 했더라...
	//	포인터 제거
	TIHTemplateType mCmdFeature;

	FTIHCommandCallBack mCompleteCallBack;
	FTIHCommandCallBack mErrorCallBack;
};

template<typename TIHTemplateType>
TTIHCommand<TIHTemplateType>::~TTIHCommand()
{
	//SafeDeletePtr(mCmdFeature);
}

template<typename TIHTemplateType>
TTIHCommand<TIHTemplateType>::TTIHCommand()
{

}

template<typename TIHTemplateType>
TIHTemplateType* GenerateTemplateThisClass()
{
	return new TIHTemplateType();
}



class FTIHCommandCreateNewAllocPrepare : public TTIHCommand<FTIHNewAllocPrepareData>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocPrepare);
public:
	FTIHCommandCreateNewAllocPrepare();
	virtual ~FTIHCommandCreateNewAllocPrepare();
};


class FTIHCommandCreateNewAllocOnGenerate : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateNewAllocOnGenerate);
public:
	FTIHCommandCreateNewAllocOnGenerate();
	virtual ~FTIHCommandCreateNewAllocOnGenerate();
};

class FTIHCommandCreatePooling : public TTIHCommand<FTIHCommandCreateAssignPoolDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreatePooling);
public:
	FTIHCommandCreatePooling();
	virtual ~FTIHCommandCreatePooling();
};

class FTIHCommandCreateReject : public TTIHCommand<FTIHMngObjPoolConfigureDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandCreateReject);
public:
	FTIHCommandCreateReject();
	virtual ~FTIHCommandCreateReject();
};

USTRUCT()
struct FTIHCommandServerConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerConnect : public TTIHCommand<FTIHCommandServerConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerConnect);
public:
	FTIHCommandServerConnect();
	virtual ~FTIHCommandServerConnect();
};


USTRUCT()
struct FTIHCommandServerSendDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerSend : public TTIHCommand<FTIHCommandServerSendDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerSend);
public:
	FTIHCommandServerSend();
	virtual ~FTIHCommandServerSend();
};


USTRUCT()
struct FTIHCommandServerListenDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerListen : public TTIHCommand<FTIHCommandServerListenDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerListen);
public:
	FTIHCommandServerListen();
	virtual ~FTIHCommandServerListen();
};

USTRUCT()
struct FTIHCommandServerDisConnectDatas
{
	GENERATED_BODY()

};
class FTIHCommandServerDisConnect : public TTIHCommand<FTIHCommandServerDisConnectDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandServerDisConnect);
public:
	FTIHCommandServerDisConnect();
	virtual ~FTIHCommandServerDisConnect();
};

USTRUCT()
struct FTIHCommandDeleteRejectPoolDatas
{
	GENERATED_BODY()

};
class FTIHCommandDeleteRejectPool : public TTIHCommand<FTIHCommandDeleteRejectPoolDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandDeleteRejectPool);
public:
	FTIHCommandDeleteRejectPool();
	virtual ~FTIHCommandDeleteRejectPool();
};

USTRUCT()
struct FTIHCommanEDeleteDestoryDatas
{
	GENERATED_BODY()

};
class FTIHCommanEDeleteDestory : public TTIHCommand<FTIHCommanEDeleteDestoryDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommanEDeleteDestory);
public:
	FTIHCommanEDeleteDestory();
	virtual ~FTIHCommanEDeleteDestory();
};


USTRUCT()
struct FTIHCommandModifyTransformDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyTransform : public TTIHCommand<FTIHCommandModifyTransformDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyTransform);
public:
	FTIHCommandModifyTransform();
	virtual ~FTIHCommandModifyTransform();
};


USTRUCT()
struct FTIHCommandModifyValueDatas
{
	GENERATED_BODY()

};
class FTIHCommandModifyValue : public TTIHCommand<FTIHCommandModifyValueDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandModifyValue);
public:
	FTIHCommandModifyValue();
	virtual ~FTIHCommandModifyValue();
};


USTRUCT()
struct FTIHCommandInOutReadAndSaveDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutReadAndSave : public TTIHCommand<FTIHCommandInOutReadAndSaveDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutReadAndSave);
public:
	FTIHCommandInOutReadAndSave();
	virtual ~FTIHCommandInOutReadAndSave();
};


USTRUCT()
struct FTIHCommandInOutWriteAndModifyDatas
{
	GENERATED_BODY()

};
class FTIHCommandInOutWriteAndModify : public TTIHCommand<FTIHCommandInOutWriteAndModifyDatas>
{
	TIHMACRO_CLASS_STATIC_COMMAND_NAME_GENERATE_THIS(FTIHCommandInOutWriteAndModify);
public:
	FTIHCommandInOutWriteAndModify();
	virtual ~FTIHCommandInOutWriteAndModify();
};

UCLASS()
class UTIHCommandFactoryConfigure : public UObject
{
	GENERATED_BODY()
public:
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactorySettingType, mFactorySettingType);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactorySettingTypeOption, mFactorySettingTypeOption);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(FactoryReserveSize, mFactoryReserveSize);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRogginEnabledOnRuntime, mIsRogginEnabledOnRuntime);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledOnSaveing, mIsRoggingEnabledOnSaveing);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledPassToServer, mIsRoggingEnabledPassToServer);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(IsRoggingEnabledForDebuging, mIsRoggingEnabledForDebuging);

	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(RoggingSavePath, mRoggingSavePath);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(RoggingServerUrl, mRoggingServerUrl);

	int16 GetCommandFactoryReserveSize()
	{
		return mFactoryReserveSize;
	}
	/*!
	*	@brief 이걸 거치면 최소한의 크기나 뭐 그런것들이 아무리 config 셋팅을 하더라도 돌아온다. 
	*	@detail 컨스트로 셋팅하는것임.
	*/
	virtual TIHReturn64 CheckConstantSetting();
	bool IsChangePossibleConfig()
	{
		return mIsPossibleChangeConfig;
	}

private:
	UPROPERTY()
	int8 mFactorySettingType;

	UPROPERTY()
	int8 mFactorySettingTypeOption;

	UPROPERTY()
	int16 mFactoryReserveSize;

	UPROPERTY()
	bool mIsRogginEnabledOnRuntime;
	UPROPERTY()
	bool mIsRoggingEnabledOnSaveing;
	UPROPERTY()
	bool mIsRoggingEnabledPassToServer;
	UPROPERTY()
	bool mIsRoggingEnabledForDebuging;

	UPROPERTY()
	FString mRoggingSavePath;
	UPROPERTY()
	FString mRoggingServerUrl;

	bool mIsPossibleChangeConfig;
};


class FTIHChainBuilderPool
{
public:
	TDeque< FTIHChainBuilderBase*> ChainPtrsQueue;

	FTIHChainBuilderPool();
	~FTIHChainBuilderPool()
	{
		int32 queNum = ChainPtrsQueue.Num();
		for (int32 i = queNum - 1; -1 < i; --i)
		{
			SafeDeletePtr(ChainPtrsQueue[i]);
		}
		ChainPtrsQueue.Empty();
	}
};

struct FTIHCommandFactoryBuilders
{
	FTIHChainBuilderBase* CommandHeaderBuilder;
	FTIHChainBuilderBase* CommandMethodBuilder;
	FTIHChainBuilderBase* CommandDataBuilder;

	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandHeaderBuilder);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandMethodBuilder);
	TIHMACRO_CHAINBUILDER_SETTER_AUTO(CommandDataBuilder);

	FTIHCommandFactoryBuilders() :
		CommandHeaderBuilder(nullptr),
		CommandMethodBuilder(nullptr),
		CommandDataBuilder(nullptr)
	{
	}
	FTIHCommandFactoryBuilders
	(
		FTIHChainBuilderBase* commanHeader,
		FTIHChainBuilderBase* commandMethod,
		FTIHChainBuilderBase* commandData
	) :

		CommandHeaderBuilder(commanHeader),
		CommandMethodBuilder(commandMethod),
		CommandDataBuilder(commandData)
	{
	}
	void SetRWStates(bool rwState)
	{
		if (CommandHeaderBuilder != nullptr)
		{
			CommandHeaderBuilder->SetRWState(rwState);
		}
		if (CommandMethodBuilder != nullptr)
		{
			CommandMethodBuilder->SetRWState(rwState);
		}
		if (CommandDataBuilder != nullptr)
		{
			CommandDataBuilder->SetRWState(rwState);
		}
	}

	void RefreshForCommandHeaderBuilderReuse()
	{
		if (CommandHeaderBuilder != nullptr)
		{
			TTIHChainBuilder<FTIHCommandHeader>* castData = static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(CommandHeaderBuilder);
			if (castData != nullptr && castData->GetGenrateChain() != nullptr)
			{
				castData->GetGenrateChain()->RefreshForReuse();
			}
		}
	}
	void RefreshForCommandMethodBuilderReuse()
	{
		if (CommandHeaderBuilder != nullptr)
		{
			TTIHChainBuilder<FTIHCommandMethod>* castData = static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(CommandHeaderBuilder);
			if (castData != nullptr && castData->GetGenrateChain() != nullptr)
			{
				castData->GetGenrateChain()->RefreshForReuse();
			}
		}
	}
	void ReallocForCommandDataBuilderReuse()
	{
		SafeDeletePtr(CommandDataBuilder);
	}

	void RefreshForCommandBuilders()
	{
		RefreshForCommandHeaderBuilderReuse();
		RefreshForCommandMethodBuilderReuse();
		ReallocForCommandDataBuilderReuse();
	}

	bool IsNewAllocDone()
	{
		if (CommandHeaderBuilder == nullptr)
		{
			return false;
		}
		if (CommandMethodBuilder == nullptr)
		{
			return false;
		}
		if (CommandDataBuilder == nullptr)
		{
			return false;
		}
		return true;
	}

	const bool ClearBuilderPtrs()
	{
		bool reValue[3] = {};
		SafeDeletePtr(CommandHeaderBuilder);
		SafeDeletePtr(CommandMethodBuilder);
		SafeDeletePtr(CommandDataBuilder);
		return ((reValue[0] == true) && (reValue[1] == true) && (reValue[2] == true));
	}

	~FTIHCommandFactoryBuilders()
	{
		SafeDeletePtr(CommandHeaderBuilder);
		SafeDeletePtr(CommandMethodBuilder);
		SafeDeletePtr(CommandDataBuilder);
	}
};


class FTIHCommandFactory
{
public:
	union FUnionTIHCommandFactoryResult
	{
		struct FTIHCommandFactoryResultDetail
		{
			int8 Protocol;
			int8 ProtocolOption;
			int16 SaveIndex;

			TIHReturn32 SimpleResult;
		}ResultDetail;
		struct FTIHCommandFactoryAssignResultDetail
		{
			int8 Protocol;
			int8 AssignSemantic;
			int16 AssignIndex;
			TIHReturn32 SimpleResult;
		}AssignDetail;

		struct FTIHCommandFactoryReserveResultDetail
		{
			int8 Protocol;
			int8 Padding;
			int16 PreMax;
			TIHReturn32 SimpleResult;
		}ReserveDetail;
		struct FTIHCommandFactoryRegistResultDetail
		{
			int8 Protocol;
			int8 ProtocolOption;
			int8 RegistResult;
			int8 RegistResultOption;

			int16 RegistIndex;
			int16 Padding;

		}RegistDetail;
		struct FTIHCommandFactoryInstantiateResultDetail
		{
			int8 Protocol;
			int8 ProtocolOption;

			int16 SuccessCount;
			int16 FailCount;

			int16 Padding;
		}InstantiateDetail;

		TIHReturn64 WholeData;
	};

	/*
		HelperFunc


	*/



	void CopyBuilderToCommandHeader(const FTIHCommandHeader& source, FTIHCommandBase* target)
	{
		target->SetCommandHeader(source);
	}
	void CopyBuilderToCommandMethod(const FTIHCommandMethod& source, FTIHCommandBase* target)
	{
		target->SetCommandMethod(source);
	}
	void CopyBuilderToCommand(const FTIHCommandHeader& headerSource, const FTIHCommandMethod& methodSource, FTIHCommandBase* target)
	{
		CopyBuilderToCommandHeader(headerSource, target);
		CopyBuilderToCommandMethod(methodSource, target);
	}

	TTIHChainBuilder<FTIHCommandHeader>& SetCommanHeaderMetaDataBuilder()
	{
		return *static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(mBuildersArray[mCurrBuilderIndex].CommandHeaderBuilder);
	}
	FTIHCommandHeader& ChainBuildCommandHeader()
	{
		return SetCommanHeaderMetaDataBuilder().BeginChain();
	}
	TTIHChainBuilder<FTIHCommandMethod>& SetCommandMethodMetaDataBuilder()
	{
		return *static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(mBuildersArray[mCurrBuilderIndex].CommandMethodBuilder);
	}
	FTIHCommandMethod& ChainBuildCommandMethod()
	{
		return SetCommandMethodMetaDataBuilder().BeginChain();
	}



	template<typename TIHTemplateCmdDataType >
	TTIHChainBuilder<TIHTemplateCmdDataType>& SetCommandDataMetaDataBuilderTemplate()
	{
		uint32 typeHash = typeid(TIHTemplateCmdDataType).hash_code();
		FTIHChainBuilderBase* target = nullptr;
		if (mCommandDataBuilderPool.Contains(typeHash) == false)
		{
			mCommandDataBuilderPool.Add(typeHash, FTIHChainBuilderPool());
		}

		TDeque<FTIHChainBuilderBase*>& builderQue = mCommandDataBuilderPool[typeHash].ChainPtrsQueue;
		int32 queNum = builderQue.Num();

		if (queNum == 0)
		{
			mCommandDataBuilderPool[typeHash].ChainPtrsQueue.PushLast(CreateChainBuilderPtrCommandData<TIHTemplateCmdDataType>());
		}

		target = builderQue.Last();
		builderQue.PopLast();

		mBuildersArray[mCurrBuilderIndex].CommandDataBuilder = target;

		return *static_cast<TTIHChainBuilder<TIHTemplateCmdDataType>*>(mBuildersArray[mCurrBuilderIndex].CommandDataBuilder);
	}

	template<typename TIHTemplateCmdDataType >
	TIHTemplateCmdDataType& ChainBuildCommandData()
	{
		return SetCommandDataMetaDataBuilderTemplate<TIHTemplateCmdDataType>().BegineChain();
	}

#pragma region Generate CommandMetaData

	//	만약 새롭게 할당해야하면 할당하고 아니면 다음으로 넘어가는 기능이지 


	//template<typename TIHTemplateType>
	//TIHReturn64 BeginRegistCommandMetaDataUseTemp();
	/*
			지금 인덱스의 builders 가 유효한지확인
				지금 용량이 config안의 용량보다 보다 작은가?
					작다면 아직 용량이 다찬게 아니기때문에 재사용하지 않는다!!(중요)
			접근했을때 생기는 에러
			인덱스오버이슈
			초기화 이슈
				reserve 를 먼저했을때 생기는 이슈이다.
				언리얼에서는 add 로 해결한다
				해결방법
					reserve 를 하고 add 를 전부해준다
						이거는 처음만 힘들지 사실은 제일 좋음, 이게 오브젝트 풀링임.
							정	어차피 header 든 data 든 모두 빈상태라 한번더 만들어야 되는거임
							반	근데 reserve 는 메모리 영역을 초기화 하는거라면 이건 직접 만들어야하고 구지 add 를 모두해줘야함
							합	그렇지만 reserve 는 매번이루어지는게 아닌 factoryConfig 의 설정이 변경되었을때만 이루어진다
								그래서 매번 add 를 돌려줘도 상관없을거 같다. 무엇보다 어차피 data 때문이라도 매번 new 를 하는게 생길텐데
								그냥 그렇게 하자. 그럼 config 를 셋팅하고 거기에 실행기능을 만들자. 즉 명시적으로 ReSetting 을 해야하게 하자
					결과를 토대로 설계를 하자면
						reserve 가 이루어지면 해당 양만큼 add 를 진행해준다
						이제 모든 접근이 자유로워졌다.
						커맨더 헤더와 메소드는 여러개 만들어 놓고 다른곳에서 관리 안해도 괜찮다.
						data 도 만약 해당 typeid 에해당하는 hash 가 없을경우

			rw이슈
	*/
	TIHReturn64 BeginChainBuild();
	TIHReturn64 PrevBuilders();
	TIHReturn64 JumpBuilders(int32 index);
	TIHReturn64 NextBuilders();
	TIHReturn64 EndChainBuild();

	const FTIHCommandHeader GetCurrBuildersCommandHeader()
	{
		return GetCastedBuildersCommandHeader(mCurrBuilderIndex);
	}
	const FTIHCommandHeader GetCastedBuildersCommandHeader(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<FTIHCommandHeader>*>(mBuildersArray[index].CommandHeaderBuilder)).GetGenrateChain();
	}
	const FTIHCommandMethod GetCastedBuildersCommandMethod(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<FTIHCommandMethod>*>(mBuildersArray[index].CommandMethodBuilder)).GetGenrateChain();
	}
	const FTIHCommandMethod GetCurrBuildersCommandMethod()
	{
		return GetCastedBuildersCommandMethod(mCurrBuilderIndex);
	}

	template<typename TIHTemplateType>
	const TIHTemplateType GetCastedBuildersCommandData(int32 index)
	{
		return *(*static_cast<TTIHChainBuilder<TIHTemplateType>*>(mBuildersArray[index].CommandDataBuilder)).GetGenrateChain();
	}
	template<typename TIHTemplateType>
	const TIHTemplateType GetCurrBuildersCommandData()
	{
		return GetCastedBuildersCommandData(mCurrBuilderIndex);
	}

	template<typename TIHTemplate>
	FTIHCommandBase* GenerateCommand(int32 index)
	{
		FTIHCommandBase* reValue = nullptr;
		TIHTemplate* target = TIHTemplate::GenerateThisClass();

		if (target != nullptr)
		{
			target->SetCommandFeature(GetCastedBuildersCommandData<TIHTemplate>(index));
		}

		return target;
	};
	TArray<FName> mClassNamesForCreateCommand;
	TMap<FName, TIHReturn64> mClassNameHashsForCreateCommand;
	TMap<TIHReturn64, TFunction<FTIHCommandBase* ()>> mGenerateCommandFunctions;

	/*
		GetCurrBuildersCommandHeader
		GetCurrBuildersCommandMethod
		GetCurrBuildersCommandData

	*/





#pragma endregion
	TIHReturn64 ReserveArrayForCommandMetaDatasByGrowing();
	//	이거는 제거를 하자.
	TIHReturn64 AssignToArrayForCommandMetaData(FTIHChainBuilderBase* data);

	void RejectCommandData(FTIHChainBuilderBase*& data);

	virtual TIHReturn64 PrepareCommandFactory();

	//	사전설정
	virtual TIHReturn64 PrevRegistCommand();

	//	생성시 전략
	virtual TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander) = 0;



	FTIHCommandFactory();
	virtual ~FTIHCommandFactory() = 0
	{

	};

	FTIHChainBuilderBase* CreateChainBuilderPtrCommandHeader()
	{
		return new TTIHChainBuilder<FTIHCommandHeader>();
	}
	FTIHChainBuilderBase* CreateChainBuilderPtrCommandMethod()
	{
		return new TTIHChainBuilder<FTIHCommandMethod>();
	}
	template<typename TIHTemplateType>
	FTIHChainBuilderBase* CreateChainBuilderPtrCommandData()
	{
		return new TTIHChainBuilder<TIHTemplateType>();
	}
	UTIHCommandFactoryConfigure& CommandFactoryConfig()
	{
		return *mFactoryConfigObject.Get();
	}

	int16 GetCommandFactoryReserveSize()
	{
		return mFactoryConfigObject.Get()->GetCommandFactoryReserveSize();
	}
	bool IsChangePossibleConfig()
	{
		return mFactoryConfigObject.Get()->IsChangePossibleConfig();
	}

	TIHReturn64 SearchReserveIndex();

protected:

	int32 mCurrBuilderIndex;
	int32 mCurrBuilderMoveIndex;
	TArray< FTIHCommandFactoryBuilders> mBuildersArray;

	int32 mCurrTempBuilderIndex;
	TArray< FTIHChainBuilderBase*> mTempBuilders;
	TUniquePtr<UTIHCommandFactoryConfigure> mFactoryConfigObject;

	TMap<uint32, FTIHChainBuilderPool> mCommandDataBuilderPool;

	TMap<TIHReturn64, FTIHCommandBase*> mGenerateHash;
private:
	//template<typename TIHTemplateCmdBuilder>
	//TTIHChainBuilder<TIHTemplateCmdBuilder>& SetCommandBuilder(FTIHChainBuilderBase*& builderPtr)
	//{
	//	TTIHChainBuilder<TIHTemplateCmdBuilder>* chainBuilder = new TTIHChainBuilder<TIHTemplateCmdBuilder>();
	//	SafeDeletePtr(builderPtr);//	이거는 아예 처음부터 만든다는건데, 만약 커맨드가 락이 안걸렸다면?
	//	builderPtr = chainBuilder;	//	downCast
	//	return *static_cast< TTIHChainBuilder<TIHTemplateCmdBuilder>* >(builderPtr);
	//}
};


class FTIHCommandList
{
public:
	int32 mCurCommandQueueIndex;

	TDeque<FTIHCommandBase*> mCommandQueue;

	TArray< FTIHCommandBase*> mDeleteCandidates;

	union FUnionTIHCommandListResult
	{
		struct FTIHCommandListClearResultDetail
		{
			int8 Protocol;
			int8 Padding;
			int16 NullCount;

			int16 DeleteCount;
			int16 EndIndex;
		}ClearDetail;
		struct FTIHCommandListReserveResultDetail
		{
			int8 Protocol;
			int8 Padding;
			int16 PreMax;
			TIHReturn32 SimpleResult;
		}ReserveDetail;
		TIHReturn64 WholeData;
	};


	FTIHCommandBase* operator[](int32 index)
	{
		return mCommandQueue[index];
	}

	TIHReturn64 ReserveCommandQueue(int32 size)
	{
		FUnionTIHCommandListResult reValue;

		reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
		reValue.ReserveDetail.PreMax = mCommandQueue.Max();


		return reValue.WholeData;
	}
	TIHReturn64 ClearCommandForcefully(int32 itorIndex)
	{
		FUnionTIHCommandListResult reValue;
		reValue.WholeData = 0;
		FTIHCommandBase* target = mCommandQueue[itorIndex];
		if (target != nullptr)
		{
			reValue.ClearDetail.DeleteCount = 1;
			delete target;
		}
		else
		{
			reValue.ClearDetail.NullCount = 1;
		}
		return reValue.WholeData;
	}
	/*!
	*	@brief 모든 리스트를 삭제하는 작업
	*	@detail
	*/
	TIHReturn64 ClearCommandQueuefully()
	{
		//TIHReturn64 reValue = 0;
		FUnionTIHCommandListResult reValue;
		FUnionTIHCommandListResult temp;
		int32 itorIndex = mCommandQueue.Num();
		for (; -1 < itorIndex; --itorIndex)
		{
			temp.WholeData = ClearCommandForcefully(itorIndex);
			reValue.ClearDetail.NullCount += temp.ClearDetail.NullCount;
			reValue.ClearDetail.DeleteCount += temp.ClearDetail.DeleteCount;
		}

		if (itorIndex < 0)
		{
			//	여기는 수정을 해야한다. 왜냐하면 여기가 잘못되어진 에러처리를 하는 곳이기 때문이다.
			reValue.ClearDetail.EndIndex = itorIndex + 1;
		}
		mCommandQueue.Reset();
		mCurCommandQueueIndex = 0;
		return reValue.WholeData;
	}
	FTIHCommandBase* GetCurrentCommand()
	{
		FTIHCommandBase* cmdData = nullptr;
		if (mCurCommandQueueIndex < mCommandQueue.Num())
		{
			cmdData = mCommandQueue[mCurCommandQueueIndex];
		}
		return cmdData;
	}
	FTIHCommandBase* NextCommand()
	{
		FTIHCommandBase* cmdData = nullptr;
		if (mCurCommandQueueIndex < mCommandQueue.Num())
		{
			cmdData = mCommandQueue[mCurCommandQueueIndex];
			++mCurCommandQueueIndex;
		}
		return cmdData;
	}
	TIHReturn64 PopFrontCommand()
	{
		FUnionTIHCommandListResult reValue;

		mDeleteCandidates.Add(mCommandQueue[mCurCommandQueueIndex]);
		mCommandQueue[mCurCommandQueueIndex] = nullptr;

		if (mCommandListClearanceCount <= mDeleteCandidates.Num())
		{
			ClearanceCommandQueue();
		}
		return reValue.WholeData;
	}
	TIHReturn64 PopBackCommand()
	{
		return 0;
	}

	int32 PushBackCommandPtr(FTIHCommandBase* cmdPtr)
	{
		//	여기에 이제 max 가 찼을때 어떻게 할지 선택해야함.
		int32 reValue = mCommandQueue.Num();
		mCommandQueue.PushLast(cmdPtr);
		return reValue;
	}
	int32 GetCurrentCommandQueueIndex()
	{
		return mCurCommandQueueIndex;
	}

	bool IsLastCommand()
	{
		bool reValue = (mCommandQueue.Num() == mCurCommandQueueIndex);
		return reValue;
	}
private:
	int32 mCommandListClearanceCount;
	/*!
	*	@brief 삭제목록이 꽉차면 그걸 정해진 수만큼 제거한다.
	*	@detail
	*/
	void ClearanceCommandQueue()
	{
		int32 lastIndex = mDeleteCandidates.Num() - 1;
		int32 deleteCount = 0;
		for (; -1 < lastIndex && deleteCount < mCommandListClearanceCount; --lastIndex, ++deleteCount)
		{
			FTIHCommandBase* target = mDeleteCandidates[lastIndex];
			SafeDeletePtr(target);
			target = nullptr;
			mDeleteCandidates.RemoveAt(lastIndex);
		}
	}
};

template<typename TIHTemplateType>
class TTIHCommandFunctorWrapper
{
public:
	bool IsValidFunctor()
	{
		static FTIHCommander& commander = TIHSTATION.GetCommander();
		static FTIHMngObjPool& objectPool = TIHSTATION.GetObjectPool();
		bool reValue = false;
		if ((int8)ETIHCommandFunctorProtocols::EManagedObjectMemberFunction == mFunctorHeader.Protocol)
		{
			//	이걸 safety 하게 만들어야함
			int32 objectRef = mFunctorHeader.ReferenceIndex;
			reValue = objectPool.GetManagedObject(objectRef)->IsValidManagedTarget();
		}
		else if ((int8)ETIHCommandFunctorProtocols::ECommanderFunction == mFunctorHeader.Protocol)
		{

		}
		return reValue;
	}
	TFunction<TIHTemplateType>& GetFunction()
	{
		return mContents;
	}
private:
	FTIHCommandFunctorHeader mFunctorHeader;
	TFunction<TIHTemplateType> mContents;
};

class FTIHCommandExecutionState
{
public:
	const bool& CheckExecuteCommanderLoop()
	{
		return mExecuteCommaderLoop;
	}
	void StopCommaderLoop()
	{
		mExecuteCommaderLoop = false;
	}
	void StartCommanderLoop()
	{
		mExecuteCommaderLoop = true;
	}

private:
	bool mExecuteCommaderLoop;
	int32 mPrevCommandIndex;
	int32 mCurrCommandState;
};

class FTIHCommander
{
public:
	void TestSettingCommandList();

	FTIHCommandExecutionState& GetCommandExecutionState()
	{
		return mCommaderExecutionState;
	}

	FTIHCommandList& GetCommandList()
	{
		return mCommandLists[mCurrMainCmdListIndex];
	}

	TIHReturn64 ExecuteCommands();
	TIHReturn64 ExecuteCommandDirect(FTIHCommandBase* curCommand);

	template<typename TIHTemplateType>
	TIHReturn64 ExecuteCommandStaticPolymorph(FTIHCommandStrategyCRTP<TIHTemplateType>& target, FTIHCommandBase* cmdBase)
	{
		return target.ExecuteStrategy(cmdBase);
	}
	//


	//	이거 리절브 해야함.
	TArray<TTIHCommandFunctorWrapper< TIHReturn64(FTIHCommandBase*) > > mCompleteFunctions;



	TIHReturn64 ExecuteCommandStaticPolymorphs(FTIHCommandBase* primitiveCmd);
	TIHReturn64 SequenceCommand(TIHReturn64 result, FTIHCommandBase* primitiveCmd);

	/*!
	*	@brief 이거 만약 실행할 call back 함수가 있으면 해당 인덱스안에 있는
	*	@detail
	*/
	TIHReturn64 CheckCallingCompleteFunctions(FTIHCommandBase* primitiveCmd);

	TIHReturn64 CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd);


	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyTestDelay, mStrategyTestDelay);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyCreateNewAlloc, mStrategyCreateNewAlloc);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyCreateAssignPool, mStrategyCreateAssignPool);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerConnect, mStrategyServerConnect);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerSend, mStrategyServerSend);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerListen, mStrategyServerListen);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyServerDisConnect, mStrategyServerDisConnect);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyDeleteRejectPool, mStrategyDeleteRejectPool);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyDeleteDestory, mStrategyDeleteDestory);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyModifyTransform, mStrategyModifyTransform);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyModifyValue, mStrategyModifyValue);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyInOutReadAndSave, mStrategyInOutReadAndSave);
	//TIHMACRO_CHAINBUILDER_SETTER_AUTO_FUNCNAME(StrategyInOutWriteAndModify, mStrategyInOutWriteAndModify);

	decltype(auto) SetStrategyTestDelay(auto value)
	{
		SafeDeletePtr(mStrategyTestDelay);
		mStrategyTestDelay = value;
		return *this;
	}
	decltype(auto) SetStrategyCreateNewAlloc(auto value)
	{
		SafeDeletePtr(mStrategyCreateNewAlloc);
		mStrategyCreateNewAlloc = value;
		return *this;
	}
	decltype(auto) SetStrategyCreateAssignPool(auto value)
	{
		SafeDeletePtr(mStrategyCreateAssignPool);
		mStrategyCreateAssignPool = value;
		return *this;
	}
	decltype(auto) SetStrategyServerConnect(auto value)
	{
		SafeDeletePtr(mStrategyServerConnect);
		mStrategyServerConnect = value;
		return *this;
	}
	decltype(auto) SetStrategyServerSend(auto value)
	{
		SafeDeletePtr(mStrategyServerSend);
		mStrategyServerSend = value;
		return *this;
	}
	decltype(auto) SetStrategyServerListen(auto value)
	{
		SafeDeletePtr(mStrategyServerListen);
		mStrategyServerListen = value;
		return *this;
	}
	decltype(auto) SetStrategyServerDisConnect(auto value)
	{
		SafeDeletePtr(mStrategyServerDisConnect);
		mStrategyServerDisConnect = value;
		return *this;
	}
	decltype(auto) SetStrategyDeleteDestory(auto value)
	{
		SafeDeletePtr(mStrategyDeleteRejectPool);
		mStrategyDeleteRejectPool = value;
		return *this;
	}
	decltype(auto) SetStrategyModifyTransform(auto value)
	{
		SafeDeletePtr(mStrategyModifyTransform);
		mStrategyModifyTransform = value;
		return *this;
	}
	decltype(auto) SetStrategyModifyValue(auto value)
	{
		SafeDeletePtr(mStrategyModifyValue);
		mStrategyModifyValue = value;
		return *this;
	}
	decltype(auto) SetStrategyInOutReadAndSave(auto value)
	{
		SafeDeletePtr(mStrategyInOutReadAndSave);
		mStrategyInOutReadAndSave = value;
		return *this;
	}
	decltype(auto) SetStrategyInOutWriteAndModify(auto value)
	{
		SafeDeletePtr(mStrategyInOutWriteAndModify);
		mStrategyInOutWriteAndModify = value;
		return *this;
	}


	/*



	*/

private:
	int32 mCurrentCommandListIndex;
	int32 mCurrMainCmdListIndex;
	TArray<FTIHCommandList> mCommandLists;

	FTIHCommandShareBoard mShareBoard;
	//TUniquePtr<FTIHCommandShareBoard> mShareBoard;

	FTIHCommandResultBoard mResultBoard;

	// cmd state 로 빼야함.
	bool mIsCommandExecuteLoop;
	int32 mCurrCommandState;
	int32 mCurrCommandListIndex;
	int32 mCurrCommandQueueIndex;

	FTIHCommandExecutionState mCommaderExecutionState;

	FTIHCommanderStrategyTestDelay* mStrategyTestDelay;
	FTIHCommanderStrategyCreateNewAlloc* mStrategyCreateNewAlloc;
	FTIHCommanderStrategyCreateAssignPool* mStrategyCreateAssignPool;
	FTIHCommanderStrategyServerConnect* mStrategyServerConnect;
	FTIHCommanderStrategyServerSend* mStrategyServerSend;
	FTIHCommanderStrategyServerListen* mStrategyServerListen;
	FTIHCommanderStrategyServerDisConnect* mStrategyServerDisConnect;
	FTIHCommanderStrategyDeleteRejectPool* mStrategyDeleteRejectPool;
	FTIHCommanderStrategyDeleteDestory* mStrategyDeleteDestory;
	FTIHCommanderStrategyModifyTransform* mStrategyModifyTransform;
	FTIHCommanderStrategyModifyValue* mStrategyModifyValue;
	FTIHCommanderStrategyInOutReadAndSave* mStrategyInOutReadAndSave;
	FTIHCommanderStrategyInOutWriteAndModify* mStrategyInOutWriteAndModify;

	FTIHCommanderExtentionForExeCmdStrategy* mStrategyExention;
};

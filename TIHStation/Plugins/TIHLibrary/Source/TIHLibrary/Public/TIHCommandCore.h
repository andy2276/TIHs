#pragma once
#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.h"

#include "TIHCommandCore.generated.h"

class FTIHCommander;
class FTIHCommandBase;
template<typename TIHTemplateType>class TTIHCommand;
class FTIHCommandFactoryConfigure;
class FTIHChainBuilderPool;
class FTIHCommandFactory;
class FTIHCommandList;
template<typename TIHTemplateType>class TTIHCommandFunctorWrapper;

union FUnionTIHCommandResult;
union FUnionTIHCommandFactoryResult;
union FUnionTIHDataBoardResult;
union FUnionTIHCommandListResult;

struct FTIHCommandHeader;
struct FTIHCommandMethod;
struct FTIHCommandFactoryBuilders;

class FTIHCommanderStrategyCreateNewAlloc;
class FTIHCommanderStrategyCreateAssignPool;
class FTIHCommanderStrategyServerConnect;
class FTIHCommanderStrategyServerSend;
class FTIHCommanderStrategyServerListen;
class FTIHCommanderStrategyServerDisConnect;
class FTIHCommanderStrategyDeleteRejectPool;
class FTIHCommanderStrategyDeleteDestory;
class FTIHCommanderStrategyModifyTransform;
class FTIHCommanderStrategyModifyValue;
class FTIHCommanderStrategyInOutReadAndSave;
class FTIHCommanderStrategyInOutWriteAndModify;
class FTIHCommanderExtentionForExeCmdStrategy;


union FUnionTIHCommandResult
{
	struct FTIHCommandResultDetail
	{
		int8 CommandResult0;
		int8 CommandResult1;

		int8 ProcessingResult0;
		int8 ProcessingResult1;

		int32 SimpleResult;
	}ResultDetail;
	TIHReturn64 WholeData;
};
union FUnionTIHDataBoardResult
{
	struct FTIHDataBoardReserveResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 PreMax;
		TIHReturn32 SimpleResult;
	}ReserveDetail;
	struct FTIHDataBoardRegisterResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 RegistedIndex;
		TIHReturn32 SimpleResult;
	}RegisterDetail;
	struct FTIHDataBoardRegisterRangeResultDetail
	{
		int8 Protocol;
		int8 Padding;
		int16 StartIndex0;

		int16 StartIndex1;
		int16 RegistCount;
	}RegisterRangeDetail;

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
		Protocol = (int8)ETIHCommandHeaderProtocols::ECommandUnknown;
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
		CommandProcessingProtocol( (int8)ETIHCommandHeaderProtocols::ECommandUnknown),
		CompleteFunctorIndex(-1),
		CommandProgressionProtocol(-1)
		
	{
	};
	void RefreshForReuse()
	{
		CommandProcessingProtocol = (int8)ETIHCommandHeaderProtocols::ECommandUnknown;
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
	virtual TIHReturn64 ExecuteCommandSelfFunction()
	{
		return 0;
	}
	/*
		to-do
		커맨드의 상태가 필요한거 같다.
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

	const TIHTemplateType& GetCommandFeature()
	{
		return mCmdFeature;
	}
	TIHTemplateType& GetCommandFeatureNonConst()
	{
		return mCmdFeature;
	}
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CommandFeature, mCmdFeature);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(CompleteCallBack, mCompleteCallBack);
	TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME(ErrorCallBack, mErrorCallBack);

	virtual int32 GetCommandFeatureSize() override
	{
		int32 reValue = sizeof(mCmdFeature);
		return reValue;
	}

	
protected:
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

class FTIHCommandFactoryConfigure 
{
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
/*
	to-do
	이거 안쓸듯...그냥 직접 커맨드를 가져와서 쓸듯하네
*/
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
	to-do
	여기에 커맨드 팩토리 만들기
	이거 안쓸거같음.
*/
class FTIHCommandFactory
{
public:

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
					-> 이거 찾아보니 reserve 가 이루어지면 카피가 이루어 져서 이걸 생각할 필요가 없엇음
			rw이슈
			근데 추가적으로 해야할일이있음
			to-do
			커맨드도 재사용하고 싶을때가 있을거임. 그럼 그러한 커맨드들을 모아두는 곳도 필요하고
			그러한 커맨드를 재 설정하는것과 새롭게 생성하는게 같아야하고,
			이거 사용설명서가 필요하다.
			결국 이게 뭐흘 하는거냐면 커맨드를 만들때 사용하는건데, 지금 이거를 쓰는가 생각해보면
			지금 안쓸거같음. 꼭 이걸 통해서 뭐를 하는게 아니라서 그런듯
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

	TIHReturn64 ReserveArrayForCommandMetaDatasByGrowing();
	//	이거는 제거를 하자.
	TIHReturn64 AssignToArrayForCommandMetaData(FTIHChainBuilderBase* data);

	void RejectCommandData(FTIHChainBuilderBase*& data);

	virtual TIHReturn64 PrepareCommandFactory();

	//	사전설정
	virtual TIHReturn64 PrevRegistCommand();

	//	생성시 전략
	virtual TIHReturn64 InstantiateCommandsInMetaArray(FTIHCommander& commander);

	FTIHCommandFactory();
	virtual ~FTIHCommandFactory()
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
	FTIHCommandFactoryConfigure& CommandFactoryConfig()
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
	TUniquePtr<FTIHCommandFactoryConfigure> mFactoryConfigObject;

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
/*
	to-do
	검증이 필요함. 제대로 된건지. 그리고 커맨드를 보관하고 그걸 불러오는 과정을 해야할듯.
	그걸 원래 커맨드 팩토리에서 하려고 했는데, 그냥 커맨드를 만들때 규격화만 진행한듯
	그것도 너무 어렵게 만들어서 지금은 못사용할 것 같다. 명확하지도 않고.
	-> 근데 밑에 helper 보니깐 왜 만들었는지는 알거같음. 다른 영역을 모르니깐 당연하게 썼음
	-> 이걸 바로 접근해서 값을 넣을수있게 해야겠다.
	-> 그럼 커맨더를 어디다가 저장하지? 시발.... 이럼 state
*/
class FTIHCommandList
{
public:
	int32 mCurCommandQueueIndex;

	TDeque<FTIHCommandBase*> mCommandQueue;

	TArray< FTIHCommandBase*> mDeleteCandidates;

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
	void ReserveCommandList(int32 cmdCapacity)
	{
		ReserveCommandQueue(cmdCapacity);
		mDeleteCandidates.Reserve(cmdCapacity);
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
		reValue.WholeData = 0;
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
	bool IsEmptyCmdList() const
	{
		return mCommandQueue.IsEmpty();
	}

	/*
		to-do
		커맨드를 pooling 하는건 안될거같음. 
		만들어야하는게, 커맨드 비우기 기능 flush
		지금 커맨드가 들어왔는지 확인하는 기능
	*/

private:
	/*
		to-do
		mCommandListClearanceCount 이거를 설정해줘야하는 함수가 없음.
		이걸 먼저 설정해야하는데 그냥 막만든듯.
		config 를 통해 설정하자.
	*/
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

/*
	to-do
	여기 이하는 함수를 실행하는 것이나 뭐 그런것들을 담아놓는곳인데,
	이게 지금은 필요가 없어졌음. 처음에는 데이터를 모두 자료형단위로 넣어놓고 
	그걸 커맨드가 참조하는 형태로 하려고 했는데, 생각을 해보니깐 그러면 안됨. 왜냐하면 참조하는게 같으면 
	빠르긴할텐데...흠...참조 영역이 뭔지 그데이터가 뭔지를 직접 저장하고 사용하는게 더 나은거 같음.
	원래는 참조만 가지려했는데...이거도 아직 나쁘지 않은 형태같긴한데... 이건 추후에 더 생각해보자.
*/
USTRUCT()
struct FTIHCommandFunctorHeader
{
	GENERATED_BODY()

	UPROPERTY()
	int8 Protocol;
	UPROPERTY()
	int8 OptionInt8;

	/*!
	*	@brief 이거의 목적은 다용도이긴한데 일단 managedOBject 의 인덱스로 사용.
	*	@detail 
	*/
	UPROPERTY()
	int16 OptionInt16;	//	이게 16비트였나 기억이안남
							//	참조할 영역이 managedOBject 또는 커맨드 내부에 있는 내부 콜백의 인덱스
							//	이제 이걸 가지고 결정을 한 결과를 기록해놓으면 된다.
};

class FTIHCommandFunctorWrapperBase
{
public:
	bool IsValidFunctor();


protected:
	FTIHCommandFunctorHeader mFunctorHeader;
};

template<typename TIHTemplateType>
class TTIHCommandFunctorWrapper : public FTIHCommandFunctorWrapperBase
{
public:
	TFunction<TIHTemplateType>& GetFunction()
	{
		return mContents;
	}
private:
	
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

class FTIHCommandDataBoard
{
public:
	TIHReturn64 ReserveForArrayInt8ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int8>>(size, mInt8Array);
	}
	TIHReturn64 ReserveForArrayInt16ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int16>>(size, mInt16Array);
	}
	TIHReturn64 ReserveForArrayInt32ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int32>>(size, mInt32Array);
	}
	TIHReturn64 ReserveForArrayInt64ByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<int64>>(size, mInt64Array);
	}
	TIHReturn64 ReserveForArrayFloatByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<float>>(size, mFloatArray);
	}
	TIHReturn64 ReserveForArrayDoubleByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<double>>(size, mDoubleArray);
	}
	TIHReturn64 ReserveForArrayVector3fByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FVector>>(size, mVectorArray);
	}
	TIHReturn64 ReserveForArrayTransformByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FTransform>>(size, mTransformArray);
	}
	TIHReturn64 ReserveForArrayStringByGrowing(int32 size)
	{
		return ReserveForArrayByGrowing<TArray<FString>>(size, mStringArray);
	}

	TIHReturn64 RegisterToArrayAsInt8(const int8& value)
	{
		return RegisterToArray<int8, TArray<int8>>(value, mInt8Array);
	}
	TIHReturn64 RegisterToArrayAsInt16(const int16& value)
	{
		return RegisterToArray<int16, TArray<int16>>(value, mInt16Array);
	}
	TIHReturn64 RegisterToArrayAsInt32(const int32& value)
	{
		return RegisterToArray<int32, TArray<int32>>(value, mInt32Array);
	}
	TIHReturn64 RegisterToArrayAsInt64(const int64& value)
	{
		return RegisterToArray<int64, TArray<int64>>(value, mInt64Array);
	}
	TIHReturn64 RegisterToArrayAsFloat(const float& value)
	{
		return RegisterToArray<float, TArray<float>>(value, mFloatArray);
	}
	TIHReturn64 RegisterToArrayAsDouble(const double& value)
	{
		return RegisterToArray<double, TArray<double>>(value, mDoubleArray);
	}
	TIHReturn64 RegisterToArrayAsVector(const FVector& value)
	{
		return RegisterToArray<FVector, TArray<FVector>>(value, mVectorArray);
	}
	TIHReturn64 RegisterToArrayAsTransform(const FTransform& value)
	{
		return RegisterToArray<FTransform, TArray<FTransform>>(value, mTransformArray);
	}
	TIHReturn64 RegisterToArrayAsString(const FString& value)
	{
		return RegisterToArray<FString, TArray<FString>>(value, mStringArray);
	}


	const int32 GetDataInInt8Array(int32 index)
	{
		return mInt8Array[index];
	}
	const int64 GetDataInInt16Array(int32 index)
	{
		return mInt16Array[index];
	}

	const int32 GetDataInInt32Array(int32 index)
	{
		return mInt32Array[index];
	}
	const int64 GetDataInInt64Array(int32 index)
	{
		return mInt64Array[index];
	}
	const float GetDataInFloatArray(int32 index)
	{
		return mFloatArray[index];
	}
	const double GetDataInDoubleArray(int32 index)
	{
		return mDoubleArray[index];
	}
	const FVector& GetDataInVectorArray(int32 index)
	{
		return mVectorArray[index];
	}
	const FTransform& GetDataInTransformArray(int32 index)
	{
		return mTransformArray[index];
	}
	const FString& GetDataInStringArray(int32 index)
	{
		return mStringArray[index];
	}


private:
	TArray<int8> mInt8Array;
	TArray<int16> mInt16Array;
	TArray<int32> mInt32Array;
	TArray<int64> mInt64Array;
	TArray<float> mFloatArray;
	TArray<double> mDoubleArray;
	TArray<FVector> mVectorArray;
	TArray<FTransform> mTransformArray;
	TArray<FString> mStringArray;
	template<typename TIHTemplateType = TArray<int32>>
	TIHReturn64 ReserveForArrayByGrowing(int32 size, TIHTemplateType& memeberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.ReserveDetail.Protocol = (int8)ETIHResultDetailProtocols::EReserve;
		reValue.ReserveDetail.PreMax = memeberArray.Max();

		int16 reserveValue = size - reValue.ReserveDetail.PreMax;
		if (reserveValue < 1)
		{
			if (reserveValue == 0)
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Void;
			}
			else
			{
				reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
			}
		}
		else
		{
			reValue.ReserveDetail.SimpleResult = (int32)ETIHReturn32Semantic::Success;
			memeberArray.Reserve(size);
			//reValue.ReserveDetail.CurMax = memeberArray.Max();
		}
		return reValue.WholeData;
	}

	template<typename TIHTemplateValueType = int32, typename TIHTemplateArrayType = TArray<int32>>
	TIHReturn64 RegisterToArray(const TIHTemplateValueType& value, TIHTemplateArrayType& memberArray)
	{
		FUnionTIHDataBoardResult reValue;
		reValue.RegisterDetail.Protocol = (int8)ETIHResultDetailProtocols::ERegister;
		reValue.RegisterDetail.SimpleResult = (int32)ETIHReturn32Semantic::Fail;
		int32 curPushIndex = memberArray.Num();
		if (curPushIndex < memberArray.Max())
		{
			reValue.RegisterDetail.RegistedIndex = memberArray.Add(value);
		}
		return reValue.WholeData;
	}
};
class FTIHCommandDataBoardCenter
{
public:


};


class FTIHCommandShareBoard
{
public:
	FTIHCommandShareBoard() {};
	~FTIHCommandShareBoard() {};

	//	샤딩을 넣는다면 여기에 넣어야겠지?

	FTIHCommandDataBoard mBoard;
};

class FTIHCommandResultBoard
{
public:
	FTIHCommandResultBoard() {};
	~FTIHCommandResultBoard() {};



	FTIHCommandDataBoard mBoard;
};

class FTIHCommandPathBoard
{
public:
	FTIHCommandPathBoard() {};
	~FTIHCommandPathBoard() {};

	TMap<FName, FString> mPathAddtions;

	FTIHCommandDataBoard mBoard;
};


/*
	to-do
	아 시발 이걸 못만드니깐 factory 를 만들었구나...
	이제 알았다. 하여튼 이거 용도가 커맨더를 빠르게 만들어주기 위함인데, 지금 필요없을듯.
*/
class FTIHCommandHelper
{
public:
	void DictateCommandCreateNewAllocPrepare();
	void DictateCommandCreateNewAllocOnGenerate();

	void DictateCommandCreatePooling();
	void DictateCommandCreateReject();

	void DictateCommandLoadMesh();

	
};
USTRUCT()
struct FTIHCommanderConfigure
{
	GENERATED_BODY()

	UPROPERTY()
	int8 InitType;
	UPROPERTY()
	int8 Padding0;
	UPROPERTY()
	int16 CommandCapacity;

	FTIHCommanderConfigure()
		:
		InitType(0),
		Padding0(0),
		CommandCapacity(128)
	{
	}
};


/*
	memo
	### 사전에 해야하는것들
		- [v] reserve : function array -> 이거 생일 문제임
		- [v] reserve : FTIHCommandList::mDeleteCandidates 이거도 크기가 커맨드와 같아야하지 않을까
		- [v] reserve : FTIHCommandList::mCommandQueue 이거도 크기가 커맨드와 같아야하지 않을까
	### 여기서 가능한 기능들
		+ 커맨드 리스트에 접근가능
		+ 전략 패턴이나 델리게이트 혹은 vtable 혹은 룩업테이블로 커맨더 처리가능
		+ 전략 패턴 set 가능
		+ 룩업테이블에 함수 등록가능
		+ 틱커블 가능
		+ 연속해서 커맨드를 실행하는것 가능
		+ 커맨드 리스트의 영역을 나눠놨음
		+ 특정 커맨드 리스트가 비었는지 안비었는지 확인가능
		+ 커맨더의 환경설정 가능
		+ 커맨더가 완료혹은 에러가 났을때 실행할 콜백할 기능있음.
			-> 지금 커맨더 펑션부분보는데, 여기 만약에 매니지드 오브젝트 안에 잇는 함수를 실행시킬지 혹은 커맨드 펑션의 함수를 실행할지
			-> 혹은 그냥 등록된걸 실행할지를 선택하는 부분같은데, 그냥 함수가 valid 한지 확인하고 아 매니지드 오브젝트가 죽었는데,
			-> 풀링이라 살아있으니 안되는구나.근데 매니지드 오브젝트는 결국 그냥 wrapper 아닌가? 이거 왜 호출해주지? 
				-> 매니지드 오브젝트를 위한 커맨드 혹은 스트라 테지에 액터나 뭐 위젯같은걸 넣어주면
				-> 그걸 분석해서 그에 맞는 풀링이 있는지 확인하고, 없으면 새롭게 만드는 기능이 있어야한다.
				-> 내가 원하는 유오브젝트를 설정하고 그걸 매이크 커맨드를 사용하면 이런작동이 되어야한다.
				-> 여기에는 액터의 타입과 uclass 와 같은 해쉬만 있으면 된다. 그리고 그걸 몇개 만들지 하면된다.
				-> 음...해당 유오브젝트를 등록
*/
class FTIHCommander
{
public:
	FTIHCommander()
	{
		
	}

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
	TIHReturn64 ExecuteCommandStaticPolymorph(TTIHCommandStrategyCRTP<TIHTemplateType>* target, FTIHCommandBase* cmdBase)
	{
		TIHReturn64 reValue = 0;
		reValue = target->GetSelfPtr()->ExecuteCommandStaticPolymorph(cmdBase);
		return reValue;
	}

	/*
		to-do
		이거 커맨드 양만큼 리절브 해야하는거임.
	*/
	TArray<TTIHCommandFunctorWrapper< TIHReturn64(FTIHCommandBase*) > > mCompleteFunctions;

	TIHReturn64 ExecuteCommandByCmdProtocolEnum(const FTIHCommandHeader& cmdHeader, FTIHCommandBase* primitiveCmd);
	TIHReturn64 SequenceCommand(TIHReturn64 result, FTIHCommandBase* primitiveCmd);

	/*!
	*	@brief 이거 만약 실행할 call back 함수가 있으면 해당 인덱스안에 있는
	*	@detail
	*/
	TIHReturn64 CheckCallingCompleteFunctions(FTIHCommandBase* primitiveCmd);

	TIHReturn64 CheckCallingErrorFunctions(FTIHCommandBase* primitiveCmd);


	/*
		to-do
		삭제 혹은 변경예정
	*/
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
	


	void SetCommanderConfig(const FTIHCommanderConfigure& value)
	{
		mCommanderConfig = value;
	}
	FTIHCommanderConfigure GetCommanderConfig() const
	{
		return mCommanderConfig;
	}

	void OnReserveCommander();
	
	void SwapCmdChain(int32 newListType)
	{
		if(mCommandLists.IsValidIndex(newListType) == true)
		{
			mCurrMainCmdListIndex = newListType;
		}
	}
	/*
		스왑체인 구현
		해당 커맨드가 비었는지 아닌지 확인
	*/
	bool IsCurrentChainEmpty()
	{
		return mCommandLists[mCurrCommandListIndex].IsEmptyCmdList();
	}
	bool IsChainEmpty(int32 listIndex)
	{
		bool reValue = false;
		if(mCommandLists.IsValidIndex(listIndex) == true)
		{
			reValue = mCommandLists[listIndex].IsEmptyCmdList();
		}
		return reValue;
	}
	/*
		to-do
		반드시 reserve 를 하고 regist 를 해야한다.
	*/
	void ReserveLookUpTable(int32 size)
	{
		if(mStrategyLookUpTable.Max() < size)
		{
			mStrategyLookUpTable.Reserve(size);
		}
	}
	void RegistLookUpTable(TFunction < TIHReturn64(FTIHCommandBase*) > func)
	{
		mStrategyLookUpTable.Add(func);
	}

	TIHHash64 ExecuteCommandByLookUpTable(const FTIHCommandHeader& cmdHeader,FTIHCommandBase* primitiveCmd)
	{
		TIHHash64 reValue = 0;
		reValue = mStrategyLookUpTable[cmdHeader.Protocol](primitiveCmd);
		return reValue;
	}
	/*
		to-do
		시간 큐를 만들고 해당 타임큐로 만드는데 일단 무시
	*/
	void RegistTimeCommand(FTIHCommandBase* timeCommand);
	void RegistNormalCommand(FTIHCommandBase* normalCommand);
	void RegistSystemCommand(FTIHCommandBase* systemCommand);

	int32 GetCurrMainCmdListIndex()
	{
		return mCurrMainCmdListIndex;
	}

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

	//FTIHCommanderStrategyTestDelay* mStrategyTestDelay;
	FTIHCommanderStrategyCreateNewAlloc*		mStrategyCreateNewAlloc;
	FTIHCommanderStrategyCreateAssignPool*		mStrategyCreateAssignPool;
	FTIHCommanderStrategyServerConnect*			mStrategyServerConnect;
	FTIHCommanderStrategyServerSend*			mStrategyServerSend;
	FTIHCommanderStrategyServerListen*			mStrategyServerListen;
	FTIHCommanderStrategyServerDisConnect*		mStrategyServerDisConnect;
	FTIHCommanderStrategyDeleteRejectPool*		mStrategyDeleteRejectPool;
	FTIHCommanderStrategyDeleteDestory*			mStrategyDeleteDestory;
	FTIHCommanderStrategyModifyTransform*		mStrategyModifyTransform;
	FTIHCommanderStrategyModifyValue*			mStrategyModifyValue;
	FTIHCommanderStrategyInOutReadAndSave*		mStrategyInOutReadAndSave;
	FTIHCommanderStrategyInOutWriteAndModify*	mStrategyInOutWriteAndModify;

	FTIHCommanderExtentionForExeCmdStrategy*	mStrategyExention;

	
	TArray<TFunction<TIHReturn64(FTIHCommandBase*)>> mStrategyLookUpTable;

	FTIHCommanderConfigure mCommanderConfig;
};

class FTIHTickableScheduler : public FTickableGameObject
{
public:
	FTIHTickableScheduler();
	virtual ~FTIHTickableScheduler();

	void SetStation(FTIHStationBase* station);
	virtual ETickableTickType GetTickableTickType() const override
	{
		return ETickableTickType::Conditional;
	}
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FTIHTickableScheduler, STATGROUP_Tickables);
	}
	bool IsTickableWhenPaused() const
	{
		return mIsOnPause;
	}
	bool IsTickable() const override
	{
		return mIsOnTick;
	}
	void OnTick()
	{
		mIsOnTick = true;
	}
	void OffTick()
	{
		mIsOnTick = false;
	}
	void ToggleTick()
	{
		mIsOnTick = !mIsOnTick;
	}

	void OnPause()
	{
		mIsOnPause = true;
	}
	void OffPause()
	{
		mIsOnPause = false;
	}
	void TogglePause()
	{
		mIsOnPause = !mIsOnPause;
	}
	/*
		to-do
		일단은 커맨드리스트 하나만 컨트롤할까?
		어떻게 해야할지 생각
		일단 인텔리 센스가 계속해서 확인하다가 
		커맨드 리스트중 하나에 커맨드가 쌓였거나
		커맨드 스스로가 호출을 했다면 스케줄러를 온한다
		이걸 온하면 애당 커맨드 리스트안에 있는걸 실행하는데,
		실행하고 결과에 따라서 해당 틱을 멈출지 선택
	*/
protected:
	class TIHSTATION_TYPE* mTIHStation;
	FTIHStationPolymorphInterface mStaticPolymorph;
	FTIHMngObjPoolCenter* mMngObjCenter;
	FTIHCommander* mCommander;
	FTIHCommandList* mCommandList;
	bool mIsOnTick;
	bool mIsOnPause;
	uint32 LastFrameNumberWeTicked;
};

class	FTIHPakInfra
{
public:

private:
	FTIHStationBase* mStationPtr;
	FTIHStationPolymorphInterface mStationPolymorph;
};

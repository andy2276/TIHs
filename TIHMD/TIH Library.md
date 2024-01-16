{{date}}
{{time}}

## Command
### macro
#### TIHMACRO_GENERIC_TYPE_CHECK_FALSE_TRUE 
	false struct 와 true struct 를 만들기 위한 메크로
#### TIHMACRO_GENERIC_TYPE_CHECK_CRPT_CARRYOUT
	crtp 를 실행하기 위한 매크로
	만약 특정 클래스가 만들어져 있지 않는다면 컴파일 타임에 다른 함수로 변경을 하기위한 기능을 편하게 하기 위해서 만든 매크로
#### TIHMACRO_SPECIFIC_TYPE_CHECK_CRPT_CARRYOUT
#### TIHMACRO_CHAINBUILDER_SETTER_BASE
#### TIHMACRO_CHAINBUILDER_SETTER_BASE_TARGETRETURN
#### TIHMACRO_CHAINBUILDER_SETTER
#### TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME
#### TIHMACRO_CHAINBUILDER_SETTER_NONCONST
#### TIHMACRO_CHAINBUILDER_SETTER_FUNCNAME_NONCONST
#### TIHMACRO_CHAINBUILDER_SETTER_AUTO
#### 
#### 
#### 
#### 


### enums
#### ETIHCommandHeaderProtocolType #ue
#### ETIHResultDetailProtocols #ue
#### ETIHCommandMethodProcessingProtocols #ue
	커맨드 처리 방법에 대한 프로토콜
EStrategies
	커맨더 내부에 있는 strategy 를 사용하여 처리한다
	protocolOption 를 done 콜백 델리게이트 인덱스로 사용한다
EDelegates
	커맨더 내부에 등록되어 있는 델리게이트를 사용하여 처리한다
	done 콜백도 여기에 저장이 되어있다.
	결과를 저장할 필요가 없다면 콜백은 안이루어진다
	protocolOption 에 추가적인 정보를 기입해야 사용이 가능하다
EMultiThreading
	runable 을 상속받은 클래스에서 delegate 를 실행하여 처리한다
	protocolOption 에 추가적인 정보를 기입해야 사용이 가능하다

#### ETIHCommandMethodProgressionProtocols #ue
	커맨드 진행방법에 대한 프로토콜
EContinue
	여기에 처리한 함수가 끝나면 다음 커맨드를 실행한다
	실패시 에러에 대한 함수를 호출한다
ETickable
	하나 실행하고 루프를 끝내고 다음틱에 다시 실행한다.
EReapeate
	하나를 실행하고 만약 void 가 뜨면 pop 을 하지 않고 계속 하나를 실행한다.
	최대횟수는 정해서 처리한다
EAsyncDonCare
	해당 커맨더 진행방법을 만나면 무조건 다음 처리를 진행한다.
	EMultiThreading 와 페어로 이루어지며 처리 방법을 무조건 먼저 만나기때문에 디폴트로 변경이 된다.

### structs
#### FTIHCommandHeader #ue #struct
##### description
커맨드의 특징을 담은 메타데이터
##### elements
+ int8 Protocol; #ue<br>해당 커맨드 설명의 규약
+ int8 ProtocolOption; #ue<br>추가적인 설명이 필요할 때 사용. 
+ int8 Option0; #ue<br>추가 외에 들어가야할 정보1
+ int8 Option1; #ue<br>추가 외에 들어가야할 정보2

#### FTIHCommandMethod #ue #struct
##### description
커맨드가 작동하게 될 방식
##### elements
+ in8 Protocol<br>해당 커맨드행동의 규약
+ int8 ExecuteMethodInde#x;br>이거는 바꿀가능성이 농#후함
+ int8 DoneMethodIndex;<br#>이거는 바꿀가능성이 농후함
+ in# 8 ErrorMethodIndex;<br>이#거는 바꿀가능성이 농후함

#### FTIHCommandFactoryBuilders #native 
	[FTIHChainBuilderBase*](#FTIHChainBuilderBase) 를 저장해놓기 위한 구조체.
	[FTIHChainBuilderBase*](#FTIHChainBuilderBase) 를 간단하게 컨트롤 하는 기능을 제공한다. 
		예를 들자면 RW 상태를 통해 begin 을 사용하지 않으면 사용이 불가능하게 만듦
		refresh 를 header 와 method 를 사용하거나 재사용하는 기능을 제공
		data 는 새롭게 생성하거나 이미 할당되어진 영역의 것을 들고오는것.

### class
#### FTIHCommandBase #native #pattern-commander #class
#### TTIHCommand #native #template #pattern-type-erasure #class
#### FTIHCommandTestDelay #native #pattern-CRTP #class
[Parent : TTIHCommand](#TTIHCommand)

	커멘드 테스트를 위한 클래스
#### FTIHCommandCreateAssignPool #native #pattern-CRTP #class
[Parent : TTIHCommand](#TTIHCommand)

	assign pooling 을 하기 위한 클래
#### FTIHCommandCreateNewAlloc #native #pattern-CRTP #class
[Parent : TTIHCommand](#TTIHCommand)
#### FTIHCommandList #native #class
	커맨더들을 담기위한 클래스이다. 
#### FTIHCommander #native #class
	커맨드를 작동시키는 주체 클래스이다.
	여러 커맨드 리스트를 담고있을 수 있고 결과를 저장할 수 있는 저장소를 가진다.
#### UTIHCommandFactoryConfigure #ue #class
[Parent : UObject](https://docs.unrealengine.com/5.3/en-US/API/Runtime/CoreUObject/UObject/UObject/)
#### FTIHCommandDataBoard #native #class
#### FTIHCommandShareBoard #native #class
[Parent : FTIHCommandDataBoard](#FTIHCommandDataBoard)
#### FTIHCommandResultBoard #native #class
[Parent : FTIHCommandDataBoard](#FTIHCommandDataBoard)
#### FTIHCommandPathBoard #native #class
[Parent : FTIHCommandDataBoard](#FTIHCommandDataBoard)
#### FTIHChainBuilderBase #native #class
#### TTIHChainBuilder #native #template #pattern-type-erasure
[parent : FTIHChainBuilderBase](#ftihchainbuilderbase)
#### FTIHCommandFactory #native #class
##### method
###### SetCommanHeaderMetaDataBuilder

###### SetCommandMethodMetaDataBuilder
	commandMethod 에 대한 체인을 셋팅하는곳이다. 
###### SetCommandDataMetaDataBuilder #template
	commandData 를 설정하기 위한 템플릿 타입이다.
	중요한 점은 기존에 있던 것들을 재사용할수 있다는것이다.
		그런데 그걸 구현하려면 typeid 를 사용해야하는데 지금 당장은 사용하지 않는다.
###### BeginRegistCommandMetaData
	정확히는 사전준비에 해당하는 것인데, 흠...사전준비때 data 를 써놓고 싶은데.... 해당 기능을 호출하면 이제 rw 가 w 로 바뀌고 셋팅을끝내고 아!
###### PrevBuilders
###### JumpBuilders
###### NextBuilders
###### EndRegistCommandMetaData
###### ReserveArrayForCommandMetaDatasByGrowing
###### AssignToArrayForCommandMetaData
###### InstantiateCommandsInMetaArray
###### CreateChainBuilderPtrCommandHeader
###### CreateChainBuilderPtrCommandMethod
###### CreateChainBuilderPtrCommandData #template
###### CommandFactoryConfig
	FactoryConfigure 를 들고오는 방
###### GetCommandFactoryReserveSize
###### IsChangePossibleConfig
###### SearchReserveIndex


#### FTIHCommanderStrategy #native
#### FTIHCommanderStrategyTestDelay #native
[Parent : FTIHCommanderStrategy](#FTIHCommanderStrategy)
#### FTIHManagedObjectComposite #native #pattern-composite
#### FTIHManagedObjectComponent #native #pattern-composite
[Parent : FTIHManagedObjectComposite](#FTIHManagedObjectComposite)
#### FTIHManagedObjectBase #native
#### TTIHManagedObject
[Parent : FTIHManagedObjectBase] #native #pattern-type-erasure #template 
	UE 오브젝트를 연결할 수 있고, 나중에 참조를 하기 위한 용도이다.
		 
#### FTIHManagedObjectPool
#### TTIHStationCRTP #native #template #pattern-CRTP
#### FTIHStationPolymorphInterface #native #pattern-CRTP
	해당 클래스 안에 station 을 실행하기는 하는데 만약 실행한 함수가 그 클래스안에 없다면 마치 virtual 함수처럼 다른 함수를 실행시켜주기 위한 기능을 담고있는 클래스이다.
#### FTIHDefaultStation #native #pattern-CRTP 
[Parent : TTIHStationCRTP](#TTIHStationCRTP)

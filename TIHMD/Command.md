### 생성관련
Create -> MngObj 로변경
1. Requirement Analysis
+ 생성과 관련된 것들이 들어가야한다. 그런데 생각해보니깐 destroy 도 그렇고 reject 도 그렇고 모두 생성이 아니라 파괴이다. 그렇다면 이걸 묶는다면 create 보다는 매니지드 오브젝트에 가깝지 않을까
+ 그래서 바뀐이름은 MngObj 이다.
1. Design
+ NewAlloc
	1. Conceptual Design
	+ 진짜로 새롭게 생성하는것에 한한다.
	+ 생성과 관련된 모든것들이 여기에 들어가야할거같음
	2. Modularization
		1. High-level Design
		+ 구체적으로 말하자면 이것을 위한 준비
		+ 이것을 만들어주는 것에 대한 환경설정
		+ 실제로 이것을 만들어주는것에 대한 작동
		2. low-level Routine
		+ CmdMngAllocMngPoolSetConfigure -> FTIHCmdMngObjAllocPoolCenterSetConfigure
		+ CmdMngAllocMngPoolReserve -> FTIHCmdMngObjAllocPoolReserve
		+ CmdMngAllocPrepareDatas -> FTIHCmdMngObjAllocPrepareDatas
		+ CmdMngAllocOnGenerate -> FTIHCmdMngObjAllocOnGenerate
+ Pooling
	1. Conceptual Design
	+ 만들어진 MngObj들에 한한다.
	+ 풀링이 되어진 것들을 컨트롤 하는것
	+ 즉 오브젝트풀을 컨트롤하는게 될거같다
	1. Modularization
		1. High-level Design
		+ 오브젝트 풀센터가 메인이며 이것을 컨트롤 해야한다.
		+ 오브젝트 풀을 만들 수 있어야한다.
		+ 오브젝트 풀에대한 환경설정이 가능해야한다.
		+ 오브젝트 풀을 컨트롤 할 수 있어야한다.
		+ 풀링되어진 오브젝트를 튕길수도 잇어야한다.
		+ 오브젝트풀에서 원하는 것들을 query 할 수 있어야한다. 
			+ Query 는 좀더 노말하게 찾는걸 말한다. 
		2. low-level Routine
		+ CmdMngObjPoolingPoolCenterConfig
		+ CmdMngObjPoolingCreatePool
		+ CmdMngObjPoolingPoolConfigure
		+ CmdMngObjPoolingPoolReserve
		+ CmdMngObjPoolingAssigns
		+ CmdMngObjPoolingRejects
		+ CmdMngObjQuery
2. Validation
+ 
3. Implementation
### 메쉬관련
1. Requirement Analysis
+ 메쉬를 로드하는건데 st 매쉬와 sk 매쉬 둘중 하나를 메모리에 로드하는것이다.
+ 
1. Design
+ stMesh
	1. Conceptual Design
	+ 스태틱 매쉬와 관련된 기능들에 대한 커맨드
	+ 여기서 특정 매니지드 오브젝트를 검색해서 거기에 적용하는 것도 있으면 좋을거같다.
	1. Modularization
		1. High-level Design
		+ stmesh 경로 로드
		+ 스태틱매쉬를 메모리에 로드
		+ 스태틱 매쉬를 특정 매니지드 오브젝트의 leaf 에 로드
		+ 
		1. low-level Routine
+ skMesh
	1. Conceptual Design
	+ skeletalMesh 를 로드하기 위한 준비
	+ 매쉬 캡슐로 지금 매쉬가 로드되어있는지 확인. 참고로 staging 에다가 리스트를 써야 올라가는데 이걸 이름을 onStaginPath 라고 할까? ㅋㅋㅋ음...
	1. Modularization
		1. High-level Design
		+ 경로로드인데 리스트로
		+ 경로리스트 로드 인데 config 로
		+ 경로리스트 로드 인데 server 로
		+ 경로리스트 로드 인데 특정액터로 
		+ 지금 스테이징 되어진 매쉬를 로드
		+ 쿼리
		+ 모든 메쉬들 로드
		+ 
		1. low-level Routine
		+ CmdStMeshPathListLoadByConfig
		+ CmdStMeshPathArrayReserve-> 이거 없앨까?
		+ CmdStMeshArrayReserve
		+ CmdStMeshPathListLoadByServer
		+ CmdStMeshPathListLoadBySpecial -> FTIHCmdStMeshPathListLoadBySpecial
		+ CmdStMeshsLoadBySlidingWindow -> FTIHCmdStMeshesLoadBySlidingWindow
		+ CmdStMeshsLoadAll -> FTIHCmdStMeshesLoadAll && FTIHCmdStMeshesLoadByList 로 리스트별로 가능하도록 변
		+ CmdStMeshQuery -> FTIHCmdStMeshQuery
		+ CmdStMeshsModfiyMesh -> FTIHCmdStMeshModifyMeshes 로 통합
		+ CmdStMeshsModfiyMeshes -> FTIHCmdStMeshModifyMeshes
1. Validation
+ 
2. Implementation

## 개별
### FTIHCmdMngObjAllocPoolCenterSetConfigure && FTIHCmdMngObjAllocPoolReserve && FTIHCmdMngObjAllocPrepareDatas
1. Requirement Analysis
+ 오브젝트 풀센터의 configure 를 설정하는 커맨드
+ 오브젝트 풀을 리절브 하는 커맨드인데, 원래는 configure  에 포함이 되어있는 기능이다. 하지만 나눈이유는 이 자체로도 기능을 해야하며, 해당 기능은 
1. Design
+  
	1. Conceptual Design
	+ 
	2. Modularization
		1. High-level Design
		+ 
		2. low-level Routine
		+ 
2. Validation
+ 
3. Implementation

	FTIHCmdMngObjAllocPrepareDatas -> FTIHCmdMeshPoolSetConfigure -> FTIHCmdMngObjAllocOnGenerate
### mngObj PrepareData 설정방법
```c++
FTIHNewAllocPrepareData temp;
temp.
SetTargetUEClassBase(TIHNameSpaceManagedObject::UEClassBaseType::ActorBase).
	SetTargetClassHash(mPoolCenter->RegistUEClassForGenerate(AActor::StaticClass())).
	SetAllocationSpace(TIHNameSpaceManagedObject::AllocationSpaceType::LocalSpace).
	SetAllocateCount(256);
prepareQue.EmplaceLast(temp);


```
### CommandList 넣는 방법.
```cpp
FTIHCommandList& cmdList = mCommander->GetCommandList();
cmdList.PushBackCommandPtr();

```
-----------이거 안씀 0403
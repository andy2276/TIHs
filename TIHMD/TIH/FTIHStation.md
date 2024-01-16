수정일 : 24-01-15 03:54
Template : [[02LifeCycleTemplate]]
# Name : FTIHStation
## Tags
#class #native #pattern-CRTP #pattern-static-polymorph #pattern-type-erasure
#parttern-singletone #pattern-strategy 
## Features
+ 실행 순서는 [[UTIHGameInstance]] 가 만들어지고 나서 start 이전 혹은 같을때 생성됨
+ 싱글톤 패턴으로 만들어져있으며 지원 매크로로는 [[TIH_CURRURNT_STATION_CLASS]] 를 가지며 해당 매크로로 호출시에 현재 써야하는 station 이 읽혀짐. 
## Element
+ [[FTIHCommander]]
+ [[FTIHManagedObjectPool]]
+ [[combine-ShaderBoards]]
+ [[FTIHCommandFactory]]
+ [[FTIHNetWork]]


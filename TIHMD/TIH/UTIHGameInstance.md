## 내용
+ [[FTIHStation]] 초기화 및 인스턴스 [[Life Cycle]] 관리
+ [[FTIHStation]] 못찾을때 직접 사용할용도 및 언리얼 엔진 라이프 사이클에 맞춰진것

수정일 : 24-01-15 03:54
Template : [[02LifeCycleTemplate]]
# Name : UTIHGameInstance
## Tags

## Features
+ 내부에 [[FTIHStation]] 을 초기화 하고 가지고 있음.
+ 작동을 위해서는 가장 먼저 호출되는 gameinstance 이며 여기에서 정의된것이 [[FTIHStation]] 보다 먼저 실행되기때문에 먼저 호출해야하는게 있다면 여기서 재정의를 해주면 된다.
## Element
+ [[FTIHStation]]


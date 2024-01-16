수정일 : 24-01-15 04:47
Template : [[02LifeCycleTemplate]]
# Name : TTIHCommandFunctorWrapper
## Tags
#class #template #wrapper

## Features
+ [TFunction](https://docs.unrealengine.com/5.3/en-US/API/Runtime/Core/GenericPlatform/TFunction/) 를 감싸고 관련되어진 [[FTIHManagedObjectBase]] 의 인덱스를 가지고 있는 클래스
+ [[FTIHCommandFunctorHeader]] 에 연결되어진 인덱스가 있음.
+ 함수가 유효한지 확인하는 함수를 가짐
+ 컨텐츠함수를 들고오는 함수를 가짐
+ #pattern-type-erasure 가 아니기때문에 지정해준것만 들고와야함
## Element
+ [[FTIHCommandFunctorHeader]]
+ [TFunction](https://docs.unrealengine.com/5.3/en-US/API/Runtime/Core/GenericPlatform/TFunction/) 배열


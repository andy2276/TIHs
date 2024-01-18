수정일 : 24-01-17 17:24
Template : [[02LifeCycleTemplate]]
# Name : GenerateManagedObjectByActor
## Tags

## Features
+ 이게 하는 역할은 진입점의 역할만 한다.
+ 진입을 했을때 해당 액터의 태그를 받아서 처리 하기도 하지만 기본 디폴트는 태그를 받기보다는 루트 컴포넌트를 찾는게 먼저이다.
	+ 만약 루트컴포넌트가 없다면 해당 녀석은 System 으로써 확정을 받는다.
## Pseudo
```cpp:GenerateManagedObjectByActor
AActor* actor;
UClass* whatIsThisCls = actor::staticClass();
CheckManagedObjectPool()

USceneComponent* rootComponent = actor.GetRootComponent();
if(rootComponent != nullptr)
{

}
else
{
	
}
```



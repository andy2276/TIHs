수정일 : 24-01-15 05:00
Template : [[02LifeCycleTemplate]]
# Name : FTIHManagedObjectBase
## Tags
#pattern-composite

## Features
+ [[FTIHManagedObjectHeader]] 에 모든 정보를 넣어놓는다.
+ [[FTIHState]] 에서 상태를 관리한다.
+ short 형의 부모인덱스를 가지는데, 해당 인덱스는 [[FTIHManagedObjectPool]] 에 있는 인덱스를 사용한다.
+ short 형의 self 인덱스를 가지는데 해당 인덱스는 id 처럼 사용된다.
	+ 순서를 되도록 지키기는 하지만 이게 무조건 지켜야하는 요소로 되지 않느다.
	+ 우선순위는 같은 요소묶기가 먼저고, 그다음이 번호의 순서
		+ 처음에는 번호의 순서대로 만들어진다.
+ 자신의 형제들에 대한 내용을 인덱스로 넣어놓는다. 형제들은 연관된 인덱스 배열로써 형제의 타입을 읽는 방식에 대한 정보도 들어가있다.
+ 자식에 대한 인덱스 정보도 들어가있다.
+ 참고로 해당 구조는 #pattern-composite 로 되어있는데, 해당 정보가 [[TTIHManagedObject]] 의 기본 인터페이스처럼 사용이된다.
+ 참고로 해당 클래스는 직접적으로 사용되기 보다는 공통의 인터페이스로 사용이 된다. 
	+ 실질적으로 자료를 담고있는 것은 해당 클래스를 상속받은 [[TTIHManagedObject]] 이다
+ [[FTIHManagedObjectComposite]] 를 가지고 있는데 [[FTIHManagedObjectBase]] 는 그저 상위에서 클래스에 대한 값을 들고있고 액터를 연결해주는 역할을 할뿐 실질적으로는 [[FTIHManagedObjectComposite]] 안에 명령이 있다고 생각하고 작동을 해야한다
## Element
+ 


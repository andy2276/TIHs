수정일 : 24-01-15 03:58
Template : [[02LifeCycleTemplate]]
# Name : FTIHManagedObjectPool
## Tags

## Features
+ 오로지 언리얼 오브젝트의 매니징을 위한 클래스의 풀링이기 때문에 고려할사항은 아래와 같다
	+ 그리 많은 데이터를 보관하지 않는다.
	+ 포인터를 저장하는 용도이다
	+ 해당 정보를 토대로 오브젝트를 구성할 수도 있어야한다.
	+ 그러기 위한 기초 정보 설정이 필요하다.
+ [[FTIHManagedObjectBase]] 의 상태를 보고 오브젝트 풀링하는 용도로 사용이 될거임.
	+ 그런데 기능의 핵심인 만큼 성능을 위해 저장해야하는 정보들이 있다.
		+ class 해쉬 인데, 이걸 다른 클라에서도 동일하게 가질거라는 희망을 가져서는 안된다. 그래서 동일하게 발생하는 클래스 이름을 가지고 해쉬 값을 발생시킬것임.
		+ 
+ 그래서 생각한건데 [UStaticMesh](https://docs.unrealengine.com/5.3/en-US/API/Runtime/Engine/Engine/UStaticMesh/) 의 배열도 가지면 좋을까 생각해봤는데 역할구분상 그건 [[combine-ShaderBoards]] 에 주는게 맞는거 같음.
	+ 그중에서 path 에 넣어서 관리하는게 좋을거같음.
+ 순환을 시키는게 핵심인데 오브젝트의 상태도 관리해야할거같음
## Element
+ [[FTIHManagedObjectBase]] 포인터 배열
+ 빠르게 연결해야할 것들은 인덱스로 가질거같다.


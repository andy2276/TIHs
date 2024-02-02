[링크](https://docs.unrealengine.com/5.3/en-US/skeletons-in-unreal-engine/)
## 개요
언리얼엔진에서 스켈레톤이란 본들 그리고 애니메이션 데이터를 관리하는 곳이다. 그리고  본은 정점들에 영향을 주는 컨트롤 포인트이다.
본들의 계층구조를 스켈레톤이라한다. 참고로 본은 joint 라고 부르기도한다. 이건 [[skeletal mesh]] 안에 있는 본들의 계층구조이다. 
언리얼 엔진에서 스켈레톤은 애니메이션 데이터와 전반적인 골격계층 구조, [[animation sequences]]를 저장하고 연결하는데 사용된다

## 본의 종류
![[Pasted image 20240202215735.png]]
일반적인 본을 표현할때 해당 이미지를 사용한다. [[skeletal mesh]] 안에 있는 정점들에 영향을 주는 본이다
![[Pasted image 20240202215743.png]]
지금은 정점에 영향을 끼치지 않는 본일때 해당 이미지를 사용한다. 보통 소품을 장착하거나 하는 보조방식으로 사용되면서 애니메이션도 가능한 본이다.
![[Pasted image 20240202215747.png]]
[[skeletal mesh socket]] 이다. 뼈에대한 오프셋 부착 지점이다
![[Pasted image 20240202215751.png]]
[[virtual bone]] 이다.  일반적으로 다른본의 변환을 따르지만 다른 공간에 있는 bone 인것이다. 그래서 원치않는 관절의 움직임을 잠그는데 사용되기도 한다.
![[Pasted image 20240202215755.png]]
스켈레톤에는 존재하지만 지금 [[skeletal mesh]] 에는 사용되지 안흔ㄴ 본이다. 스켈레톤을 병합했을때 생성될 수 있다.

## sharing skeletone

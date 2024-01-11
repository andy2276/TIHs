#pragma once

#include "CoreMinimal.h"

class FTIHHouseNode;
/*!
*	@brief 레이어이다. 노드들을 가지는 컨테이너이며, 물체가 배치되어야하는 영역을 추상화한 클래스
*	@detail
*/
class TIHHOUSINGPAK_API FTIHHouseNodeComposite
{
public:
	FTIHHouseNodeComposite() {};

	virtual ~FTIHHouseNodeComposite();
	/*!
	*	@brief 일단은 대충 추가하는걸로 만들자. 나중에 수정
	*	@detail
	*/
	template<typename TIHTemplateType>
	DWORD AddBuildNodeByPointer(TIHTemplateType* newNode);


	std::shared_ptr<FTIHHouseNode>  operator[](uint32 index)
	{
		if (index < mBuildNodeChilds.size())
		{
			return mBuildNodeChilds[index];
		}
		return nullptr;
	}

private:
protected:
	/*!
	*	@brief node 로 부터 상대적인 중점위치
	*	@detail
	*/
	FTransform mReleativeTransform;

private:
	FTIHHouseNode* mOwnerNode;
	std::vector<std::shared_ptr<FTIHHouseNode>> mBuildNodeChilds;

	//	batch orient
	//	relative transform	//	원점에서 부터 해당 얼마나 떨어져 있는가와 

};
#pragma region TemplateFuncImplement
template<typename TIHTemplateType>
DWORD FTIHHouseNodeComposite::AddBuildNodeByPointer(TIHTemplateType* newNode)
{
	mBuildNodeChilds.push_back(std::make_shared<TIHTemplateType>(newNode));
	return 0;
}

#pragma endregion


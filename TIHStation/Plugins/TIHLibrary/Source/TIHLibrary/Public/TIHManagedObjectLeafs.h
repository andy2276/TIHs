#pragma once
#include "CoreMinimal.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.h"

class FTIHMngObjLeafMovement : public TTIManagedObjectActorLeaf<USceneComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:
	void SetWorldLocation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetWorldLocation(value);
		
	}
	void SetWorldRotation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetWorldRotation(value.ToOrientationQuat());
	}
	void SetWorldTransform(const FTransform& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetWorldTransform(value);
	}
	void SetRelativeLocation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetRelativeLocation(value);
	}
	void SetRelativeRotation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetRelativeRotation(value.ToOrientationQuat());
	}
	void SetRelativeTransform(const FTransform& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->SetRelativeTransform(value);
	}
	void SetAddLocalOffset(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddLocalOffset(value);
	}
	void SetAddLocalRotation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddLocalRotation(value.ToOrientationQuat());
	}
	void SetAddLocalRotation(const FTransform& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddLocalTransform(value);
	}
	void SetAddRelativeLocation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddRelativeLocation(value);
	}
	void SetAddRelativeRotation(const FVector& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddRelativeRotation(value.ToOrientationQuat());
	}
	//mCastedComponent->AddLocalTransform(value)
	void SetAddLocalTransform(const FTransform& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddLocalTransform(value);
	}
	void SetAddWorldTransform(const FTransform& value)
	{
		check(mUEObjectView != nullptr);
		mUEObjectView->AddWorldTransform(value);
	}
};

class FTIHMngObjLeafPretty : public TTIManagedObjectActorLeaf<UMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:

	void SetMaterial(int32 index,UMaterialInterface* materialInterface)
	{
		mUEObjectView->SetMaterial(index, materialInterface);
	}
};


class FTIHMngObjLeafStMesh : public TTIManagedObjectActorLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafStMesh)
public:
	void SetStMesh(UStaticMesh* stMesh)
	{
		mUEObjectView->SetStaticMesh(stMesh);
	}
};

/*
	to-do
	skeletonMeshComponent 에 필요한 기능을 여기에서 만들어야한다.
*/
class FTIHMngObjLeafSkMesh : public TTIManagedObjectActorLeaf<USkeletalMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafSkMesh)
public:
	void SetSkMesh(USkeletalMesh* skMesh)
	{
		mUEObjectView->SetSkeletalMesh(skMesh);
	}

};

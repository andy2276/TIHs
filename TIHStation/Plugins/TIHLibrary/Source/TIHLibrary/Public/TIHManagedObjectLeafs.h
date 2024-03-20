#pragma once
#include "CoreMinimal.h"
#include "TIHStationCoreDefines.h"
#include "TIHManagedObjects.h"

class FTIHMngObjLeafMovement : public TTIManagedObjectLeaf<USceneComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:
	void SetWorldLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldLocation(value);
	}
	void SetWorldRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldRotation(value.ToOrientationQuat());
	}
	void SetWorldTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetWorldTransform(value);
	}
	void SetRelativeLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeLocation(value);
	}
	void SetRelativeRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeRotation(value.ToOrientationQuat());
	}
	void SetRelativeTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->SetRelativeTransform(value);
	}
	void SetAddLocalOffset(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalOffset(value);
	}
	void SetAddLocalRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalRotation(value.ToOrientationQuat());
	}
	void SetAddLocalRotation(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalTransform(value);
	}
	void SetAddRelativeLocation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddRelativeLocation(value);
	}
	void SetAddRelativeRotation(const FVector& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddRelativeRotation(value.ToOrientationQuat());
	}
	//mCastedComponent->AddLocalTransform(value)
	void SetAddLocalTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddLocalTransform(value);
	}
	void SetAddWorldTransform(const FTransform& value)
	{
		check(mCastedComponent != nullptr);
		mCastedComponent->AddWorldTransform(value);
	}
};

class FTIHMngObjLeafPretty : public TTIManagedObjectLeaf<UMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafMovement)
public:

	void SetMaterial(int32 index,UMaterialInterface* materialInterface)
	{
		mCastedComponent->SetMaterial(index, materialInterface);
	}
};


class FTIHMngObjLeafStMesh : public TTIManagedObjectLeaf<UStaticMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafStMesh)
public:
	void SetStMesh(UStaticMesh* stMesh)
	{
		mCastedComponent->SetStaticMesh(stMesh);
	}
};

/*
	to-do
	skeletonMeshComponent 에 필요한 기능을 여기에서 만들어야한다.
*/
class FTIHMngObjLeafSkMesh : public TTIManagedObjectLeaf<USkeletalMeshComponent>
{
	TIHMACRO_MANAGED_LEAF_FEATURES(FTIHMngObjLeafSkMesh)
public:
	void SetSkMesh(USkeletalMesh* skMesh)
	{
		mCastedComponent->SetSkeletalMesh(skMesh);
	}

};

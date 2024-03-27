#include "TIHStationCoreDefines.h"
#include "TIHStationCore.h"
#include "TIHCommands.h"
#include "TIHCommandCore.h"

const uint32 TIHYear = 3784320000;

FTIHStationBase::FTIHStationBase()
	:
	mMngObjGenerateHelper(nullptr),
	mSettingHelper(nullptr),
	mCommandFactory(nullptr),
	mCommander(nullptr),
	mPoolCenter(nullptr),
	mPathCenter(nullptr)
{
}

FTIHStationBase::~FTIHStationBase()
{
	SafeDeletePtr(mMngObjGenerateHelper);
	SafeDeletePtr(mSettingHelper);
	SafeDeletePtr(mCommandFactory);
	SafeDeletePtr(mCommander);
	SafeDeletePtr(mPoolCenter);
	SafeDeletePtr(mPathCenter);
}

void FTIHStationBase::SetCommandFactory(FTIHCommandFactory* cmdFactory)
{
	SafeDeletePtr(mCommandFactory);
	mCommandFactory = cmdFactory;
}

FTIHPathCenter& FTIHPathCenter::GetSingle()
{
	static FTIHPathCenter& pathCenter = TIHSTATION.GetPathCenter();
	return pathCenter;
}

void FTIHPathCenter::InitiateThis()
{
	mUrlArray.Reserve(mPathCenterConfig.UrlArrayCapacityCount);
	mPathArray.Reserve(mPathCenterConfig.PathArrayCapacityCount);

}

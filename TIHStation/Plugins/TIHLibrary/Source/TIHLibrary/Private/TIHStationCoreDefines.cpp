#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"
#include "TIHStationCore.h"
#include "TIHCommandCore.h"



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

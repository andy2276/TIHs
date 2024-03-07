#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"
#include "TIHStationCore.h"
#include "TIHCommandCore.h"

namespace TIHNameSpaceCommands
{
	namespace HeaderProtocol
	{
		const int8 UnknownType = 0;
		const int8 ManagedObjectType = 1;
		const int8 MeshLoadType = 2;
		const int8 DefaultMaxCount = MeshLoadType + 1;
	};
	namespace OptionManagedObject
	{
		const int8 UnkownType = 0;
		const int8 PoolCenterSetConfigure = 1;
		const int8 PoolReserve = 2;
		const int8 PrepareDatas = 3;
		const int8 OnGenerate = 4;
		const int8 DefaultMaxCount = OnGenerate + 1;
	}
	namespace OptionMeshLoad
	{
		const int8 UnkownType = 0;
		const int8 MeshPoolSetConfigure = UnkownType + 1;
		const int8 StMeshPathListLoadByServer = MeshPoolSetConfigure+ 1;
		const int8 StMeshPathListLoadByConfigObject = StMeshPathListLoadByServer + 1;
		const int8 StMeshPathListLoadBySpecial = StMeshPathListLoadByConfigObject + 1;
		const int8 StMeshesLoadBySlidingWindow = StMeshPathListLoadBySpecial +1;
		const int8 StMeshesLoadByList = StMeshesLoadBySlidingWindow +1;
		const int8 StMeshesLoadAll = StMeshesLoadByList + 1;
		const int8 StMeshQuery = StMeshesLoadAll +1;
		const int8 StMeshModifyMeshes = StMeshQuery + 1;
		const int8 DefaultMaxCount = StMeshModifyMeshes + 1;
	}
	namespace MethodProcessingProtocol
	{
		const int8 UnknownType = 0;
		const int8 UseStrategy = 1;
		const int8 UseDelegate = 2;
		const int8 UseMultiThread = 3;
		const int8 UseCommandSelfFunction = 4;
		const int8 DefaultMaxCount = UseCommandSelfFunction + 1;
	}
	namespace MethodProgessionProtocol
	{
		const int8 UnkownType = 0;
		const int8 RunContinue = UnkownType +1;
		const int8 RunTickable = RunContinue +1;
		const int8 RunRepeate = RunTickable +1;
		const int8 RunAsyncDontCare = RunRepeate + 1;
		const int8 DefaultMaxCount = RunAsyncDontCare + 1;
	}
	namespace MethodResultBitMask
	{
		const int8 CallingErrorFunction = -2;
		const int8 OnAsyncTask = -1;
		const int8 ResetZero = 0;
		const int8 OnLoop = 1 << 0;
		const int8 OnNext = 1 << 1;
		const int8 OnPopFront = 1 << 2;
		const int8 OnPopBack = 1 << 3;
		const int8 CallingCompleteFunction = 1<<4;
	}
};


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

#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"
#include "TIHStationCore.h"
#include "TIHCommandCore.h"

namespace TIHNameSpaceCommands
{
	namespace HeaderProtocol
	{
		const signed char UnknownType = 0;
		const signed char ManagedObjectType = 1;
		const signed char MeshLoadType = 2;
		const signed char DefaultMaxCount = MeshLoadType + 1;
	};
	namespace OptionManagedObject
	{
		const signed char UnkownType = 0;
		const signed char PoolCenterSetConfigure = 1;
		const signed char PoolReserve = 2;
		const signed char PrepareDatas = 3;
		const signed char OnGenerate = 4;
		const signed char DefaultMaxCount = OnGenerate + 1;
	}
	namespace OptionMeshLoad
	{
		const signed char UnkownType = 0;
		const signed char MeshPoolSetConfigure = UnkownType + 1;
		const signed char StMeshPathListLoadByServer = MeshPoolSetConfigure+ 1;
		const signed char StMeshPathListLoadByConfigObject = StMeshPathListLoadByServer + 1;
		const signed char StMeshPathListLoadBySpecial = StMeshPathListLoadByConfigObject + 1;
		const signed char StMeshesLoadBySlidingWindow = StMeshPathListLoadBySpecial +1;
		const signed char StMeshesLoadByList = StMeshesLoadBySlidingWindow +1;
		const signed char StMeshesLoadAll = StMeshesLoadByList + 1;
		const signed char StMeshQuery = StMeshesLoadAll +1;
		const signed char StMeshModifyMeshes = StMeshQuery + 1;
		const signed char DefaultMaxCount = StMeshModifyMeshes + 1;
	}
	namespace MethodProcessingProtocol
	{
		const signed char UnknownType = 0;
		const signed char UseStrategy = 1;
		const signed char UseDelegate = 2;
		const signed char UseMultiThread = 3;
		const signed char UseCommandSelfFunction = 4;
		const signed char DefaultMaxCount = UseCommandSelfFunction + 1;
	}
	namespace MethodProgessionProtocol
	{
		const signed char UnkownType = 0;
		const signed char RunContinue = UnkownType +1;
		const signed char RunTickable = RunContinue +1;
		const signed char RunRepeate = RunTickable +1;
		const signed char RunAsyncDontCare = RunRepeate + 1;
		const signed char DefaultMaxCount = RunAsyncDontCare + 1;
	}
	namespace MethodResultBitMask
	{
		const signed char CallingErrorFunction = -2;
		const signed char OnAsyncTask = -1;
		const signed char ResetZero = 0;
		const signed char OnLoop = 1 << 0;
		const signed char OnNext = 1 << 1;
		const signed char OnPopFront = 1 << 2;
		const signed char OnPopBack = 1 << 3;
		const signed char CallingCompleteFunction = 1<<4;
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

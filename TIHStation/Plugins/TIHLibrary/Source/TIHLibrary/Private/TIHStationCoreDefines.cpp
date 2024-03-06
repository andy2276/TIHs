#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"

namespace TIHNameSpaceCommands
{
	namespace ManagedObjectType
	{
		const int8 UnknownType = 0;
		const int8 ManagedObjectType = 1;
		const int8 MeshLoadType = 2;
		const int8 MaxCount = MeshLoadType + 1;
	};
	namespace OptionManagedObject
	{
		const int8 UnkownType = 0;
		const int8 PoolCenterSetConfigure = 1;
		const int8 PoolReserve = 2;
		const int8 PrepareDatas = 3;
		const int8 OnGenerate = 4;
		const int8 MaxCount = OnGenerate + 1;
	}
	namespace OptionMeshLoad
	{
		const int8 UnkownType = 0;
		const int8 MeshPoolSetConfigure = 1;
		const int8 StMeshPathListLoadByServer = 2;
		const int8 StMeshPathListLoadByConfigObject = 3;
		const int8 StMeshPathListLoadBySpecial = 4;
		const int8 StMeshesLoadBySlidingWindow = 5;
		const int8 StMeshesLoadByList = 6;
		const int8 StMeshesLoadAll = 7;
		const int8 StMeshQuery = 8;
		const int8 StMeshModifyMeshes = 9;
		const int8 MaxCount = StMeshModifyMeshes + 1;
	}
};


void FTIHStationBase::SetCommandFactory(FTIHCommandFactory* cmdFactory)
{
	SafeDeletePtr(mCommandFactory);
	mCommandFactory = cmdFactory;
}

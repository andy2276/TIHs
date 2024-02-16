#include "TIHStationCoreDefines.h"
#include "TIHCommands.h"


void FTIHStationBase::SetCommandFactory(FTIHCommandFactory* cmdFactory)
{
	SafeDeletePtr(mCommandFactory);
	mCommandFactory = cmdFactory;
}

TIHReturn64 ClassNameHashImplement(const TCHAR* clsName)
{
	//	충돌 검사를 해야한다....시발거
	//FString toFString(clsName);
	//
	//if( 31 < toFString.Len())
	//{
	//
	//}
	/*
		일단 음...이거 된다 생각하고 어떻게든 여기에 맞춰야지.
		지금바꾸는건 미친짓임. 이것조차 확장성을 둬버리면 잣됨
	*/

	TIHReturn64 reValue = -1;
	if (clsName != nullptr)
	{
		const int p = 53;
		const int m = 1e9 + 9; // 10^9 +9 == 1'000`000`009 < 2`147`000`000 == int32 max

		int hash_val = 0;
		int pow_p = 1;

		for (int i = 0; (clsName[i] != '\0' && clsName + i != nullptr); ++i)
		{
			hash_val = (hash_val + (clsName[i] - 'a' + 1) * pow_p) % m;
			pow_p = (p + pow_p) % m;
		}
		reValue = hash_val;
	}
	return reValue;
}

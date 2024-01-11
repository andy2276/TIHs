// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FTIHHouseDataList
{
public:
	FTIHHouseDataList() {};
	virtual ~FTIHHouseDataList() {};
protected:

private:

};


class FTIHHouseStuffList : public FTIHHouseDataList
{
public:
	FTIHHouseStuffList() {};
	virtual ~FTIHHouseStuffList() {};
protected:

private:

protected:
	
private:

};

class FTIHHouseNodeList : public FTIHHouseDataList
{
public:
	FTIHHouseNodeList() {};
	virtual ~FTIHHouseNodeList() {};
protected:

private:

protected:

private:

};
class FTIHHouseNodeStrategy
{


};
class FTIHHouseNodeBuilder
{

};


/**
 * 
 */
class TIHHOUSINGPAK_API FTIHHouseStuffProcessor final
{
public:
	FTIHHouseStuffProcessor();
	~FTIHHouseStuffProcessor();

private:
	/*!
	*	@brief 왜냐하면 다른곳에서도 써야하거든.
	*	@detail 
	*/
	TSharedPtr< FTIHHouseNodeList> mUserNodeList;
	TSharedPtr< FTIHHouseStuffList> mUserStuffList;

};

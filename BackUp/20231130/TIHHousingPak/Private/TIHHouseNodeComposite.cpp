// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNodeComposite.h"
#include "TIHHouseNode.h"

FTIHHouseNodeComposite::~FTIHHouseNodeComposite()
{
}

INT64 FTIHHouseNodeComposite::AddNodeByPtr(UTIHHouseNode* ptr)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::AddNodeBySmartPtr(TSharedPtr<UTIHHouseNode> smartPtr)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::AddNodeByNewPtr()
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::InsertNodeByPtrWithIndex(UTIHHouseNode* ptr, int32 index)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::InsertNodeByNewPrt(int32 index)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

UTIHHouseNode* FTIHHouseNodeComposite::SearchNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

TArray<UTIHHouseNode*> FTIHHouseNodeComposite::SearchNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

TSharedPtr<UTIHHouseNode> FTIHHouseNodeComposite::SearchSmartNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

TArray<TSharedPtr<UTIHHouseNode>> FTIHHouseNodeComposite::SearchSmartNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::RemoveNodeByTagConnectFirst(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::RemoveNodeByTagConnectAll(FName tag)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}

INT64 FTIHHouseNodeComposite::RemoveNodeByIndex(int32 index)
{
	TIHDEBUG_LOG("log");
	throw std::logic_error("The method or operation is not implemented.");
}


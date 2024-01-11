// Fill out your copyright notice in the Description page of Project Settings.


#include "TIHHouseNode.h"

UTIHHouseNode::UTIHHouseNode()
{
	//mFilePathData = MakeUnique<FTIHFilePathData>(new FTIHFilePathData);
	
}



INT64 UTIHHouseNode::AcceptVisitor(FTIHHouseNodeVisitor* visitor)
{
	TIHDEBUG_LOG("log");
	INT64 reValue = visitor->VisitConcreateNode(this);


	return reValue;
}

INT64 UTIHHouseNode::Test()
{
	TIHDEBUG_LOG("log");
	INT64 reValue = 0;



	return reValue;
}

void UTIHHouseNode::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

}

INT64 FTIHHouseNodeVisitor::VisitConcreateNode(UTIHHouseNode* node)
{
	INT64 reValue = 0;

	return reValue;
}

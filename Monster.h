#pragma once
#include "Actor.h"


class AMonster : public AActor
{

public:
	AMonster(int InX = 0, int InY = 0, char InMesh = 'M');
	virtual ~AMonster();


	virtual void BeginPlay() override;

	virtual void Tick() override;

	virtual void Render() override;
};


//--내가 한 버전-----
//class AMonster : public AActor
//{
//
//public:
//	AMonster(int InX = 0, int InY = 0,char InMesh = 'M');
//	virtual ~AMonster();
//
//
//	virtual void BeginPlay() override;
//
//	virtual void Tick() override;
//
//	virtual void Render() override;
//};


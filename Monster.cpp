#include "Monster.h"
#include <iostream>



//과연 몬스터도 시작과 그리기가 필요할까?
AMonster::AMonster(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
}

AMonster::~AMonster()
{
}

void AMonster::BeginPlay()
{
	__super::BeginPlay();
}

void AMonster::Tick()
{
	__super::Tick();
}

void AMonster::Render()
{
	__super::Render();
}

#pragma once

class AActor
{
public:
	AActor(int InX = 0, int InY = 0, char InMesh = ' ');
	virtual ~AActor();

	virtual void BeginPlay();

	//override
	virtual void Tick();

	virtual void Render();

//엑터 생성하려면 매쉬,위치가 필요하 
protected:
	int X;
	int Y;
	char Mesh;
};

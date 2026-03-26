#include "World.h"

#include <fstream>

#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Wall.h"
#include "Floor.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}

	Actors.clear();
}
void UWorld::Load(std::string MapName)
{
	std::ifstream MapStream(MapName);

	int Y = 0;
	while (!MapStream.eof())
	{
		std::string Line;
		std::getline(MapStream, Line);
		for (int X = 0; X < Line.length(); ++X)
		{
			if (Line[X] == '*')
			{
				SpawnActor<AWall>()->SetActorLocation(X, Y);
			}
			else if (Line[X] == ' ')
			{
				SpawnActor<AFloor>()->SetActorLocation(X, Y);
			}
			else if (Line[X] == 'P')
			{
				SpawnActor<APlayer>()->SetActorLocation(X, Y);
			}
			else if (Line[X] == 'M')
			{
				SpawnActor<AMonster>()->SetActorLocation(X, Y);
			}
			else if (Line[X] == 'G')
			{
				SpawnActor<AGoal>()->SetActorLocation(X, Y);
			}
		}
		Y++;
	}
}

//----내가 한거----
//void UWorld::Load(std::string MapName)
//{
//	AActor* NewActor = SpawnActor < APlayer>();
//	AActor* SecondActor = SpawnMonster <AMonster>(); //몬스터 스폰
//	AActor* ThiedActor = SpawnWall<AWall>(); //벽 스폰
//
//}
//-------------
void UWorld::Tick()
{
	//모든 엑터에 틱을 실행해라

	for (auto Actor : Actors)
	{
		Actor->Tick();
	}

}

void UWorld::Render()
{
	//모든 엑터에 그려라
	for (auto Actor : Actors)
	{
		Actor->Render();
	
	}


}


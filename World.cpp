#include "World.h"
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Wall.h"

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
	AActor* NewActor = SpawnActor < APlayer>();
	AActor* SecondActor = SpawnMonster <AMonster>(); //몬스터 스폰
	AActor* ThiedActor = SpawnWall<AWall>(); //벽 스폰

}

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


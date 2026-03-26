#include "World.h"
#include "Actor.h"
#include "Player.h"

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


#pragma once
#include <vector>
#include <string>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	template<typename T>
	AActor* SpawnActor()
	{
		AActor* NewActor = new T;
		Actors.push_back(NewActor);

		return NewActor;
	}

	//엔진 시작하자마자 로딩을 할거다.
	void Load(std::string MapName); //맵 이름을 로딩한다. 
	//파일 읽어서 엑터 생성
	

	


	inline std::vector<class AActor*>& GetActors()
	{
		return Actors;
	}

	void Tick();

	void Render();

protected:

	std::vector<class AActor*> Actors;

};
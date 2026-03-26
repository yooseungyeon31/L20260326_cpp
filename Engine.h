#pragma once
#include <vector>
class AActor;
class UWorld;

class UEngine
{

	
public:
	UEngine();
	~UEngine();

	void Init();
	void Term();

	void Run();

	inline UWorld* GetWorld()
	{
		return World;
	}

	//template<typename T> 
	//void SpawnActor(const AActor* NewActor);//새로운 엑터를 스폰해줌 

	//std::vector<AActor*>  GetAllActorOfTag(); //엑터중에 특정 그걸 가져와라
	////배열로 가져올거기 때문에 vector로.. 



protected:
	void Input();
	void Tick();
	void Render();

	//std::vector<AActor*> Actors;
	class UWorld* World;

	int bIsRunning : 1; //int 형 중에 1바이트만 쓰겠다. 

};

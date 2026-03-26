
#include "Engine.h"
#include <conio.h>
#include "Actor.h"
#include "World.h"

//밖에서 선언. 예외
//초기화는 밖에서 해준다.
UEngine* UEngine::Instance = nullptr;

int UEngine::KeyCode = 0;

UEngine::UEngine()
{
	Init();

	
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Init()
{
	bIsRunning = true;

	World = new UWorld();
}

void UEngine::Term()
{
	delete World;
	World = nullptr;
}

void UEngine::Run()
{

	while (bIsRunning)
	{
		//엔진시작되면 하는거 3가지. 입력, 실행, 그리기
		Input();
		Tick();
		Render();

	}
}


void UEngine::Input()
{
	
	KeyCode = _getch();
}

void UEngine::Tick()
{
	World->Tick(); //월드에서 틱 해주세요
}

void UEngine::Render()
{
	World->Render(); //월드에서 그리기 해주세요.
}




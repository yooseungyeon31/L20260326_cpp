#include <iostream>
#include "Engine.h"
#include "World.h"


#include "Actor.h"
#include "Player.h"
#include "Monster.h"

#include <fstream> //파일 불러오기 

using namespace std;

int main()
{




	//엔진 킨다.
	UEngine* MyEngine = new UEngine();
	//엔진 로딩
	MyEngine->GetWorld()->Load("level01.umap");
	//엔진 실행
	MyEngine->Run();
	//엔진 끌 때 삭제
	delete MyEngine;

	return 0;
}



//std::string  s1 = "Hello";
//std::string  s2("World");

//std::string s3 = s1 + " " + s2;

//cout << s3 << endl;

//String S1("Hello");


//char Message[1024] = "Hello World";

//String S1 = "Hello";
//String S2 = "World";
//
////이 더하기랑 operator쓴게 똑같은거임.
////String S3 = S1 + " " + S2;
////String S2 = S1;
//String S3(S1.operator+(" ").operator+(S2));
//
//
//cout << S3.GetPointer() << endl;

//cout << (S1 == S2) << endl;

///---------

	//AActor* Monster = new APlayer();
	//AActor* MyPlayer = new APlayer();

	//APlayer* Player = dynamic_cast<APlayer*>(MyPlayer);

	//if (Player)
	//{
	//	Player->ApplyDamage(Monster);
	//}

	//delete MyPlayer;
	//return 0;
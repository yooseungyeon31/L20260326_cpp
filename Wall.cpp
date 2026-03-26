#include "Wall.h"
#include <iostream>
AWall::AWall(char InMesh)
{
	Mesh = InMesh;

	
}

AWall::~AWall()
{
}

int Map[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}


};

//void Clear()
//{
//	for (int Y = 0; Y < 10; Y++)
//	{
//		Gotoxy(1, Y);
//		std::cout << "            ";
//	}
//}
//


//벽 그리기
void AWall::Render()
{
	for (int Y = 0; Y < 10; Y++)
	{

		for (int X = 0; X < 10; X++)
		{
			if (Map[Y][X] == 1)
			{
				std::cout << "*";
			}
			else if (Map[Y][X] == 0)
			{
				std::cout << " ";
			}

		}
		std::cout << std::endl;
	}

}
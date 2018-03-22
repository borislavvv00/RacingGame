#include <iostream>
#include <time.h>
#include "ClassCar.h"
#include "ClassRout.h"
#include "EnumDirection.h"
#include "CarFunctions.h"
#include "RoutFunctions.h"
#include "DescribeDirection.h"

using namespace std;

void clearscreen()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

int	main()
{
	srand(time(0));
	Route road;
	int a;
	while (true)
	{
		GetKeyboardKeys();
		DiscribePlayerDirectionProperties();
		DiscribeEnemyDirectionProperties();
		enemyCar.RespawningEnemyCar();
		road.TouchingTheWall();
		road.BuildingRout();
		road.Rules();
		cout << &a << endl;
		//system("cls");
		Sleep(100);
		clearscreen();
	}
	
	return 0;
}
#pragma once
#ifndef CarFunctions
#define CarFunctions
#include <stdlib.h>
#include "ClassCar.h"

using namespace std;

void Car::BuildCar(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	cout << sign;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void Car::CarGetCoordinates()
{
	x[1] = x[0] + 1;
	x[2] = x[0] + 1;
	x[3] = x[0] + 1;
	x[4] = x[0] + 2;
	x[5] = x[0] + 3;
	x[6] = x[0] + 4;
	x[7] = x[0] + 4;
	x[8] = x[0] + 4;

	y[1] = y[0] - 1;
	y[2] = y[0] + 1;
	y[3] = y[0];
	y[4] = y[0];
	y[5] = y[0];
	y[6] = y[0] - 1;
	y[7] = y[0];
	y[8] = y[0] + 1;
}

void EnemyCar::SpawningCar()
{
	y[0] = rand() % 8 + 2;

	if (y[0] != 2 || y[0] != 7)
	{
		int leftOrRight = rand() % 2; //chance 50% enemy car to be in rigth or left side of the route

		if (leftOrRight == 0)
		{
			y[0] = 3;
			CarGetCoordinates();
		}
		else
		{
			y[0] = 7;
			CarGetCoordinates();
		}
	}
}

void EnemyCar::RespawningCar()
{
	if (x[0] == 20)
	{
		x[0] = 2;
		score++;
		SpawningCar();
	}
}

#endif // !CarFunctions

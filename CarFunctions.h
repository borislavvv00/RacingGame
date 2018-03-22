#pragma once
#ifndef CarFunctions
#define CarFunctions
#include <iostream>
#include <stdlib.h>
#include "ClassCar.h"

using namespace std;

void Car::BuildingCarPart1()
{
	cout << " " << sign << " ";
}

void Car::BuildingCarPart2()
{
	cout << sign << sign << sign;
}

void Car::SpawningEnemyCar()
{
	enemyCarY = rand() % 7;

	if (enemyCarY != 0 || enemyCarY != 6)
	{
		int leftOrRight = rand() % 2; //chance 50% enemy car to be in rigth or left side of the route

		if (leftOrRight == 0)
		{
			enemyCarY = 1;
		}
		else
		{
			enemyCarY = 6;
		}
	}
}

void Car::RespawningEnemyCar()
{
	if (enemyCarX == 20)
	{
		SpawningEnemyCar();
		enemyCarX = 1;
		enemyCarX1 = 2;
		enemyCarX2 = 3;
		enemyCarX3 = 4;
		enemyCarX4 = 5;
	}
}

#endif // !CarFunctions

#pragma once
#ifndef RoadFunctions
#define RoadFunctions
#include "ClassRoad.h"
#include "ClassCar.h"

void Car::PlacingCar(int i, int j, int color)
{
	for (int n = 0; n < 9; n++)
	{
		if (i == x[n] && j == y[n])
		{
			BuildCar(color);
			isCarPrint = true;
		}
	}
}

void Road::BuildRoad()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			playerCar.PlacingCar(i, j, 10);
			enemyCar.PlacingCar(i, j, 12);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			if (j == 0)
			{
				cout << sign;
			}
			else if (isCarPrint == true)
			{
				isCarPrint = false;
				continue; //remove the surplus spaces
			}
			else if (j == width - 1)
			{
				cout << sign;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << "\n Score = " << score << endl;
}

void PlayerCar::TouchTheWall()
{
	for (int n = 0; n < 9; n++)
	{
		if (y[n] == 1)
		{
			playerCarDirection = Direction::RIGHT;
			playerCarDirection = Direction::STOP;
		}
		else if (y[n] == aRoad.width - 2)
		{
			playerCarDirection = Direction::LEFT;
			playerCarDirection = Direction::STOP;
		}
		else if (x[n] == aRoad.high - 1)
		{
			playerCarDirection = Direction::UP;
			playerCarDirection = Direction::STOP;
		}
	}
}

void PlayerCar::CarCrash()
{
	for (int n = 0; n < 9; n++)
	{
		for (int m = 0; m < 9; m++)
		{
			if (x[n] == enemyCar.x[m] && y[n] == enemyCar.y[m])
			{
				score = 0;
				x[0] = 16;
				y[0] = 7;
				CarGetCoordinates();
			}
		}
	}
}

#endif // !RoadFunctions

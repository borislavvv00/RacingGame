#pragma once
#ifndef RoutFunctions
#define RoutFunctions
#include <iostream>
#include <Windows.h>
#include "ClassRout.h"

using namespace std;

Car playerCar;
Car enemyCar;

void Route::PlacingCar(Car aCar, int i, int j, int x, int x1, int x2, int x3, int x4, int y,int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	if ((i == x || i == x2 || i == x3) && j == y)
	{
		aCar.BuildingCarPart1();
	}
	else if ((i == x1 || i == x4) && j == y)
	{
		aCar.BuildingCarPart2();
	}
}

void Route::BuildingRout()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			PlacingCar(playerCar, i, j, playerCarX, playerCarX1, playerCarX2, playerCarX3, playerCarX4, playerCarY,10);
			PlacingCar(enemyCar, i, j, enemyCarX, enemyCarX1, enemyCarX2, enemyCarX3, enemyCarX4, enemyCarY,12);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			if (j == 0)
			{
				cout << sign;
			}
			else if ((i == playerCarX || i == playerCarX1 || i == playerCarX2 || i == playerCarX3 || i == playerCarX4) && j > playerCarY && j < playerCarY + 4)
			{
				continue; //remove the surplus spaces
			}
			else if ((i == enemyCarX || i == enemyCarX1 || i == enemyCarX2 || i == enemyCarX3 || i == enemyCarX4) && j > enemyCarY && j < enemyCarY + 4)
			{
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
	cout << &score << endl;
}

void Route::TouchingTheWall()
{
	if (playerCarY == 0)
	{
		playerCarY = 1;
	}
	else if (playerCarY == width - 1)
	{
		playerCarY = width - 2;
	}
	else if (playerCarX4 == high)
	{
		playerCarX4 = high - 1;
		playerCarX3 = high - 2;
		playerCarX2 = high - 3;
		playerCarX1 = high - 4;
		playerCarX = high - 5;
	}
}

void Route::Rules()
{
	if ((playerCarX == enemyCarX4 || playerCarX == enemyCarX1 || playerCarX == enemyCarX2) && playerCarY >= enemyCarY && playerCarY <= enemyCarY + 3)
	{
		system("pause"); //when playr's car touch enemy's car
		score = 0;
	}
	else if ((playerCarX == enemyCarX3 || playerCarX == enemyCarX4 || playerCarX4 == enemyCarX) && playerCarY >= enemyCarY && playerCarY <= enemyCarY + 3)
	{
		system("pause"); //when playr's car touch enemy's car
		score = 0;
	}
	else if (enemyCarX==19)
	{
		score++; //increase score
	}
}

#endif // !RoutFunctions

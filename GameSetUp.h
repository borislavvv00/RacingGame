#pragma once
#ifndef GameSetUp
#define GameSetUp
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

bool isCarPrint;
int score = 0;

void clearscreen()
{
	COORD cursorPosition;
	cursorPosition.X = 0;
	cursorPosition.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}

enum class Direction
{
	DOWN, LEFT, RIGHT, UP, STOP
};

Direction playerCarDirection;
Direction enemyCarDirection;

#endif // !GameSetUp

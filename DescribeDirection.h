#pragma once
#ifndef DescribeDirection
#define DescribeDirectoin
#include <conio.h>
#include "EnumDirection.h"

PlayerDirection playrCarDirection;
EnemyDirection enemyCarDirection;

void GetKeyboardKeys()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			playrCarDirection = LEFT;
			break;
		case 'd':
			playrCarDirection = RIGHT;
			break;
		case 'w':
			playrCarDirection = UP;
			break;
		case 's':
			playrCarDirection = DOWN;
			break;
		}
	}
}

void DiscribePlayerDirectionProperties()
{
	switch (playrCarDirection)
	{
	case LEFT:
		playerCarY--;
		break;
	case RIGHT:
		playerCarY++;
		break;
	case UP:
		playerCarX--;
		playerCarX1--;
		playerCarX2--;
		playerCarX3--;
		playerCarX4--;
		break;
	case DOWN:
		playerCarX++;
		playerCarX1++;
		playerCarX2++;
		playerCarX3++;
		playerCarX4++;
		break;
	}
}

void DiscribeEnemyDirectionProperties()
{
	switch (enemyCarDirection)
	{
	case DOWNenemy:
		enemyCarX++;
		enemyCarX1++;
		enemyCarX2++;
		enemyCarX3++;
		enemyCarX4++;
		break;
	}
}

#endif // !DescribeDirection

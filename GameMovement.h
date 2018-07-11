#pragma once
#ifndef GameMovement
#define GameMovement
#include <conio.h>
#include "ClassCar.h"

void PlayerCar::GetKeyboardKeys()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			playerCarDirection = Direction::LEFT;
			break;
		case 'd':
			playerCarDirection = Direction::RIGHT;
			break;
		case 'w':
			playerCarDirection = Direction::UP;
			break;
		case 's':
			playerCarDirection = Direction::DOWN;
			break;
		}
	}
}

void Car::Movement(Direction &dir)
{
	switch (dir)
	{
	case Direction::LEFT:
		for (int i = 0; i < 9; i++)
		{
			y[i]--;
		}
		break;
	case Direction::RIGHT:
		for (int i = 0; i < 9; i++)
		{
			y[i]++;
		}
		break;
	case Direction::UP:
		for (int i = 0; i < 9; i++)
		{
			x[i]--;
		}
		break;
	case Direction::DOWN:
		for (int i = 0; i < 9; i++)
		{
			x[i]++;
		}
		break;
	}
}

#endif // !GameMovement

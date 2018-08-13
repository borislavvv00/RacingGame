#pragma once
#ifndef ClassCar
#define ClassCar
#include "GameSetUp.h"

class Car
{
protected:
	string sign;
	void BuildCar(int color);
	void CarGetCoordinates();
public:
	int y[9], x[9];
	void Movement(Direction &dir);
	void PlacingCar(int i, int j, int color);
};

class PlayerCar : public Car
{
private:
	bool isLeftAllow;
	bool isRigthAllow;
public:
	PlayerCar()
	{
		isLeftAllow = true;
		isRigthAllow = true;
		sign = "0";
		x[0] = 12;
		y[0] = 7;
		CarGetCoordinates();
	}
	void GetKeyboardKeys();
	void TouchTheWall();
	void CarCrash();
	friend class EnemyCar;
};

class EnemyCar : public Car
{
private:
	void SpawningCar();
public:
	EnemyCar()
	{
		sign = "0";
		x[0] = 2;
		y[0] = 3;
		CarGetCoordinates();
	}
	void RespawningCar();
};

PlayerCar playerCar;
EnemyCar enemyCar;

#endif // !ClassCar

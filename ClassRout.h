#pragma once
#ifndef ClassRout
#define ClassRout
#include "ClassCar.h"

class Route : protected Car
{
private:
	int width;
	int high;

public:
	Route()
	{
		sign = '|';
		width = 10;
		high = 20;
	}
	void BuildingRout();
	void TouchingTheWall();
	void PlacingCar(Car, int, int, int, int, int, int, int, int, int);
	void Rules();
};

#endif // !ClassRout

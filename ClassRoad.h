#pragma once
#ifndef ClassRoad
#define ClassRoad

class Road
{
private:
	int width;
	int high;
	char sign;
public:
	Road()
	{
		sign = '|';
		width = 11;
		high = 20;
	}
	void BuildRoad();
	friend class PlayerCar;
};

Road aRoad;

#endif // !ClassRoad

#pragma once
#ifndef ClassCar
#define ClassCar

int playerCarX, playerCarX1, playerCarX2, playerCarX3, playerCarX4;		//Player's car position x
int playerCarY;															//Player's car position y
int enemyCarX, enemyCarX1, enemyCarX2, enemyCarX3, enemyCarX4;			//Enemy's car position x
int enemyCarY;															//Enemy's car position y

class Car
{
protected:
	char sign;
	int score;

public:
	Car()
	{
		sign = '0';
		score = 0;
		enemyCarX = 1;
		enemyCarX1 = 2;
		enemyCarX2 = 3;
		enemyCarX3 = 4;
		enemyCarX4 = 5;
		enemyCarY = 1;
		playerCarX = 15;
		playerCarX1 = 16;
		playerCarX2 = 17;
		playerCarX3 = 18;
		playerCarX4 = 19;
		playerCarY = 8;
	}

	void BuildingCarPart1();
	void BuildingCarPart2();
	void SpawningEnemyCar();
	void RespawningEnemyCar();
};

#endif // !ClassCar

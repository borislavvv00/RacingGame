#include <time.h>
#include "ClassCar.h"
#include "ClassRoad.h"
#include "CarFunctions.h"
#include "RoadFunctions.h"
#include "GameMovement.h"

using namespace std;

int	main()
{
	srand(time(0));
	while (true)
	{
		playerCar.GetKeyboardKeys();
		playerCar.Movement(playerCarDirection);
		playerCar.TouchTheWall();
		playerCar.CarCrash();
		enemyCar.Movement(enemyCarDirection);
		enemyCar.RespawningCar();
		aRoad.BuildRoad();
		Sleep(100);
		clearscreen();
	}
	
	return 0;
}

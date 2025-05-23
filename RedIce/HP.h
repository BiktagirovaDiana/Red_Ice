#pragma once
#include "PlayerController.h"
class HP: public PlayerController
{
public:
	void Damage(int n) 
	{
		int k = PowerOfCartel - n;
		if (k >= 0)
		{
			GameOver();
		}
		else 
		{
			PowerOfCartel -= n;
			cout << "Вашему картелю нанесли " << n << "урона." << endl;
			cout << "Сила вашего картеля стало: " << PowerOfCartel << endl;

		}

	}
	void GameOver() {
		if (PowerOfCartel <= 0)
		{
			cout << "Ваш картель уничтожен" << endl;
		}
	}

};


#include "PlayerController.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int PlayerController::Influence = 60;
int PlayerController::PowerOfCartel = 100;
int PlayerController::Money = 5000;
int PlayerController::Gun = 5;
int PlayerController::Grenade = 0;
int PlayerController::RPG = 0;

void PlayerController::InfoPlayer()
{
	cout << "Ваша текущая мощь:" << endl;
	cout << "Влияние: " << Influence << endl;
	cout << "Сила картеля (HP): " << PowerOfCartel << endl;
	cout << "Капитал: " << Money << endl;

	if (Gun > 0 || Grenade > 0)
	{
		cout << "Инвентарь: " << endl;
		if (Gun > 0) {
			cout << "Пистолет: " << Gun << " патрон(-а)" << endl;
		}
		if (Grenade > 0) {
			cout << "Граната: " << Grenade << " штук" << endl;
		}
	}
	else {
		cout << "Инвентарь пуст" << endl;
	}
}

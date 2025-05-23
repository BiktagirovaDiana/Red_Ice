#pragma once
#include "Shop.h"

class Level_1: public PlayerController
{
public:
	void StartGame();
	void HelloPablo();
	void DestroyEnemy();
	void Agree();
	void ShootingInDesert();
	void EnemyLair();
	void PlayerLair();
private:
	Shop shop;
};



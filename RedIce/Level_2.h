#pragma once
#include "PlayerController.h"
#include "Shop.h"

class Level_2 : public PlayerController
{
private:
	Shop shop;

public:

	void HelloPablo2();
	void DestroyEnemy2();
	void Agree2();
	void Trap();
	void Shooting();
	void AttackProcess();
};


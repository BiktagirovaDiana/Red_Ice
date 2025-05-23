#pragma once




class PlayerController
{
public:
	
	void InfoPlayer();

	int getMoney()
	{
		return Money;
	}
	int getInfluence()
	{
		return Influence;
	}
	
protected:

	static int Influence; //влияние
	static int PowerOfCartel; //Сила картеля
	static int Money; //Деньги

	static int Gun; //количество патрон
	static int Grenade;
	static int RPG;
};
void Lose();
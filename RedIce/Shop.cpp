#include "Shop.h"
#include "PlayerController.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Shop::InfoShop() {
	cout << "========Магазин=======" << endl;
	cout << "Патроны: " << endl;
	cout << "Цена: " << PriceCartridges << endl;

	if (Level >= 2)
	{
		cout << "Гранаты:" << endl;
		cout << "Количество: 3" << endl;
		cout << "Урон: " << DamageGrenade << endl;
		cout << "Цена: " << PriceGrenade << endl;
	}
	else {
		cout << "Гранаты доступны на 2 уровне" << endl;
	}
	if (Level >= 4)
	{
		cout << "РПГ:" << endl;
		cout << "Количество: 1 (заряжен на 2 выстрела)" << endl;
		cout << "Урон: " << DamageRPG << endl;
		cout << "Цена: " << PriceRPG << endl;
	}
	else {
		cout << "РПГ доступен на 4 уровне" << endl;
	}

}
void Shop::ChoiceBuy()
{
	cout << "Выберите что купить" << endl;
	cout << "1 - Патроны" << endl;
	cout << "2 - Гранаты" << endl;
	cout << "3 - РПГ" << endl;
	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		BuyCartridges();
		break;
	case 2:
		BuyGrenade();
		break;
	case 3:
		BuyRPG();
		break;
	default:
		break;
	}

}
void Shop::BuyOrNor() {
	cout << "Приобрести дополнительное оружие?" << endl;
	cout << "1: Нет" << endl;
	cout << "2: Так уж и быть" << endl;

	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		break;

	case 2:
		InfoShop();
		ChoiceBuy();

	default:
		break;
	}
}
void Shop::BuyCartridges() //Покупка патрон
{
	if (Money >= PriceCartridges)
	{
		Money -= PriceCartridges;
		Gun += 5;
		cout << "Патроны: +5" << endl;
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}
void Shop::BuyGrenade() //Покупка гранат
{
	if (Money >= PriceGrenade)
	{
		Money -= PriceGrenade;
		Grenade += 3;
		cout << "Гранаты: +3" << endl;
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}
void Shop::BuyRPG() //Покупка РПГ
{
	if (Money >= PriceRPG)
	{
		Money -= PriceRPG;
		RPG += 2;
		cout << "РПГ куплен" << endl;
	}
	else {
		cout << "Недостаточно денег" << endl;
	}
}
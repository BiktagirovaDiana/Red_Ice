﻿#include "Level_1.h"
#include "PlayerController.h"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
void Level_1::StartGame()
{
	cout << "Вы — глава наркокартеля, который только начинает набирать силу." << endl;
	cout << "Ваша цель — расширить влияние, устранить конкурентов и стать единственным королём наркобизнеса в регионе." << endl;
	cout << "Главное для вас - влияние: Оно отображает преданность ваших подчинённых и уровень связи с правоохранительными органами." << endl;
	cout << "Если оно падает ниже 30%, ваши подчинённые сдают вас властям." << endl;
}

void Level_1::HelloPablo()
{
	int choice = 0;


	cout << "Пабло:" << endl;
	cout << "Здравствуйте мистер Майкл Корлионе я ваш новый помощник Пабло, отныне я буду заменять ныне покойного Сантьяго." << endl;
	cout << "До меня меня дошла информация что мелкие наркобарыги продают некачественный товар под вашим именем, что снижает ваше влияние." << endl;
	cout << "Что прикажете делать?" << endl;

	cout << "1: уничтожить противника силой (при удачном раскладе вы получите деньги и влияние)" << endl;
	cout << "2: попытаться договориться (вы потеряете деньги и немного влияния, но избежите кровопролития)" << endl;
	InfoPlayer();

	cin >> choice;
	if (Money < 701)
	{
		cout << "У вас мало денег для поддержания картеля. Вас закрыли фараоны." << endl;
		cout << "Статистика: вы играете хуже чем 99.9999999999% игроков" << endl;
		//Тут должен вызваться функция проигрыша Lose
	}
	switch (choice)
	{
	case 1:
		DestroyEnemy();
		break;
	case 2:
		Agree();
		break;
	default:
		break;
	}

}

void Level_1:: DestroyEnemy()
{
	int choice = 0;

	cout << "Как именно хотите напасть?" << endl;

	cout << "1: Предложить встретиться в пустыне и расставить снайперов" << endl;
	cout << "2: Ворваться в логово врага" << endl;
	cout << "3: Пригласить врага в своё логово на чай" << endl;
	cin >> choice;



	switch (choice)
	{
	case 1:
		shop.BuyOrNor();
		ShootingInDesert();
		break;
	case 2:
		shop.BuyOrNor();
		EnemyLair();
		break;
	case 3:
		PlayerLair();
		break;
	}
}
void Level_1::Agree()
{
	int choice = 0;
	cout << "Вам предлагают заплатить 2000$ для примирения и эти барыги больше не будут трогать ваш бизнес" << endl;
	cout << "1: Согласиться и заплатить 2000$" << endl;
	cout << "2: Предложить 1000$" << endl;
	cout << "3: Пригрозить и предложить 500$" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Вы заплатили 2000$ в качестве примирения. Возможно данные барыги к вам еще обратятся." << endl;
		cout << "Вы потеряли 15 % влияния." << endl;
		Influence -= 15;
		break;
	case 2:
		cout << "Вы заплатили 1000$ в качестве примирения, это стало началом вашей дружбы." << endl;
		cout << "Больше данные барыги не будут трогать ваш бизнес. Но вы потеряли 10% влияния." << endl;
		Influence -= 10;
		break;
	case 3:
		cout << "Один из барыг стреляет в вас" << endl;
		//проигрыш
		break;
	}

}

void Level_1::ShootingInDesert()
{
	int Killers = 0;
	int Bodyguard = 0;

	bool CheckLose = false;

	cout << "Сколько людей вы  возьмете с собой?" << endl;
	cout << "1: 2 киллер - $700" << endl;
	cout << "2: 1 киллер и 1 телохранитель - $750" << endl;
	cout << "3: 2 киллера и 1 телохранитель - $1100" << endl;
	cout << "4: 2 киллера и 2 телохранителя - $1500" << endl;

	int choice = 0;
	cin >> choice;
	switch (choice)
	{
	case 1:
		if (Money >= 700)
		{
			Killers = 2;
			Money -= 700;

			cout << "Вы наняли: двух киллеров" << endl;
		}
		else {
			//проигрыш
		}
		break;
	case 2:
		if (Money >= 750)
		{
			Killers = 1;
			Bodyguard = 1;
			Money -= 750;
			cout << "Вы наняли: 1 киллера и 1 телохранителя" << endl;
		}
		else {
			//проигрыш
		}
		break;
	case 3:
		if (Money >= 1100)
		{
			Killers = 2;
			Bodyguard = 1;
			Money -= 1100;
			cout << "Вы наняли: 2 киллера и 1 телохранителя" << endl;
		}
		else {
			//проигрыш
		}
		break;
	case 4:
		if (Money >= 1500)
		{
			Killers = 2;
			Bodyguard = 2;
			Money -= 1500;
			cout << "Вы наняли: 2 киллера и 2 телохранителя" << endl;
		}
		else {
			//проигрыш
		}
		break;
	}
	cout << "Капитал:" << Money << endl;
	cout << "Выберите стратегию для своих людей." << endl;
	cout << "1: Напасть первым" << endl;
	cout << "2: Защищаться " << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Из-за внезапности нападения вы сразу же  отнимаете у противника 20 HP, убивая его  киллеров." << endl;
		cout << "Вы теряете 3 патрона, так как один из ваших наёмников промахнулся." << endl;
		cout << "Остался лишь главарь и его охрана." << endl;


		break;
	case 2:
		cout << "Ваши враги напали раньше, поэтому ваш  киллер(ы) ранен(ы) (-15 HP)" << endl;
		cout << "Несмотря  на ранение, ваш(и) киллер(ы) тратят 3  патрона и справляются с людьми главы  другого картеля(HP противника : 20)." << endl;
		break;


	}
	Gun -= 3;

	if (Bodyguard == 2)
	{
		cout << "Отчаявшись глава группировки пытается убить вас, но ваши телохранители берут удар на себя" << endl;
	}
	else {
		cout << "Отчаявшись глава группировки стреляет в вас " << endl;
		CheckLose = true;
		//Тут должен вызваться функция проигрыша Lose
	}


	if (CheckLose == false)
	{
		switch (choice)
		{
		case 1:
			cout << "Ваш картель теряет 25 HP, но вы остаетесь живы" << endl;
			PowerOfCartel -= 25;
			break;
		case 2:
			cout << "Ваш картель теряет 10 HP, но вы остаетесь живы " << endl;
			PowerOfCartel -= 10;
			break;

		}

		cout << "Ваши киллеры успевают убить остатки врагов, потратив ещё 2 патрона." << endl;

		cout << "================================================================================================" << endl;
		cout << "= Вы победи! Получаете новых людей, точки торговли, +1000 $, +10% влияния и +20% силы картеля. =" << endl;
		cout << "================================================================================================" << endl;

		Money += 1000;
		Influence += 10;
		PowerOfCartel += 20;
	}


}

void Level_1::EnemyLair()
{
	int choice = 0;
	int Killers = 0;

	bool CheckLose = false;

	cout << "Сколько людей вы отправите людей?" << endl;
	cout << "1: 2 киллера - $700" << endl;
	cout << "2: 3 киллера и 1 телохранитель - $900" << endl;
	cout << "3: 4 киллера и 1 телохранитель - $1200" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		if (Money >= 700) {
			Money -= 700;
			cout << "Вы наняли: двух киллеров" << endl;
		}
		else {
			//проигрыш
		}
		break;
	case 2:
		if (Money >= 900) {
			Money -= 900;
			cout << "Вы наняли: трех киллеров" << endl;
		}
		else {
			//проигрыш
		}
		break;
	case 3:
		if (Money >= 1200) {
			Money -= 1200;
			cout << "Вы наняли: четырех киллеров" << endl;
		}
		else {
			//проигрыш
		}
		break;
	}

	Gun -= 2;
	PowerOfCartel -= 15;
	cout << "Ваши люди смогли ворваться в логово противника, потратив 2 патрона и уменьшив силы врага на 10 HP, но были окружены и взяты в плен." << endl;
	cout << "Ваши люди использовали 2 патрона" << endl;
	cout << "Ваш картель теряет 15 HP" << endl;

	cout << "1: Предложить новое место встречи и продолжить бой,  наплевав на пленных( -10% влияния)" << endl;
	cout << "2: Выкупить своих людей и попробовать договориться.(+5 % влияния)" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		Influence -= 10;
		ShootingInDesert();
		break;
	case 2:
		cout << "Вы заплатили 1000$ в качестве примирения, это стало началом вашей дружбы. Больше данные барыги не будут трогать ваш бизнес. Но вы потеряли 10% влияния." << endl;
		Money -= 1000;
		Influence -= 10;
	}
}
void Level_1::PlayerLair() {
	cout << "Никто не пришёл, примите другое решение" << endl;
	DestroyEnemy();
}
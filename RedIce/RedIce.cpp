#include <iostream>
#include "PlayerController.h"
#include "Level_1.h"
#include "Level_2.h"
#include "Level_3.h"
#include "Level_4.h"
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

PlayerController Player;
Level_1 Text1;
Level_2 Text2;
Level_3 Text3;
Level_4 Text4;

void Level1_Controller();
void Level2_Controller();
void Level3_Controller();

void Level4_Controller();
void Lose();

int main()
{
    setlocale(LC_ALL, "Russian");

    Text1.StartGame();
    Level1_Controller();

    if (Player.getMoney() >= 800 && Player.getInfluence() >= 30)
    {
        Level2_Controller();
        Level3_Controller();
        Level4_Controller();
    }
    else
    {
        Lose();
    }
}

void Level1_Controller()
{
    Text1.HelloPablo();

    if (Player.getMoney() < 701)
    {
        cout << "У вас мало денег для поддержания картеля. Вас закрыли фараоны." << endl;
        cout << "Статистика: вы играете хуже чем 99.9999999999% игроков" << endl;
        Lose();
        return;
    }
}

void Level2_Controller()
{
    Text2.HelloPablo2();

    if (Player.getMoney() < 800 || Player.getInfluence() < 30)
    {
        cout << "У вас недостаточно ресурсов для продолжения. Вас закрыли фараоны." << endl;
        cout << "Статистика: вы играете хуже чем 99.9999999999% игроков" << endl;
        Lose();
    }
}

void Level3_Controller()
{
    //Text3.HelloPablo3();

    if (Player.getMoney() < 800 || Player.getInfluence() < 30)
    {
        cout << "У вас недостаточно ресурсов для продолжения. Вас закрыли фараоны." << endl;
        cout << "Статистика: вы играете хуже чем 99.9999999999% игроков" << endl;
        Lose();
    }

}

void Level4_Controller()
{
    //Text4.HelloPablo4();

    if (Player.getMoney() < 800 || Player.getInfluence() < 30)
    {
        cout << "У вас недостаточно ресурсов для продолжения. Вас закрыли фараоны." << endl;
        cout << "Статистика: вы играете хуже чем 99.9999999999% игроков" << endl;
        Lose();
    }

}

void Lose()
{
    cout << "\n=== ВЫ ПРОИГРАЛИ ===" << endl;
    cout << "Игра завершена. Попробуйте еще раз!" << endl;
    exit(0);
}
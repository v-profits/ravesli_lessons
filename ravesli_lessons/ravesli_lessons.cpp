//глава 6.6b - карточная игра
#include <iostream>

enum eCard {
	K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_10,
	VALET, DAMA, KOROL, TUZ, cMAX = 13

};
enum eSort {
	TREF, BUBNY, CHERVY, PIKY, sMAX = 4
};

struct sCard {
	eCard card;
	eSort sort;
};

int main()
{

	return 0;
}

/*
b) Каждая карта должна быть представлена структурой Card, 
в которой хранится информация о достоинстве и масти карты (например, 4 бубны, король трефы). 
Создайте эту структуру.
*/
//глава 6.6d - карточная игра
#include <iostream>
#include <array>

enum Grade {
	K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_10,
	VALET, DAMA, KOROL, TUZ, cMAX = 13

};
enum Sort {
	TREF, BUBNY, CHERVY, PIKY, sMAX = 4
};
struct Card {
	Grade grade;
	Sort sort;
};
void printCard(const std::array<Card, 52>& card, int i) {
	switch(card[i].grade) {
	case K_2  : std::cout << "2"    ; break;
	case K_3  : std::cout << "3"    ; break;
	case K_4  : std::cout << "4"    ; break;
	case K_5  : std::cout << "5"    ; break;
	case K_6  : std::cout << "6"    ; break;
	case K_7  : std::cout << "7"    ; break;
	case K_8  : std::cout << "8"    ; break;
	case K_9  : std::cout << "9"    ; break;
	case K_10 : std::cout << "10"   ; break;
	case VALET: std::cout << "valet"; break;
	case DAMA : std::cout << "dama" ; break;
	case KOROL: std::cout << "korol"; break;
	case TUZ  : std::cout << "tuz"  ; break;
	}
	switch (card[i].sort) {
	case TREF  : std::cout << " tref"  ; break;
	case BUBNY : std::cout << " bubny" ; break;
	case CHERVY: std::cout << " chervy"; break;
	case PIKY  : std::cout << " piky"  ; break;
	}
}
int main()
{
	std::array<Card,52>arr;
	for (int i = 0, k = 0; i < cMAX; ++i)
		for (int j = 0; j < sMAX; ++j) {
			arr[k].grade = static_cast<Grade>(i);
			arr[k].sort = static_cast<Sort>(j);
			++k;
		}
	printCard(arr, 51);
	return 0; 
}

/*
d) Для представления целой колоды карт (52 карты) создайте массив deck 
(используя std::array) и инициализируйте каждый элемент определенной картой.

Подсказка: Используйте оператор static_cast для конвертации целочисленной переменной в тип перечисления.
*/
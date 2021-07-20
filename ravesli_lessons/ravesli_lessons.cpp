//глава 6.6e - карточная игра
#include <iostream>
#include <array>

enum Grade { // значения карт
	K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_10,
	VALET, DAMA, KOROL, TUZ, cMAX = 13

};
enum Sort { // масти карт
	TREF, BUBNY, CHERVY, PIKY, sMAX = 4
};
struct Card { // значение и масть карты
	Grade grade;
	Sort sort;
};
void printCard(const Card& card) { // выводим карту в консоль
	switch(card.grade) {
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
	switch (card.sort) {
	case TREF  : std::cout << " tref"  ; break;
	case BUBNY : std::cout << " bubny" ; break;
	case CHERVY: std::cout << " chervy"; break;
	case PIKY  : std::cout << " piky"  ; break;
	}
}
void printArr(const std::array<Card, 52>& arr) { // перебор всех карт для вывода в консоль
	for (const auto& card : arr) {
		printCard(card);
		std::cout << std::endl;
	}
}
int main()
{
	std::array<Card,52>arr; // создаем колоду карт
	for (int i = 0, k = 0; i < cMAX; ++i) // инициализируем каждую карту
		for (int j = 0; j < sMAX; ++j) {
			arr[k].grade = static_cast<Grade>(i);
			arr[k].sort = static_cast<Sort>(j);
			++k;
		}
	printArr(arr); // выводим колоду карт в консоль
	return 0; 
}

/*
е) Напишите функцию printDeck(), 
которая в качестве параметра принимает константную ссылку на массив deck и выводит все значения (карты). 
Используйте цикл foreach.
*/
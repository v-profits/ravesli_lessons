//глава 6.6c - карточная игра
#include <iostream>

enum eCard {
	K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_10,
	VALET, DAMA, KOROL, TUZ, cMAX = 13

};
enum eSort {
	TREF, BUBNY, CHERVY, PIKY, sMAX = 4
};

struct sCard {
	eCard Card;
	eSort Sort;
};

void printCard(const sCard& card) {
	switch(card.Card) {
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
	switch (card.Sort) {
	case TREF  : std::cout << " tref"  ; break;
	case BUBNY : std::cout << " bubny" ; break;
	case CHERVY: std::cout << " chervy"; break;
	case PIKY  : std::cout << " piky"  ; break;
	}
}

int main()
{
	sCard card;
	card = {K_2, TREF};
	printCard(card);
	return 0;
}

/*
c) Создайте функцию printCard(), 
параметром которой будет константная ссылка типа структуры Card, 
которая будет выводить значения достоинства и масти определенной карты в виде 2-буквенного кода 
(например, валет пики будет выводиться как VP).
*/
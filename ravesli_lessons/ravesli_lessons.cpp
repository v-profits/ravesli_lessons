//глава 6.6g - карточная игра
#include <iostream>
#include <array>
#include <random> // для std::random_device и std::mt19937
#define SIZE 52

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
int randNum() { // генерирует "случайное" число
	std::random_device rd;
	std::mt19937 mersenne(rd());
	return mersenne() % SIZE;
	// return mersenne() % (max - min + 1) + min;
}
void printCard(const Card& card) { // выводит карту в консоль
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
void printArr(const std::array<Card, SIZE>& arr) { // перебор всех карт для вывода в консоль
	for (const auto& card : arr) {
		printCard(card);
		std::cout << std::endl;
	}
}
void swapCard(Card& card1, Card& card2) { // меняет местами две карты
	Card card = card1;
	card1 = card2;
	card2 = card;
}
void shuffleDeck(std::array<Card, SIZE>& arr) { // перетасовка колоды карт
	for (int i = 0; i < SIZE; ++i)
		swapCard(arr[i], arr[randNum()]);
}
int main()
{
	std::array<Card, SIZE>arr; // создает колоду карт
	for (int i = 0, k = 0; i < cMAX; ++i) // инициализирует каждую карту
		for (int j = 0; j < sMAX; ++j) {
			arr[k].grade = static_cast<Grade>(i);
			arr[k].sort = static_cast<Sort>(j);
			++k;
		}
	//randNum(); // генерирует "случайное" число
	//swapCard(arr[0], arr[51]); // меняет местами две карты
	shuffleDeck(arr); // перетасовка колоды карт
	printArr(arr); // выводит колоду карт в консоль
	return 0; 
}

/*
g) Напишите функцию shuffleDeck() для перетасовки колоды карт. 
Для этого используйте цикл for с итерацией по массиву. 
Перетасовка карт должна произойти 52 раза. 
В цикле for выберите случайное число от 1 до 52 и вызовите swapCard(), 
параметрами которой будут текущая карта и карта, выбранная случайным образом. 
Добавьте в функцию main() возможность перетасовки и 
вывода уже обновленной (перетасованной) колоды карт.

Подсказки:
   Для генерации случайных чисел смотрите урок №71.
   Не забудьте в начале функции main() вызвать функцию srand().
   Если вы используете Visual Studio, 
   то не забудьте перед генерацией случайного числа вызвать один раз функцию rand().
*/
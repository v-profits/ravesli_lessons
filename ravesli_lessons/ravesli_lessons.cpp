﻿#include <iostream>
#include <random> // для std::random_device и std::mt19937

int getRandom(int min, int max) // генерируем "случайное" число
{
	std::random_device rd; // случайное стартовое число
	std::mt19937 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом 
	return mersenne() % (max - min + 1) + min; //  диапазон (20 - 100) рандомного числа, есть: (max - min + 1) + min
}

bool makeChoice(char& choice) // предложение повторить
{
	std::cout << "хотите ";
	while (true) {
		std::cout << "продолжить? yes/no - y/n : ";
		std::cin >> choice;
		std::cin.ignore(SHRT_MAX, '\n');
		if (choice == 'n' || choice == 'y') return (choice == 'y') ? true : false;
		else std::cout << "Error, "; 
	}
}

int main()
{
	setlocale(0, "");
	int min(1), max(100);
	int rand = getRandom(min, max); // наше рандомное число
	
	char choice;
	do {
		for (int i = 0, j; i < 7; ++i) {
			std::cout << "Введите число №" << i + 1 << " - ";
			std::cin >> j;
			if (j < rand) std::cout << "Рандомное число больше вашего\n";
			else if (j > rand) std::cout << "Рандомное число меньше вашего\n";
			else { std::cout << "Вы угадали рандомное число\n"; break; }
			if (j != rand && i==6) std::cout << "Ваши попытки загончились\n";
		}
	} while (makeChoice(choice)); // продолжить (да/нет)

	return 0;
}

/*
   Напишите программу-игру типа Hi-Lo:
   Во-первых, ваша программа должна выбрать случайное целое число в диапазоне от 1 до 100.
   Пользователю дается 7 попыток, чтобы угадать это число.
   Если пользователь не угадал число, то программа должна подсказывать, была ли его догадка слишком большой или слишком маленькой.
   Если пользователь угадал число, то программа должна сообщить, что всё верно — вы выиграли.
   Если же у пользователя кончились попытки, и он не угадал число, то программа должна сообщить ему, что он проиграл и показать правильный результат.
   В конце игры программа должна спросить у пользователя, не хочет ли он сыграть еще раз. Если пользователь не введет ни y, ни n (а что-то другое), то программа должна спросить его еще раз.
*/
//глава 6.3
#include <iostream>

void fun(int& i, int& j)
{
	std::swap(i, j);
}

int main()
{
	setlocale(0, "");
	std::cout << "число №1 : ";
	int i;
	std::cin >> i;
	std::cout << "число №2 : ";
	int j;
	std::cin >> j;
	std::cout << i << " " << j << std::endl;
	fun(i, j);
	std::cout << i << " " << j;
	return 0;
}

/*
Напишите свою функцию, которая меняет местами значения двух целочисленных переменных. 
Проверку осуществляйте в функции main().

Подсказка: Используйте ссылки в качестве параметров.
*/
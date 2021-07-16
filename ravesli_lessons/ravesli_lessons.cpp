//86
#include <iostream>
#include <cstring>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251); // для ввода-вывода на кириллице
	std::cout << "Сколько имен вы хотите ввести : ";
	int j;
	std::cin >> j;
	std::string str;
	std::string* arr;
	arr = new std::string[j];
	for (int i = 0; i < j; ++i) {
		std::cout << "имя №" << i + 1 << " : ";
		std::cin >> arr[i];
	}
	for (int i = 0; i < j - 1; ++i) {
		int index = i;
		for (int k = 1; k < j; ++k)
			if (arr[i] > arr[k])
				index = k;
		std::swap(arr[i], arr[index]);
	}
	for (int i = 0; i < j; ++i)
		std::cout << arr[i] << ' ';
	delete[] arr;
	return 0;
}

/*
Напишите программу, которая:
   спрашивает у пользователя, сколько имен он хочет ввести;
   просит пользователя ввести каждое имя;
   вызывает функцию для сортировки имен в алфавитном порядке (измените код сортировки методом выбора из урока №77);
   выводит отсортированный список имен.

Подсказки:
   Используйте динамическое выделение std::string для хранения имен.
   std::string поддерживает сравнение строк с помощью операторов сравнения < и >.

Пример результата выполнения вашей программы:

How many names would you like to enter? 5
Enter name #1: Jason
Enter name #2: Mark
Enter name #3: Alex
Enter name #4: Chris
Enter name #5: John

Here is your sorted list:
Name #1: Alex
Name #2: Chris
Name #3: Jason
Name #4: John
Name #5: Mark
*/
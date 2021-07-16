//91
#include <iostream>

int main()
{
	setlocale(0, "");
	std::string arr[]{ "Sasha","Ivan","John","Orlando","Leonardo","Nina","Anton","Molly" };
	std::string str;
	std::cout << "Введите имя : ";
	std::cin >> str;

	bool flag = false;
	for (auto& s : arr)
		if (str == s)
			flag = true;

	if (flag)
		std::cout << "Такое имя есть в списке";
	else
		std::cout << "Такого имени нет в списке";
		
	return 0;
}

/*
Объявите фиксированный массив со следующими именами: Sasha, Ivan, John, Orlando, Leonardo, Nina, Anton и Molly. 
Попросите пользователя ввести имя. 
Используйте цикл foreach для проверки того, не находится ли имя, введенное пользователем, уже в массиве.

Пример результата выполнения программы:

Enter a name: Sasha
Sasha was found.

Enter a name: Maruna
Maruna was not found.

Подсказка: Используйте std::string в качестве типа массива.
*/
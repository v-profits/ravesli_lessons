//76.1
#include <iostream>

int main()
{
	int array[] = { 7,5,6,4,9,8,2,1,3 };
	const int length = sizeof(array) / sizeof(int);
	for (int i(0); i < length; ++i)
		std::cout << array[i] << " ";
}

/*
Выведите на экран следующий массив с помощью цикла: int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
Подсказка: Используйте трюк с sizeof (из предыдущего урока) для определения длины массива.
*/
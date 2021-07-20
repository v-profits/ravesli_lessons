//глава 6.5c
#include <iostream>

void printArray(int array[], int length) {
	for (int i = 0; i < length; ++i)
        std::cout << array[i] << ' ';
}

int main()
{
    int array[]{ 8, 6, 4, 2, 0 };
	int length = sizeof(array) / sizeof(array[0]);
	printArray(array, length);
    return 0;
}

/*
void printArray(int array[]) {
	for (const int &element : array)
		std::cout << element << ' ';
}

int main()
{
	int array[] { 8, 6, 4, 2, 0 };
	printArray(array);
	return 0;
}

Что не так с фрагментом кода, и как бы вы их исправили?
*/
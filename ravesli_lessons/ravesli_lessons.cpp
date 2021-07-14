//77.2
#include <iostream>

int main()
{
	int arr[] = { 30,60,20,50,40,10 };
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int k(0); k < length - 1; ++k) // сортировка от меньшего к большему
		for (int i(k+1); i < length; ++i)
			if (arr[k] > arr[i]) {
				int c = arr[k];
				arr[k] = arr[i];
				arr[i] = c;
			}
	
	for (int i(0); i < length; ++i)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	for(int k(0);k<length;++k) // сортировка от большего к меньшему
		for (int i(k + 1); i < length; ++i)
			if (arr[k] < arr[i]) 
				std::swap(arr[k], arr[i]);

	for (int i(0); i < length; ++i)
		std::cout << arr[i] << ' ';
}

/*
Напишите на листке бумаги выполнение сортировки следующего массива методом выбора (так, как мы это делали выше):
{30, 60, 20, 50, 40, 10}
*/
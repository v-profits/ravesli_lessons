#include <iostream>

 bool isEven()
{
	std::cout << "¬ведите целое число: ";
	int x;
	std::cin >> x;

	return x % 2 == 0;
}
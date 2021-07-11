#include <iostream>
#include "header.h"

double Height() // начальная высота
{
	std::cout << "начальная высота в метрах : ";
	double height;
	std::cin >> height;
	return height;
}

double Distance(double height, int sec) // расстояние от земли
{
	double distance = (myConst::gravity * sec * sec) / 2; // Используем формулу: [ s = u * t + (a * t^2) / 2 ], где u(начальная скорость) = 0
	double current = height - distance;

	return current;
}

int main()
{
	setlocale(0, "");
	const double height = Height();
	
	for (int sec = 0; ; ++sec)
		if (Distance(height, sec) <= 0) {
			std::cout << "через " << sec << " секунд, мяч достигнет земли.\n";
			break;
		}
		else
			std::cout << "через " << sec << " секунд, мяч будет на высоте : " << height << " метров.\n";
	
	return 0;
}

/*
В итоговом тесте главы №2 мы написали программу имитации мячика, падающего с башни. 
Так как тогда мы еще ничего не знали о циклах и не умели их использовать, то время полета мячика составляло всего лишь 5 секунд.

Измените программу, приведенную ниже, таким образом, чтобы мячик падал ровно то количество секунд, которое необходимо ему для достижения земли.
*/
//глава 6.1
#include <iostream>

class Igrok {
public:
	enum E {
		ZDOROVE,
		FAKEL,
		STRELA,
		LENGTH
	};
private:
	int m_array[LENGTH];

public:
	Igrok() {
		m_array[ZDOROVE] = 100;
		m_array[FAKEL] = 100;
		m_array[STRELA] = 100;
	}
	Igrok(int zdorove, int fakel, int strela) {
		fun(zdorove, fakel, strela);
	}
	void fun(int zdorove, int fakel, int strela) {
		m_array[ZDOROVE] = zdorove;
		m_array[FAKEL] = fakel;
		m_array[STRELA] = strela;
	}
	friend int countTotalItems(const Igrok igrok);
};

int countTotalItems(const Igrok igrok)
{
	int sum = 0;
	for (int i = 0; i < Igrok::LENGTH; ++i)
		sum += igrok.m_array[i];
	
	return sum;
}

int main()
{
	Igrok igrok(4, 4, 4);
	igrok.fun(3, 6, 12);
	std::cout << "sum : " << countTotalItems(igrok);
	return 0;
}

/*
Представьте, что вы пишете игру, в которой игрок может иметь 3 типа предметов: зелья здоровья, факелы и стрелы. 
Создайте перечисление с этими типами предметов и фиксированный массив для хранения количества каждого типа предметов, 
которое имеет при себе игрок (используйте стандартные фиксированные массивы, а не std::array). 
У вашего игрока должны быть при себе 3 зелья здоровья, 6 факелов и 12 стрел. Напишите функцию countTotalItems(), 
которая возвращает общее количество предметов, которые есть у игрока. 
В функции main() выведите результат работы функции countTotalItems().
*/
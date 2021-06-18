#include <iostream>

class Numbers{
public:
	int m_1;
	int m_2;

	void set(int x, int y) {
		m_1 = x;
		m_2 = y;
	}
	 void print() {
		std::cout << "Numbers(" << m_1 << ", " << m_2 << ")\n";
	}
};

int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3

	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4
	n1.print();
	n2.print();

	return 0;
}
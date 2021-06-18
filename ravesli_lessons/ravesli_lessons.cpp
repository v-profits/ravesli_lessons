#include <iostream>

class RGBA
{
private:
	int m_red;
	int m_green;
	int m_blue;
	int m_alpha;

public:
	RGBA(int red = 0, int green = 0, int blue = 0, int alpha = 255)
		: m_red{ red }, m_green{ green }, m_blue{ blue }, m_alpha{ alpha }
	{

	}
	void print() {
		std::cout << "r=" << m_red << " g=" << m_green << " b=" << m_blue << " a=" << m_alpha << "\n";
	}
};

int main()
{
	RGBA color(0, 135, 135);
	color.print();

	return 0;
}
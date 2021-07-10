#include <iostream>

std::string err = "";

const int calculate(const int a, const int b, const char ch)
{
	switch (ch) {
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	case '%': return a % b;
	default: err = "error"; return 0;
	}
}

int main()
{
	setlocale(0, "");

	int a, b, c;
	char ch;
	std::cout << "первое число : ";
	std::cin >> a;
	std::cout << "второе число : ";
	std::cin >> b;
	std::cout << "знак : ";
	std::cin >> ch;

	c = calculate(a, b, ch);

	if (err != "error")
		std::cout << "результат : " << c;
	else {
		std::cout << "результат : " << err;
		err = "";
	}
		

	return 0;
}
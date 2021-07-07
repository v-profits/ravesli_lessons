#include <iostream>

int isEven();

int main()
{
    setlocale(0, "");

    std::cout << "Введите целое число: ";
    int a = isEven();
    
    std::cout << "Введите большее целое число: ";
    int b = isEven();

    if (a > b) {
        std::cout << "Меняем значения местами" << std::endl;
        int c = a;
        a = b;
        b = c;
    }
    std::cout << "Меньшее число: " << a << std::endl;
    std::cout << "Большее число: " << b;

    return 0;
}
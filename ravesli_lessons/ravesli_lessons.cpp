#include <iostream>

int getInteger();

int main()
{
    setlocale(0, "");
    int x = getInteger();
 
    for (int i = 2; i < x; ++i) {
        if (x % i == 0) {
            std::cout << "Число не простое";
            break;
        }
        if (x == i + 1) {
            std::cout << "Число простое";
        }
    }
 
    return 0;
}
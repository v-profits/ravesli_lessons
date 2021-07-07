#include <iostream>

bool isEven();

int main()
{
    setlocale(0, "");
    
    if (isEven()) std::cout << "Число четное";
    else std::cout << "Число не четное";

    return 0;
}
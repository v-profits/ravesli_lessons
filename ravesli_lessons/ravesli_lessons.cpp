//глава 6.5б
#include <iostream>

int main()
{
    int a = 4;
    int b = 6;

    const int* ptr = &a;
    std::cout << *ptr;
    a = 7;
    std::cout << *ptr;
    ptr = &b;
    std::cout << *ptr;

    return 0;
}

/*
int main()
{
    int a = 4;
    int b = 6;

    const int *ptr = &a;
    std::cout << *ptr;
    *ptr = 7;
    std::cout << *ptr;
    ptr = &b;
    std::cout << *ptr;

    return 0;
}

Что не так с фрагментом кода, и как бы вы их исправили?
*/
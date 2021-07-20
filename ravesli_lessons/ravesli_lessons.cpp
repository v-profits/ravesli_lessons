//глава 6.5a
#include <iostream>

int main()
{
    int array[6]{ 0, 2, 4, 7, 9 };
    for (int count = 0; count < 6; ++count)
        std::cout << array[count] << " ";

    return 0;
}

/*
* int main()
{
    int array[6]{ 0, 2, 4, 7, 9 };
    for (int count = 0; count <= 6; ++count)
        std::cout << array[count] << " ";

    return 0;
}

Что не так с фрагментом кода, и как бы вы их исправили?
*/
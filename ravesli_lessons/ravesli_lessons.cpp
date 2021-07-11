#include <iostream>

int main()
{
    int i = 5;
    while (i >= 1) {
        int k = i;
        while (k >= 1)
            std::cout << k-- << " ";
        std::cout << "\n";
        --i;
    }
    return 0;
}

/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
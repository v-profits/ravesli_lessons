#include <iostream>

int main()
{
    int i = 1;
    while (i <= 5) {
        int k = 5;
        while (k >= 1) {
            if (k <= i) std::cout << k << " ";
            else std::cout << "  ";
            --k;
        }
        std::cout << "\n";
        ++i;
    }
    return 0;
}

/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
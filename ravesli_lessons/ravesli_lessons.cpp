#include <iostream>
#include <cassert>

class Stack {
    int array[10];
    int lenght;

public:
    void reset() {
        lenght = 0;
        for (int i = 0; i < 10; ++i)
            array[i] = 0;
    }
    void print() {
        std::cout << "( ";
        for (int j = 0; j < lenght; ++j)
            std::cout << array[j] << " ";
        std::cout << ")\n";
    }
    void push(const int value) {
        array[lenght] = value;
        ++lenght;
    }
    void pop() {
        assert(lenght != 0 && " В стеке нет значений");
        array[lenght - 1] = 0;
        --lenght;
    }
};

int main()
{
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
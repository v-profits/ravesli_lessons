#include <iostream>
#include <string>

enum class Animal
{
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH,
    NONE
};

std::string getAnimalName(Animal a)
{
    switch (a) {
    case Animal::CHICKEN: return "chicken";
    case Animal::OSTRICH: return "ostrich";
    case Animal::PIG:     return "pig";
    case Animal::GOAT:    return "goat";
    case Animal::CAT:     return "cat";
    case Animal::DOG:     return "dog";
    default:              return "error";
    }
}

std::string numberOfLegs(Animal a)
{
    switch (a) {
    case Animal::CHICKEN:
    case Animal::OSTRICH:
        return "2";
    case Animal::PIG:
    case Animal::GOAT:
    case Animal::CAT:
    case Animal::DOG:
        return "4";
    default:
        return "error";
    }
}

void print(Animal a)
{
    std::cout << "A " << getAnimalName(a) << " has " << numberOfLegs(a) << " legs.\n";
}

int main()
{
    

    print(Animal::CAT);
    print(Animal::CHICKEN);
    print(Animal::NONE);

    return 0;
}

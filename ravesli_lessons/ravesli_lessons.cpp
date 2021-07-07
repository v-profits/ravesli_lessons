#include <iostream>

struct Advertising {
    int numberAds;
    double percentagesClicks;
    double moneyPerClick;
};

int main()
{
    setlocale(0, "");

    std::cout << "сколько объявлений вы показали посетителям: ";
    Advertising i;
    std::cin >> i.numberAds;

    std::cout << "сколько процентов посетителей нажали на объявления: ";
    Advertising d;
    std::cin >> d.percentagesClicks;

    std::cout << "сколько вы заработали в среднем за каждое нажатие на объявления: ";
    Advertising d2;
    std::cin >> d2.moneyPerClick;

    double s = i.numberAds * d.percentagesClicks * d2.moneyPerClick / 100;
    std::cout << "итого: " << s;

    return 0;
}
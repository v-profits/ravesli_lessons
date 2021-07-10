#include <iostream>

enum class eMonsters {
    NONE, //отсутствие монстра 
    ORGE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL
};

struct sMonster {
    enum class eMonsters type;
    std::string name;
    int healht;
};

void Monsters(struct sMonster& m, const enum class eMonsters e) {
    switch (e) {
    case eMonsters::ORGE:
        m.type = e;
        m.name = "шпала";
        m.healht = 170;
        break;
    case eMonsters::GOBLIN:
        m.type = e;
        m.name = "чучело";
        m.healht = 50;
        break;
    case eMonsters::SKELETON:
        m.type = e;
        m.name = "тощий";
        m.healht = 200;
        break;
    case eMonsters::ORC:
        m.type = e;
        m.name = "кувалда";
        m.healht = 100;
        break;
    case eMonsters::TROLL:
        m.type = e;
        m.name = "дылда";
        m.healht = 150;
        break;
    default:
        std::cout << "нет такого монстра";
    }
}

const std::string printStr(const enum class eMonsters e) {
    std::string str = "";
    e == eMonsters::ORGE ? str = "orge" :
        e == eMonsters::GOBLIN ? str = "goblin" :
        e == eMonsters::SKELETON ? str = "skeleton" :
        e == eMonsters::ORC ? str = "orc" :
        e == eMonsters::TROLL ? str = "troll" : str = "";
    return str;
}

void printMonster(const sMonster m) {
    if(m.healht != 0) std::cout << "монстр " << printStr(m.type) << " - имя  " << m.name << ", осталось жизни : " << m.healht;
}

int main()
{
    setlocale(0, "");

    int i;
    std::cout << "монстр : ogre-1, goblin-2, skeleton-3, orc-4, troll-5 : ";
    std::cin >> i;

    eMonsters e = eMonsters::NONE;
    if (i >= 1 && i <= 5) {
        i == 1 ? e = eMonsters::ORGE :
        i == 2 ? e = eMonsters::GOBLIN :
        i == 3 ? e = eMonsters::SKELETON :
        i == 4 ? e = eMonsters::ORC :
                 e = eMonsters::TROLL;
    }
    sMonster m{ eMonsters::NONE, "", 0 };
    Monsters(m, e); 
    printMonster(m);

    return 0;
}
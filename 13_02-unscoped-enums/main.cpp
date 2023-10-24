#include "monsterType.h"
#include <iostream>

int main()
{
    mnstr::MonsterType monster{mnstr::troll};

    std::cout << monster << '\n';
    return 0;
}

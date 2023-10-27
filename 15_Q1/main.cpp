#include <iostream>
#include <string>

#include "random.h"

class Monster {
   public:
    enum Type {
        dragon,
        goblin,
        ogre,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        max_monster_types
    };

    Monster(Type type, std::string name, std::string roar, int hitpoints)
        : m_type{type}, m_name{name}, m_roar{roar}, m_hitpoints{hitpoints} {}
    std::string getTypeString(Type type) const;
    void print() const;

   private:
    Type m_type{};
    std::string m_name{"???"};
    std::string m_roar{"???"};
    int m_hitpoints{};
};

std::string Monster::getTypeString(Type type) const {
    switch (type) {
        case dragon:
            return "dragon";
        case goblin:
            return "goblin";
        case ogre:
            return "ogre";
        case orc:
            return "orc";
        case skeleton:
            return "skeleton";
        case troll:
            return "troll";
        case vampire:
            return "vampire";
        case zombie:
            return "zombie";
        default:
            return "???";
    }
}

void Monster::print() const {
    std::cout << m_name << " the " << getTypeString(m_type) << " has "
              << m_hitpoints << " hit points and says " << m_roar << '\n';
}

namespace MonsterGenerator {

Monster::Type getType(int n) {
    switch (n) {
        case 0:
            return Monster::dragon;
        case 1:
            return Monster::goblin;
        case 2:
            return Monster::ogre;
        case 3:
            return Monster::orc;
        case 4:
            return Monster::skeleton;
        case 5:
            return Monster::troll;
        case 6:
            return Monster::vampire;
        case 7:
            return Monster::zombie;
        default:
            return Monster::dragon;
    }
}

std::string getName(int n) {
    switch (n) {
        case 0:
            return "Blarg";
        case 1:
            return "Moog";
        case 2:
            return "Pksh";
        case 3:
            return "Tyrn";
        case 4:
            return "Mort";
        case 5:
            return "Hans";
        default:
            return "???";
    }
}

std::string getRoar(int i) {
    switch (i) {
        case 0:
            return "*ahh0*";
        case 1:
            return "*ahh1*";
        case 2:
            return "*ahh2*";
        case 3:
            return "*ahh3*";
        case 4:
            return "*ahh4*";
        case 5:
            return "*ahh5*";
        default:
            return "*ahhDefault*";
    };
}

Monster generate() {
    Monster::Type randomType{
        getType(Random::get(0, Monster::max_monster_types - 1))};
    std::string randomName{getName(Random::get(0, 5))};
    std::string randomRoar{getRoar(Random::get(0, 5))};
    int randomHP{Random::get(0, 100)};

    return Monster{randomType, randomName, randomRoar, randomHP};
}
};  // namespace MonsterGenerator

int main() {
    Monster m{MonsterGenerator::generate()};
    m.print();

    return 0;
}

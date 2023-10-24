#include <iostream>
#include <string>

enum class MonsterType { ogre, dragon, orc, giantSpider, slime };

struct Monster {
  MonsterType type{};
  std::string name{};
  int remainingHealth{};
};

constexpr std::string getMonsterName(MonsterType monster) {
  switch (monster) {
    case MonsterType::ogre:
      return "ogre";
    case MonsterType::dragon:
      return "dragon";
    case MonsterType::orc:
      return "orc";
    case MonsterType::giantSpider:
      return "giant spider";
    case MonsterType::slime:
      return "slime";
    default:
      return "???";
  }
}

void printMonster(const Monster &monster) {
  std::cout << "This " << getMonsterName(monster.type) << " is named "
            << monster.name << " and has " << monster.remainingHealth
            << " health.\n";
}

int main() {
  Monster torg{MonsterType::ogre, "Torg", 145};
  Monster george{MonsterType::slime, "George", 23};

  printMonster(torg);
  printMonster(george);

  return 0;
}

#include <iostream>
#include <string>

int main() {
  std::string str{"I saw a red car yesterday."};

  std::string to_find{"red"};
  std::string replace{"blue"};

  std::size_t pos{};
  pos = str.find(to_find);
  str.replace(pos, to_find.length(), replace);

  std::cout << str << '\n';  // I saw a blue car yesterday.

  return 0;
}

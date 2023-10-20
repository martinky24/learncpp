#include <iostream>
#include <string>

int main()
{
    // std::cout << "Enter your full name: ";
    // std::string name{};
    // std::getline(std::cin >> std::ws, name);

    // std::cout << "Enter your favorite color: ";
    // std::string color{};
    // std::getline(std::cin >> std::ws, color);

    // std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

    // std::string name{"Kyle"};
    // std::cout << name << " has " << name.length() << " characters\n";

    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << static_cast<int>(name.length()) + age << '\n';

    return 0;
}

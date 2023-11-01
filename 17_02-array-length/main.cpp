#include <array>
#include <iostream>

int main() {
    std::array<char, 5> hello{'h', 'e', 'l', 'l', 'o'};
    std::cout << "Array size: " << hello.size() << '\n';
    std::cout << "[]:\t" << hello[1] << '\n';
    std::cout << "At:\t" << hello.at(1) << '\n';
    std::cout << "Get:\t" << std::get<1>(hello) << '\n';
    return 0;
}

#include <array>
#include <iostream>

int main() {
    std::array<char, 5> hello{'h', 'e', 'l', 'l', 'o'};
    std::cout << hello[1] << '\n';
    return 0;
}

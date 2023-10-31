#include <iostream>
#include <vector>

int main() {
    std::vector message{'h', 'e', 'l', 'l', 'o'};

    std::cout << "The array has " << message.size() << " elements\n";
    std::cout << message[1] << message.at(1) << '\n';
    return 0;
}

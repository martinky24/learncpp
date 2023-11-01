#include <iostream>

int main() {
    constexpr int arrLen{10};
    int squares[arrLen]{};

    for (int i{0}; i <= arrLen; ++i) {
        squares[i] = i * i;
    }

    for (auto elem : squares) {
        std::cout << elem << '\n';
    }

    return 0;
}

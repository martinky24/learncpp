#include <array>
#include <iostream>

template <typename T, std::size_t N>
void printArray(std::array<T, N> arr) {
    bool first{true};

    std::cout << "The array (";
    for (auto elem : arr) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << elem;
        first = false;
    }
    std::cout << ") has length " << arr.size() << '\n';
}

int main() {
    constexpr std::array arr1{1, 4, 9, 16};
    printArray(arr1);

    constexpr std::array arr2{'h', 'e', 'l', 'l', 'o'};
    printArray(arr2);

    return 0;
}

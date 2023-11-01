#include <iostream>

void printStr(const char* begin, const char* end) {
    for (; begin != end; ++begin) {
        std::cout << *begin;
    }
    std::cout << '\n';
}

void printStrReverse(const char* begin, const char* end) {
    for (; begin != end; --end) {
        std::cout << *(end - 1);
    }
    std::cout << '\n';
}

int main() {
    constexpr char my_str[]{"Hello, world!"};

    const char* begin{my_str};
    const char* end{my_str + std::size(my_str)};

    printStr(begin, end);

    printStrReverse(begin, end);

    return 0;
}

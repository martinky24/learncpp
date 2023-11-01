#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::cout << "How many names would you like to enter? ";
    int size{};
    std::cin >> size;

    std::string* array(new std::string[size]{});

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> array[i];
    }

    std::cout << '\n';
    std::sort(array, array + size);

    for (int i = 0; i < size; ++i) {
        std::cout << "Name #" << i + 1 << ": " << array[i] << '\n';
    }

    delete[] array;

    return 0;
}

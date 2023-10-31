#include <iostream>
#include <vector>

int getVal() {
    int i{0};
    do {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> i;
    } while (i < 1 || i > 9);

    return i;
}

template <typename T>
void printArray(const std::vector<T>& arr) {
    for (std::size_t i{0}; i <= arr.size(); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

template <typename T>
void findVal(const std::vector<T>& arr, T val) {
    int index{-1};

    for (std::size_t i{0}; i <= arr.size(); i++) {
        if (arr[i] == val) {
            index = static_cast<int>(i);
            break;
        }
    }

    if (index == -1) {
        std::cout << "The number " << val << " could not be found\n";
        return;
    }

    std::cout << "The number " << val << " has index " << index << '\n';
}

int main() {
    std::vector arr{4, 6, 7, 3, 8, 2, 1, 9};

    auto val{getVal()};

    printArray(arr);

    findVal(arr, val);

    return 0;
}

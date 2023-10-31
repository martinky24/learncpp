#include <iostream>
#include <vector>

template <typename T>
bool isValueInArray(const std::vector<T>& arr, T val) {
    for (const auto& elem : arr) {
        if (val == elem) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<std::string> names{"Alex",  "Betty", "Caroline", "Dave",
                                   "Emily", "Fred",  "Greg",     "Holly"};
    std::string inputName{};

    std::cout << "Enter a name: ";
    std::cin >> inputName;

    bool found{isValueInArray(names, inputName)};

    if (found) {
        std::cout << inputName << " was found.\n";
    } else {
        std::cout << inputName << " was not found.\n";
    }
}

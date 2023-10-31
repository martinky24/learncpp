#include <iostream>
#include <utility>
#include <vector>

// pair.first = min, pair.second = max
template <typename T>
std::pair<int, int> getMinMax(const std::vector<T>& arr) {
    T min{arr[0]};
    T max{arr[0]};
    std::pair<int, int> minmax{};

    for (std::size_t i{0}; i < arr.size(); i++) {
        if (arr[i] < min) {
            minmax.first = static_cast<int>(i);
        }
        if (arr[i] > max) {
            minmax.second = static_cast<int>(i);
        }
    }

    return minmax;
}

template <typename T>
void printQuestionOutput(const std::vector<T>& arr) {
    std::cout << "With array( ";
    for (auto i : arr) {
        std::cout << i << ' ';
    }
    std::cout << "):\n";

    std::pair<int, int> p{getMinMax(arr)};

    std::cout << "The min element has index " << p.first << " and value "
              << arr[static_cast<std::size_t>(p.first)] << '\n';
    std::cout << "The max element has index " << p.second << " and value "
              << arr[static_cast<std::size_t>(p.second)] << "\n\n";
}

int main() {
    std::vector<int> arr{};

    std::cout << "Enter numbers to add (use -1 to stop): ";
    int input{};
    while (true) {
        std::cin >> input;
        if (input < 0) break;
        arr.push_back(input);
    }
    printQuestionOutput(arr);

    return 0;
}

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
    std::vector v1{3, 8, 2, 5, 7, 8, 3};
    printQuestionOutput(v1);

    std::vector v2{5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6};
    printQuestionOutput(v2);

    return 0;
}

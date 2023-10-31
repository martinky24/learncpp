#include <iostream>
#include <limits>
#include <vector>

template <typename T>
int findMax(const std::vector<T>& arr) {
    T max_val{std::numeric_limits<T>::min()};
    for (std::size_t i{0}; i < arr.size(); ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    std::vector testScore{84, 92, 76, 81, 56};
    std::cout << "The max score is: " << findMax(testScore) << '\n';

    return 0;
}

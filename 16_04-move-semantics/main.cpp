#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T>& input_vec, int i) {
    if (i < 0) {
        std::cout << "Can't index a negative number!\n";
        return;
    }
    if (static_cast<std::size_t>(i) >= input_vec.size()) {
        std::cout << "Index can't be greater than size of array!\n";
        return;
    }

    T val{input_vec[static_cast<std::size_t>(i)]};
    std::cout << "The element has value " << val << '\n';
}

int main() {
    std::vector v1{0, 1, 2, 3, 4};
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2{1.1, 2.2, 3.3};
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}

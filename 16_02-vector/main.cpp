#include <iostream>
#include <vector>

std::vector<int> get_vals(const int num_vals) {
    std::vector<int> vals(static_cast<uint>(num_vals));
    int input{};

    std::cout << "Enter " << num_vals << " integers (separated by spaces): ";

    for (uint i{0}; i < static_cast<uint>(num_vals); ++i) {
        std::cin >> input;
        vals[i] = input;
    }

    return vals;
}

template <typename T>
void output_sum(const std::vector<T>& input_vec) {
    T total{0};
    for (const auto& element : input_vec) {
        total += element;
    }
    std::cout << "The sum is: " << total << '\n';
}

template <typename T>
void output_product(const std::vector<T>& input_vec) {
    T total{1};
    for (uint i{0}; i < input_vec.size(); ++i) {
        total *= input_vec.at(i);
    }
    std::cout << "The product is: " << total << '\n';
}

int main() {
    const std::vector vals = get_vals(5);

    output_sum(vals);
    output_product(vals);

    return 0;
}

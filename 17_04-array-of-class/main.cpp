#include <array>
#include <iostream>
#include <string_view>

struct Item {
    std::string_view name{};
    int gold{};
};

template <std::size_t N>
void printStore(const std::array<Item, N>& store) {
    for (const auto& elem : store) {
        std::cout << "A " << elem.name << " costs " << elem.gold << " gold.\n";
    }
}

int main() {
    using namespace std::literals;

    constexpr std::array<Item, 4> arr{
        {{"sword"sv, 5}, {"dagger"sv, 3}, {"club"sv, 2}, {"spear"sv, 7}}};

    printStore(arr);

    return 0;
}

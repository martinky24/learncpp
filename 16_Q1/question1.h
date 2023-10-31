#include <string_view>
#include <vector>

std::vector evens{2, 4, 6, 8, 10, 12};

const std::vector constVect{1.2, 3.4, 5.6, 7.8};

using namespace std::literals::string_view_literals;
const std::vector<std::string_view> svVec{"Alex"sv, "Brad"sv, "Charles"sv,
                                          "Dave"sv};

std::vector single{12};

std::vector<int> v(12);

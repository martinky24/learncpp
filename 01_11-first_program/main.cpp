#include <iostream>

int multiplier(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;

    std::cout << "Double " << x << " is: " << multiplier(x, 2) << "\n";
    std::cout << "Triple " << x << " is: " << multiplier(x, 3) << "\n";

    return 0;
}

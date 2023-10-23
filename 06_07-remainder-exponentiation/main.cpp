#include <iostream>

int getInput()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

bool isEven(int x)
{
    return !(x % 2);
}

int main()
{
    int val(getInput());

    if (isEven(val))
        std::cout << val << " is even\n";
    else
        std::cout << val << " is odd\n";

    return 0;
}

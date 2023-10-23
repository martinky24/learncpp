#include <iostream>
#include <string>

int getInteger(std::string prompt)
{
    std::cout << prompt;
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int v1{getInteger("Enter an integer: ")};
    int v2{getInteger("Enter a larger integer: ")};

    if (v2 < v1)
    {
        std::cout << "Swapping the values\n";
        int temp{v1};
        v1 = v2;
        v2 = temp;
    }

    std::cout << "The smaller value is " << v1 << '\n';
    std::cout << "The larger value is " << v2 << '\n';

    return 0;
}

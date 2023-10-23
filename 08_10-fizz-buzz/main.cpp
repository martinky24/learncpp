#include <iostream>

void fizzbuzz(int x)
{
    for (int i{1}; i <= x; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            std::cout << "fizzbuzz";
        else if (i % 3 == 0)
            std::cout << "fizz";
        else if (i % 5 == 0)
            std::cout << "buzz";
        else
            std::cout << i;
        std::cout << '\n';
    }
}

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    fizzbuzz(x);

    return 0;
}

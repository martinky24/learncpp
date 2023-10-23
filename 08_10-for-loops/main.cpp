#include <iostream>

void question1()
{
    for (int i{0}; i <= 20; i += 2)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int sumTo(int x)
{
    int total{0};
    for (int i{1}; i <= x; i++)
    {
        total += i;
    }
    return total;
}

void question2()
{
    std::cout << "Enter a number to sum to: ";
    int x{};
    std::cin >> x;
    std::cout << sumTo(x) << '\n';
}

int main()
{
    question1();
    question2();
    return 0;
}

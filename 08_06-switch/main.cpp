#include <iostream>

int calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '*':
        return x * y;
    case '-':
        return x - y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator\n";
        return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter an integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char oper{};
    std::cin >> oper;

    std::cout << "Result: " << calculate(x, y, oper) << '\n';

    return 0;
}

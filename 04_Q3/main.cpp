#include <iostream>

double getNumber()
{
    double x{};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char getOperator()
{
    char oper{};
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> oper;
    return oper;
}

void printRes(char oper, double v1, double v2, double res)
{
    std::cout << v1 << " " << oper << " " << v2 << " is " << res << '\n';
}

int main()
{
    double num1{getNumber()};
    double num2{getNumber()};
    char oper{getOperator()};

    if (oper == '*')
        printRes(oper, num1, num2, num1 * num2);
    else if (oper == '+')
        printRes(oper, num1, num2, num1 + num2);
    else if (oper == '-')
        printRes(oper, num1, num2, num1 - num2);
    else if (oper == '/')
        printRes(oper, num1, num2, num1 / num2);
    else
        std::cout << "Invalid operator!" << '\n';

    return 0;
}

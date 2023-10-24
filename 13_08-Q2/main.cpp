#include <iostream>

struct Fraction
{
    int numerator{0};
    int denominator{1};
};

Fraction getFraction()
{
    Fraction temp{};

    std::cout << "Enter a value for the numerator: ";
    std::cin >> temp.numerator;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> temp.denominator;

    return temp;
}

void printFraction(const Fraction &x)
{
    std::cout << "Your fractions multiplied together: " << x.numerator << "/" << x.denominator << '\n';
}

Fraction fractionMultiply(const Fraction &f1, const Fraction &f2)
{
    return Fraction{f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

int main()
{
    Fraction f1{getFraction()};
    Fraction f2{getFraction()};

    printFraction(fractionMultiply(f1, f2));

    return 0;
}

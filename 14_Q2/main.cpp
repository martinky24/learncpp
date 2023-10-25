#include <iostream>

class Fraction {
   private:
    int m_n{0};
    int m_d{1};

   public:
    explicit Fraction(int n = 0, int d = 1) : m_n{n}, m_d{d} {}

    void print() { std::cout << m_n << '/' << m_d << '\n'; }

    Fraction multiply(const Fraction& f) {
        return Fraction{m_n * f.m_n, m_d * f.m_d};
    }
};

Fraction getFraction() {
    int n{};
    int d{};
    std::cout << "Enter a value for numerator: ";
    std::cin >> n;
    std::cout << "Enter a value for denominator: ";
    std::cin >> d;
    std::cout << '\n';

    return Fraction{n, d};
}

int main() {
    Fraction f1{getFraction()};
    Fraction f2{getFraction()};

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).print();

    return 0;
}

#include <iostream>
#include <string>

class Ball {
   private:
    std::string m_color{"black"};
    double m_radius{10.0};

   public:
    Ball() { print(); }
    Ball(double radius) : m_radius{radius} { print(); }
    Ball(std::string color) : m_color{color} { print(); }
    Ball(std::string color, double radius) : m_color{color}, m_radius{radius} { print(); }

    void print() { std::cout << "Ball(" << m_color << ", " << m_radius << ")\n"; }
};

int main() {
    Ball def{};
    Ball blue{"blue"};
    Ball twenty{20.0};
    Ball blueTwenty{"blue", 20.0};

    return 0;
}

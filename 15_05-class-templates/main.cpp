
#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad {
   private:
    T m_x{};
    U m_y{};
    V m_z{};

   public:
    Triad(const T& x, const U& y, const V& z) : m_x{x}, m_y{y}, m_z{z} {}
    void setX(T x) { m_x = x; }
    void setY(U y) { m_y = y; }
    void setZ(V z) { m_z = z; }
    const T& getX() const { return m_x; }
    const U& getY() const { return m_y; }
    const V& getZ() const { return m_z; }
    void print() const;
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const {
    std::cout << '[' << m_x << ", " << m_y << ", " << m_z << ']';
}

int main() {
    Triad<int, int, int> t1{1, 2, 3};
    t1.print();
    std::cout << '\n';

    using namespace std::literals::string_literals;
    const Triad t2{1, 2.3, "Hello"s};
    t2.print();
    std::cout << '\n' << t2.getY() << '\n';

    return 0;
}

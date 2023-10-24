#include <iostream>

template <typename T>
struct Triad {
    T t1{};
    T t2{};
    T t3{};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(Triad<T> triad) {
    std::cout << '[' << triad.t1 << ", " << triad.t2 << ", " << triad.t3
              << ']';
}

int main() {
    Triad<int> t1{1, 2, 3};
    print(t1);

    Triad t2{1.2, 3.4, 5.6};
    print(t2);

    std::cout << '\n';

    return 0;
}

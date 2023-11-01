#include <iostream>

void doSomething() {
    int* ptr{new int{}};
    std::cout << ptr;
    delete ptr;
}

int main() {
    doSomething();
    return 0;
}

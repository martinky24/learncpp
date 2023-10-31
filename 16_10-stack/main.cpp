#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack) {
    std::cout << "\t(Stack:";

    if (stack.empty())  // if stack.size == 0
        std::cout << " empty";
    for (auto element : stack) std::cout << ' ' << element;

    std::cout << ")\n";
}

int main() {
    std::vector<int> stack{};

    printStack(stack);

    stack.push_back(1);
    std::cout << "Push 1";
    printStack(stack);

    stack.push_back(2);
    std::cout << "Push 2";
    printStack(stack);

    stack.push_back(3);
    std::cout << "Push 3";
    printStack(stack);

    stack.pop_back();
    std::cout << "Pop";
    printStack(stack);

    stack.push_back(4);
    std::cout << "Push 4";
    printStack(stack);

    stack.pop_back();
    std::cout << "Pop";
    printStack(stack);

    stack.pop_back();
    std::cout << "Pop";
    printStack(stack);

    stack.pop_back();
    std::cout << "Pop";
    printStack(stack);

    return 0;
}

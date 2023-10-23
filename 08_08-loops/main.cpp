#include <iostream>

int main()
{
    char start{'a'};
    while (true)
    {
        std::cout << start << ": " << static_cast<int>(start) << '\n';
        if (start == 'z')
            break;
        start++;
    }
    return 0;
}

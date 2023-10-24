#include <iostream>

void sort2(int &x, int &y)
{
    if (x < y)
        return;

    int temp1{x};
    int temp2{y};

    x = temp2;
    y = temp1;
}

int main()
{
    int x{7};
    int y{5};

    sort2(x, y);
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y);
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}

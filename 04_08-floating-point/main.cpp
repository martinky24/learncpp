#include <iomanip>
#include <iostream>

int main()
{
    std::cout << std::setprecision(17);

    std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n';  // no suffix means double

    return 0;
}

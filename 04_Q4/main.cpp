#include <iostream>

double getHeight()
{
    double x{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> x;
    return x;
}

double currentHeight(double starting_height, double seconds)
{
    constexpr double gravity{9.8};

    // Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    double distance_traveled{gravity * (seconds * seconds) / 2.0};
    double current_height{starting_height - distance_traveled};

    if (current_height < 0)
        return 0;

    return current_height;
}

void printHeight(double seconds, double current_height)
{
    if (current_height < 0.001)
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is at height: " << current_height << " meters\n";
}

void calculateAndPrintHeight(double starting_height, int seconds)
{
    printHeight(seconds, currentHeight(starting_height, seconds));
}

int main()
{
    double starting_height{getHeight()};

    calculateAndPrintHeight(starting_height, 0);
    calculateAndPrintHeight(starting_height, 1);
    calculateAndPrintHeight(starting_height, 2);
    calculateAndPrintHeight(starting_height, 3);
    calculateAndPrintHeight(starting_height, 4);
    calculateAndPrintHeight(starting_height, 5);

    return 0;
}

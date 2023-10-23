#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{myConstants::gravity * seconds * seconds / 2};
    double heightNow{initialHeight - distanceFallen};

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight)
{
    double height{1};
    for (int time{0}; height > 0; time++)
    {
        height = calculateHeight(initialHeight, time);
        std::cout << "At " << time << " seconds, the ball is at height: " << height << '\n';
    }
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight{};
    std::cin >> initialHeight;

    calculateAndPrintHeight(initialHeight);

    return 0;
}

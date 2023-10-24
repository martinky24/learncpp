#include <iostream>

struct AdData
{
    int numWatched{0};
    double clickedPercentage{0};
    double earningsPerAd{0};
};

AdData getAdData()
{
    AdData adData{};

    std::cout << "How many ads were watched? ";
    std::cin >> adData.numWatched;

    std::cout << "Percentage of users clicked on an ad? ";
    std::cin >> adData.clickedPercentage;

    std::cout << "Average earnings per clicked ad? ";
    std::cin >> adData.earningsPerAd;

    return adData;
}

void printAdData(const AdData &adData)
{
    std::cout << adData.numWatched << " ads were watched.\n";
    std::cout << adData.clickedPercentage << "% of ads were clicked.\n";
    std::cout << "We earned $" << adData.earningsPerAd << " per ad.\n";

    double total{adData.numWatched * (adData.clickedPercentage / 100) * adData.earningsPerAd};

    std::cout << "\nWe earned $" << total << " total in our advertising today.\n";
}

int main()
{
    AdData adData{getAdData()};
    std::cout << '\n';
    printAdData(adData);

    return 0;
}

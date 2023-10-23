#include "random.h"
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getInt(int counter)
{
    while (true)
    {
        std::cout << "Guess #" << counter << " ";
        int guess{};
        std::cin >> guess;

        if (!std::cin)
        {
            if (std::cin.eof())
                exit(0);

            std::cin.clear();
            ignoreLine();

            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else if ((guess < 1) || (guess > 100))
        {
            std::cout << "Guess must be in [1, 100].\n";
        }
        else
        {
            void ignoreLine();
            return guess;
        }
    }
}

void playGame(int number)
{
    int guess{};

    for (int i{1}; i <= 7; i++)
    {
        guess = getInt(i);
        if (guess == number)
        {
            std::cout << "Correct! You win!\n";
            return;
        }
        else if (guess > number)
            std::cout
                << "Your guess is too high.\n";
        else
            std::cout << "Your guess is too low.\n";
    }

    std::cout << "Sorry, you lose. The correct number was " << number << ".\n";
}

bool keepPlaying()
{
    char play{};

    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> play;

        if (!std::cin)
        {
            if (std::cin.eof())
                exit(0);

            std::cin.clear();
        }

        ignoreLine();

        switch (play)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
    }
}

int main()
{
    bool play{true};
    int randInt{};

    while (play)
    {
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

        randInt = Random::get(1, 100);
        playGame(randInt);

        play = keepPlaying();
    }

    std::cout << "Thank you for playing.\n";

    return 0;
}

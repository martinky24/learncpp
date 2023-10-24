#include <iostream>
#include <string>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};

std::string getAnimalName(Animal animal)
{
    switch (animal)
    {
    case Animal::pig:
        return "pig";
    case Animal::chicken:
        return "chicken";
    case Animal::goat:
        return "goat";
    case Animal::cat:
        return "cat";
    case Animal::dog:
        return "dog";
    case Animal::duck:
        return "duck";
    default:
        return "???";
    }
}

void printLegs(std::string animal, int legs)
{
    std::cout << "A " << animal << " has " << legs << " legs.\n";
}

void printNumberOfLegs(Animal animal)
{
    switch (animal)
    {
    case Animal::pig:
        printLegs(getAnimalName(Animal::pig), 4);
        return;
    case Animal::chicken:
        printLegs(getAnimalName(Animal::chicken), 2);
        return;
    case Animal::goat:
        printLegs(getAnimalName(Animal::goat), 4);
        return;
    case Animal::cat:
        printLegs(getAnimalName(Animal::cat), 4);
        return;
    case Animal::dog:
        printLegs(getAnimalName(Animal::dog), 4);
        return;
    case Animal::duck:
        printLegs(getAnimalName(Animal::duck), 2);
        return;
    default:
        std::cout << "ERROR: INVALID ANIMAL.";
        return;
    }
}

int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    return 0;
}

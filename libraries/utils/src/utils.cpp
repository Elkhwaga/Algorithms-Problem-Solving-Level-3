#include "utils.hpp"
#include <iostream>
#include <limits>

void Utils::clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Utils::clearScreen()
{
    std::system("cls");
}

void Utils::pause()
{
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Utils::clearScreenAndPause()
{
    clearScreen();
    pause();
}
#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to invert all letters case");

    std::string str = InputString::readString("Enter a string: ");

    std::cout << "\nString after inverting all letters case: "
              << StringLib::invertAllLetterOfEachWord(str) << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

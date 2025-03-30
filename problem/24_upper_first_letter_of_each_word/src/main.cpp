#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to upper first letter of each word");

    std::string str = InputString::readString("Enter a string: ");
    std::cout << StringLib::upperFirstLetterOfEachWord(str);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
#include "StringLib.hpp"
#include "InputString.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to lower first letter of each word");

    std::string str = InputString::readString("Enter a string: ");
    std::cout << StringLib::lowerFirstLetterOfEachWord(str);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
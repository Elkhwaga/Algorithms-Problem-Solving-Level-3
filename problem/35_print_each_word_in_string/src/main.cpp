#include "InputString.hpp"
#include "DisplayString.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to print each word in string");

    DisplayString::printEachWordInString(InputString::readString("Enter a string: "));

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
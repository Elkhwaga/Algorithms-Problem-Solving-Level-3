#include "InputString.hpp"
#include "DisplayString.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to print all vowel");

    std::string str = InputString::readString("Enter a string: ");
    DisplayString::displayAllVowel(str);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to invert character case");

    char character = InputString::readChar();
    char invertedChar = StringLib::invertLetterCase(character);

    std::cout << "\nCharacter after inverting case: "
              << invertedChar << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

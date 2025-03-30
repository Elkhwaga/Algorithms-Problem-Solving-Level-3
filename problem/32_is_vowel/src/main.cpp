#include "InputString.hpp"
#include "CheckString.hpp"
#include "display.hpp"
#include <iostream>

void printResult(char character)
{
    (CheckString::isVowel(character))
        ? std::cout << "Yes, Letter " << character << " is vowel." << std::endl
        : std::cout << "No, Letter " << character << " is not vowel." << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to check is vowel");

    printResult(InputString::readChar());

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

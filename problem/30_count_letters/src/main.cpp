#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to count letters");

    std::string str = InputString::readString("Enter a string: ");
    std::cout << str << std::endl;

    char checkChar = InputString::readChar();
    int countLetter = StringLib::countLetters(str, checkChar);

    (countLetter == 0)
        ? std::cout << "Not found!" << std::endl
        : std::cout << "\nNumber of letter a in the string: " << countLetter << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

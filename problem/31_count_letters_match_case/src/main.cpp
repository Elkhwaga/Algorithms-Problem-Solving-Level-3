#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

void printResult(int countLetter, const std::string &message)
{
    (countLetter == 0)
        ? std::cout << "Not found!" << std::endl
        : std::cout << message << countLetter << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to count letters match case");

    std::string str = InputString::readString("Enter a string: ");
    std::cout << str << std::endl;

    char checkChar = InputString::readChar();

    printResult(StringLib::countLetters(str, checkChar), "Number of letter a in the string (Match case): ");
    printResult(StringLib::countLetters(str, checkChar, false), "Number of letter a in the string (Not Match case): ");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

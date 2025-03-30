#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

void printResult(int count, const std::string &message)
{
    std::cout << message << count << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to count small and capital letters");

    std::string str = InputString::readString("Enter a string: ");

    std::cout << "string length: " << str.length() << std::endl;
    printResult(StringLib::countAllSmallLetters(str), "Number of small letters: ");
    printResult(StringLib::countAllCapitalLetters(str), "Number of capital letters: ");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

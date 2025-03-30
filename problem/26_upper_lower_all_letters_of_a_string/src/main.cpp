#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

void printResult(std::string str, const std::string &message)
{
    std::cout << message << std::endl;
    std::cout << str << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to upper and lower all letters of a string");

    std::string str = InputString::readString("Enter a string: ");

    printResult(StringLib::upperAllLetterOfEachWord(str), "String after upper:");
    printResult(StringLib::lowerAllLetterOfEachWord(str), "String after lower:");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
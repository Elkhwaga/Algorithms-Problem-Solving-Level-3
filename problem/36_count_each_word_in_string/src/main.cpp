#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to count each word in string");

    int count = StringLib::countEachWordInString(InputString::readString("Enter a string: "));
    std::cout << "The number of words in the string is: " << count << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
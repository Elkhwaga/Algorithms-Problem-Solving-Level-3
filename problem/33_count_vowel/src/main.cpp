#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to count vowel");

    std::string str = InputString::readString("Enter a string: ");
    int count = StringLib::countVowel(str);

    (count > 0)
        ? std::cout << "Number of vowels is: " << count << std::endl
        : std::cout << "Not Found!" << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

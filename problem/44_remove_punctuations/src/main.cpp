#include "InputString.hpp"
#include "StringLib.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join replace string");

    std::string str = "Hello, World!";
    std::string result = StringLib::removePunctuationsFromString(str);

    std::cout << "Original string: " << str << std::endl;
    std::cout << "String without punctuations: " << result << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
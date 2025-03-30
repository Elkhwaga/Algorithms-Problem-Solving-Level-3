#include "InputString.hpp"
#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join string overloading");

    std::string str = InputString::readString("Enter a string: ");
    std::string revStr = StringHandler::reverseWordsInString(str);

    std::cout << "Reversed string: " << revStr << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
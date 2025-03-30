#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to trim left , trim right and trim all");

    std::string str = "   Hello World   ";

    std::cout << "trim left: " << StringHandler::trimLeft(str) << std::endl;
    std::cout << "trim right: " << StringHandler::trimRight(str) << std::endl;
    std::cout << "trim: " << StringHandler::trim(str) << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
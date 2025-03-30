#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join string");

    std::vector<std::string> vWord = {"Hello", "World", "!"};

    std::cout << "vector after join:";
    std::cout << StringHandler::joinString(vWord, " ") << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
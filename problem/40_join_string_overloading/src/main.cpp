#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join string overloading");

    std::vector<std::string> vWord = {"Hello", "World", "!"};
    std::string arr[] = {"Hello", "World", "!"};

    std::cout << "vector after join:";
    std::cout << StringHandler::joinString(vWord, " ") << std::endl;

    std::cout << "array after join:";
    std::cout << StringHandler::joinString(arr, 3, " ") << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
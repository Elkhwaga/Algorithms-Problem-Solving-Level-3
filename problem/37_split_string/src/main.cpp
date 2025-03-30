#include "InputString.hpp"
#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

void printResult(std::vector<std::string> &vWord)
{
    std::cout << "Token = " << vWord.size() << std::endl;
    for (std::string &word : vWord)
    {
        std::cout << word << std::endl;
    }
}

int main()
{
    Display::displayWelcomeMessage("Welcome to split string");

    std::string str = InputString::readString("Enter a string: ");
    std::vector<std::string> vWord = StringHandler::splitString(str, " ");
    printResult(vWord);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
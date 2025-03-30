#include "InputString.hpp"
#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join replace string");

    std::string str = InputString::readString("Enter a string: ");
    std::string oldWord = InputString::readString("Enter the word to replace: ");
    std::string newWord = InputString::readString("Enter the new word: ");

    std::string replaced = StringHandler::replaceWordsInString(str, oldWord, newWord);
    std::cout << "Replaced string: " << replaced << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
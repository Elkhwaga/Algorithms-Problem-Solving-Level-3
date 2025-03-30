#include "InputString.hpp"
#include "StringHandler.hpp"
#include "display.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to join replace string custom");

    std::string str = InputString::readString("Enter a string: ");
    std::string oldWord = InputString::readString("Enter the word to replace: ");
    std::string newWord = InputString::readString("Enter the new word: ");

    std::cout << "replace with match case: "
              << StringHandler::replaceWordsInStringUsingSplit(str, oldWord, newWord, true) << std::endl;

    std::cout << "replace without match case: "
              << StringHandler::replaceWordsInStringUsingSplit(str, oldWord, newWord, false) << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
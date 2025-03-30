#include "DisplayString.hpp"
#include "CheckString.hpp"
#include <iostream>

void DisplayString::displayFirstLetterOfEachWord(std::string str)
{
    bool isFirstLetter = true;
    std::cout << "\nFirst letter of each word: " << std::endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (isFirstLetter && str[i] != ' ')
        {
            std::cout << str[i] << std::endl;
            isFirstLetter = false;
        }
        else if (str[i] == ' ')
        {
            isFirstLetter = true;
        }
    }
    std::cout << std::endl;
}

void DisplayString::displayAllVowel(std::string str)
{
    std::cout << "Vowels in string are: ";
    for (int i = 0; i < str.length(); i++)
    {
        if (CheckString::isVowel(str[i]))
        {
            std::cout << str[i] << " ";
        }
    }
    std::cout << std::endl;
}

void DisplayString::printEachWordInString(std::string str, std::string delim)
{

    std::cout << "Your string words are:\n";
    short pos = 0;
    std::string word;
    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            std::cout << word << std::endl;
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        std::cout << str << std::endl;
    }
}

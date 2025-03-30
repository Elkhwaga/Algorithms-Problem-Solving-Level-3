#include "StringLib.hpp"
#include "CheckString.hpp"
#include "enums.hpp"

std::string StringLib::upperFirstLetterOfEachWord(std::string str)
{
    bool isFirstLetter = true;

    for (int i = 0; i < str.length(); i++)
    {
        if (isFirstLetter && str[i] != ' ')
        {
            str[i] = std::toupper(str[i]);
            isFirstLetter = false;
        }
        else if (str[i] == ' ')
        {
            isFirstLetter = true;
        }
    }
    return str;
}

std::string StringLib::lowerFirstLetterOfEachWord(std::string str)
{
    bool isFirstLetter = true;

    for (int i = 0; i < str.length(); i++)
    {
        if (isFirstLetter && str[i] != ' ')
        {
            str[i] = tolower(str[i]);
            isFirstLetter = false;
        }
        else if (str[i] == ' ')
        {
            isFirstLetter = true;
        }
    }
    return str;
}

std::string StringLib::lowerAllLetterOfEachWord(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

std::string StringLib::upperAllLetterOfEachWord(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

std::string StringLib::invertAllLetterOfEachWord(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = invertLetterCase(str[i]);
    }
    return str;
}

std::string StringLib::removePunctuationsFromString(std::string str)
{
    std::string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (!ispunct(str[i]))
        {
            result += str[i];
        }
    }
    return result;
}

char StringLib::invertLetterCase(char character)
{
    return isupper(character) ? tolower(character) : toupper(character);
}

int StringLib::countAllSmallLetters(std::string str)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (Enums::getCharacterCase(str[i]) == SMALL)
            counter++;
    }

    return counter;
}

int StringLib::countAllCapitalLetters(std::string str)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (Enums::getCharacterCase(str[i]) == CAPITAL)
            counter++;
    }

    return counter;
}

int StringLib::countLetters(std::string str, char checkChar, bool matchCase)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (matchCase)
        {
            if (str[i] == checkChar)
                counter++;
        }
        else
        {
            if (tolower(str[i]) == tolower(checkChar))
                counter++;
        }
    }

    return counter;
}

int StringLib::countVowel(std::string str)
{
    int count = 0;
    // Count the number of vowels in the string

    for (int i = 0; i < str.length(); i++)
    {
        if (CheckString::isVowel(str[i]))
        {
            count++;
        }
    }
    return count;
}

int StringLib::countEachWordInString(std::string str, std::string delim)
{
    int count = 0;
    short pos = 0;
    std::string word;
    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            count++;
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        count++;
    }
    return count;
}

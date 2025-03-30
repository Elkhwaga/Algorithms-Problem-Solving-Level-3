#include "StringHandler.hpp"
#include "StringLib.hpp"

std::string StringHandler::trimLeft(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            return str.substr(i, str.length() - i);
    }
    return "";
}

std::string StringHandler::trimRight(std::string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
            return str.substr(0, i + 1);
    }
    return "";
}

std::string StringHandler::trim(std::string str)
{
    return trimLeft(trimRight(str));
}

std::vector<std::string> StringHandler::splitString(std::string str, std::string delim)
{
    std::vector<std::string> vWord;
    short pos = 0;
    std::string word;
    while ((pos = str.find(delim)) != std::string::npos)
    {
        word = str.substr(0, pos);
        if (word != "")
        {
            vWord.push_back(word);
        }
        str.erase(0, pos + delim.length());
    }
    if (str != "")
    {
        vWord.push_back(str);
    }
    return vWord;
}

std::string StringHandler::joinString(std::vector<std::string> vWord, std::string delim)
{
    std::string str = "";
    for (std::string word : vWord)
    {
        str += word + delim;
    }
    return str.substr(0, str.length() - delim.length());
}

std::string StringHandler::joinString(std::string arr[], short length, std::string delim)
{
    std::string str = "";
    for (int i = 0; i < length; i++)
    {
        str += arr[i] + delim;
    }
    return str.substr(0, str.length() - delim.length());
}

std::string StringHandler::reverseWordsInString(std::string str)
{
    std::vector<std::string> vWord = splitString(str, " ");
    std::string revStr = "";
    std::vector<std::string>::iterator iter = vWord.end();

    while (iter != vWord.begin())
    {
        --iter;
        revStr += *iter + " ";
    }
    return revStr.substr(0, revStr.length() - 1);
}

std::string StringHandler::replaceWordsInString(std::string str, std::string oldWord, std::string newWord)
{
    short pos = str.find(oldWord);

    while (pos != std::string::npos)
    {
        str.replace(pos, oldWord.length(), newWord);
        pos = str.find(oldWord, pos + newWord.length());
    }

    return str;
}

std::string StringHandler::replaceWordsInStringUsingSplit(std::string str, std::string oldWord, std::string newWord, bool matchCase)
{
    std::vector<std::string> vWord = splitString(str, " ");

    for (std::string &word : vWord)
    {
        if (matchCase)
        {
            if (word == oldWord)
                word = newWord;
        }
        else
        {
            if (StringLib::lowerAllLetterOfEachWord(word) == StringLib::lowerAllLetterOfEachWord(oldWord))
                word = newWord;
        }
    }

    return joinString(vWord, " ");
}

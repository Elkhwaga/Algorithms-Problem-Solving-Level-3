#ifndef STRINGHANDLER_HPP
#define STRINGHANDLER_HPP
#include <string>
#include <vector>

namespace StringHandler
{
    std::string trimLeft(std::string str);

    std::string trimRight(std::string str);

    std::string trim(std::string str);

    std::vector<std::string> splitString(std::string str, std::string delim);

    std::string joinString(std::vector<std::string> vWord, std::string delim);

    std::string joinString(std::string arr[], short length, std::string delim);

    std::string reverseWordsInString(std::string str);

    std::string replaceWordsInString(std::string str, std::string oldWord, std::string newWord);

    std::string replaceWordsInStringUsingSplit(std::string str, std::string oldWord, std::string newWord, bool matchCase = true);

}

#endif
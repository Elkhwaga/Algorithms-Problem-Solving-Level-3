#ifndef STRINGLIB_HPP
#define STRINGLIB_HPP

#include <string>

namespace StringLib
{
    std::string upperFirstLetterOfEachWord(std::string str);

    std::string lowerFirstLetterOfEachWord(std::string str);

    std::string lowerAllLetterOfEachWord(std::string str);

    std::string upperAllLetterOfEachWord(std::string str);

    std::string invertAllLetterOfEachWord(std::string str);

    std::string removePunctuationsFromString(std::string str);

    char invertLetterCase(char character);

    int countAllSmallLetters(std::string str);

    int countAllCapitalLetters(std::string str);

    int countLetters(std::string str, char checkChar, bool matchCase = true);

    int countVowel(std::string str);

    int countEachWordInString(std::string str, std::string delim = " ");

}

#endif
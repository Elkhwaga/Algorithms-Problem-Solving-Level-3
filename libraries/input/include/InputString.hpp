#ifndef INPUTSTRING_HPP
#define INPUTSTRING_HPP

#include <string>

namespace InputString
{

    std::string readString(const std::string &message);

    std::string readFullName(const std::string &message);

    std::string readName(const std::string &message);

    std::string readPhoneNumber();

    std::string readAccountNumber();

    std::string readPinCode();

    char readDelem(const std::string &message);

    char readChoice(const std::string &message);

    char readChar();

}

#endif
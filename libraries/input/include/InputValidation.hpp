#ifndef INPUTVALIDATION_HPP
#define INPUTVALIDATION_HPP
#include <string>

namespace InputValidation
{
    bool checkLength(const std::string &input, short requiredLength);

    bool checkDigitOnly(const std::string &input);

    bool isNumberInRange(int number, int min, int max);

    bool isNumberInRange(float number, float min, float max);

    bool isValidPinCodet(const std::string &dateStr);

}

#endif
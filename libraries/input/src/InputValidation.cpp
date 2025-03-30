#include "InputValidation.hpp"

bool InputValidation::checkLength(const std::string &input, short requiredLength)
{
    return input.length() == requiredLength;
}

bool InputValidation::checkDigitOnly(const std::string &input)
{
    for (char c : input)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

bool InputValidation::isNumberInRange(int number, int min, int max)
{
    if (number != static_cast<int>(number))
        return false;

    return number >= min && number <= max;
}

bool InputValidation::isNumberInRange(float number, float min, float max)
{
    if (number != static_cast<float>(number))
        return false;

    return number >= min && number <= max;
}

bool InputValidation::isValidPinCodet(const std::string &dateStr)
{
    if (dateStr.length() != 4)
    {
        return false;
    }

    for (unsigned short i = 0; i < dateStr.length(); ++i)
    {
        if (!isdigit(dateStr[i]))
        {
            return false;
        }
    }

    return true;
}

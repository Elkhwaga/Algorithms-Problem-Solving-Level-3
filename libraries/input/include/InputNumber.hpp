#ifndef INPUTNUMBER_HPP
#define INPUTNUMBER_HPP
#include <string>

struct InputNumber
{
    static int randomNumber(int min, int max);

    static float readNumber(const std::string &message);

    static int readPositiveNumber(std::string message);

    static float readPositiveFloatNumber(const std::string &message);

    static int readNumberInRange(const std::string &message, int min, int max);

    static float readNumberInRange(const std::string &message, float min, float max);

    static float readNumberCustom(std::string message, bool allowNegative = true);

    static int readNumberWithAttempts(const std::string &message, const int MIN_NUMBER, const int MAX_NUMBER, short attempts);

    static bool readYesNo(const std::string &message);
};

#endif
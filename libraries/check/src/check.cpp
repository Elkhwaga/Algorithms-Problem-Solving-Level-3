#include "check.hpp"
#include "enum.hpp"
#include "constant.hpp"

#include <cmath>

bool Check::checkPrime(int number)
{
    if (number == 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;

    int M = sqrt(number);
    for (int i = 3; i <= M; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool Check::isEven(int n)
{
    return n % 2 == 0;
}

bool Check::isOdd(int n)
{
    return n % 2 == 1;
}

bool Check::isZero(int number)
{
    return number == 0;
}

bool Check::checkMark(float mark, float passMark)
{
    return mark >= passMark;
}

bool Check::isValidDimension(double dimension)
{
    return dimension > Constant::MIN_LENGTH && dimension <= Constant::MAX_LENGTH;
}
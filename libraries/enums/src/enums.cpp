#include "enums.hpp"
#include "check.hpp"
#include <iostream>

PrimeOrNot Enums::isPrimeOrNot(int number)
{
    return (Check::checkPrime(number)) ? PrimeOrNot::PRIME : PrimeOrNot::NOT_PRIME;
}

OddOrEven Enums::GetNumberType(int number)
{
    return (number % 2 == 0) ? OddOrEven::EVEN : OddOrEven::ODD;
}

ChoiceStatus Enums::isContinue(char choice)
{
    return (choice == 'Y' || choice == 'y') ? ChoiceStatus::YES : ChoiceStatus::NO;
}

Status Enums::checkStatus(int mark)
{
    return (Check::checkMark(mark)) ? Status::PASS : Status::FAIL;
}

PerfectOrNot Enums::isPerfectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    return (Number == Sum) ? PerfectOrNot::PERFECT : PerfectOrNot::NOT_PERFECT;
}

PositiveOrNegative Enums::getNumberTypeNegativeOrPositive(int number)
{
    return (number > 0) ? PositiveOrNegative::POSITIVE : PositiveOrNegative::NEGATIVE;
}

CharacterCase Enums::getCharacterCase(char character)
{
    return isupper(character) ? CAPITAL : SMALL;
}

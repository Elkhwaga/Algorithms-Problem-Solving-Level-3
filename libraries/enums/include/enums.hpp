#ifndef ENUMS_HPP
#define ENUMS_HPP

#include "enum.hpp"

namespace Enums
{
	PrimeOrNot isPrimeOrNot(int number);

	OddOrEven GetNumberType(int number);

	ChoiceStatus isContinue(char choice);

	Status checkStatus(int mark);

	PerfectOrNot isPerfectNumber(int Number);

	PositiveOrNegative getNumberTypeNegativeOrPositive(int number);

	CharacterCase getCharacterCase(char character);

}

#endif
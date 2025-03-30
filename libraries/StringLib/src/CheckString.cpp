#include "CheckString.hpp"
#include "enum.hpp"
#include <iostream>

bool CheckString::isVowel(char character)
{
    character = toupper(character);
    return (character == VowelsCharacter::A ||
            character == VowelsCharacter::E || character == VowelsCharacter::I ||
            character == VowelsCharacter::O || character == VowelsCharacter::U);
}
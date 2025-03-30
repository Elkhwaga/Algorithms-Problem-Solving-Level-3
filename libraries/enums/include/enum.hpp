#ifndef ENUM_HPP
#define ENUM_HPP

enum Status
{
    FAIL = 0,
    PASS = 1
};

enum ChoiceStatus
{
    NO = 0,
    YES = 1
};

enum NameFormat
{
    NORMAL_CASE = 1,
    FORMAL_CASE = 2,
    INITIALS_CASE = 3,
    UPPERCASE_CASE = 4,
    SMALL_CASE = 5
};

enum OddOrEven
{
    ODD = 1,
    EVEN = 2
};

enum PrimeOrNot
{
    NOT_PRIME = 0,
    PRIME = 1
};

enum PerfectOrNot
{
    PERFECT = 1,
    NOT_PERFECT = 0
};

enum PalindromeOrNot
{
    NOT_PALINDROME = 0,
    PALINDROME = 1
};

enum CharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialChar = 3,
    Digit = 4,
    All = 5
};

enum PositiveOrNegative
{
    NEGATIVE = 0,
    POSITIVE = 1
};

enum CharacterCase
{
    CAPITAL,
    SMALL
};

enum VowelsCharacter
{
    A = 'A',
    E = 'E',
    I = 'I',
    O = 'O',
    U = 'U'
};

#endif
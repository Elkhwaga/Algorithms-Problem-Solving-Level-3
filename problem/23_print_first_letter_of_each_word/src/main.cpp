#include "DisplayString.hpp"
#include "InputString.hpp"
#include "display.hpp"

int main()
{

    std::string str = InputString::readString("Enter a string: ");
    DisplayString::displayFirstLetterOfEachWord(str);

    return 0;
}
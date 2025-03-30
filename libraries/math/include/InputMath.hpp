#ifndef INPUTMATH_HPP
#define INPUTMATH_HPP

#include <string>

namespace InputMath
{
    /**
     * Reads a dimension from the user with a message prompt.
     * The input is validated to be within the range defined by
     * Constant::MIN_LENGTH and Constant::MAX_LENGTH.
     * @param message The message to display to the user.
     * @return The valid dimension entered by the user.
     */
    double getDimension(const std::string &message);

}

#endif
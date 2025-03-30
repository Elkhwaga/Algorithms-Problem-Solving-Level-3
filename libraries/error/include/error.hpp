#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <iostream>
#include <sstream>

namespace Error
{
    /**
     * @brief Generates a detailed error message with remaining attempts
     * @param baseMessage The primary error message
     * @param remainingAttempts Number of attempts left
     * @return Formatted error message string
     */
    std::string formatErrorMessage(const std::string &baseMessage, int remainingAttempts);
}

#endif
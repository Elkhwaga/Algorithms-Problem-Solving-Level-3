#include "error.hpp"

std::string Error::formatErrorMessage(const std::string &baseMessage, int remainingAttempts)
{
    std::stringstream ss;
    ss << baseMessage << "\n"
       << "Remaining attempts: " << remainingAttempts << "\n"
       << "Please try again...";
    return ss.str();
}
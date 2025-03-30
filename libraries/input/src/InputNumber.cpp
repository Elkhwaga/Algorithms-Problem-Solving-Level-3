#include "InputNumber.hpp"
#include "InputValidation.hpp"
#include "utils.hpp"
#include "check.hpp"
#include "error.hpp"
#include "constant.hpp"
#include <cstdlib>
#include <iomanip>
#include <limits>

int InputNumber::randomNumber(int MIN_NUMBER, int MAX_NUMBER)
{
    return std::rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
}

float InputNumber::readNumber(const std::string &message)
{
    float number;
    while (true)
    {
        std::cout << message;
        if (std::cin >> number) // Check if input is valid
        {
            break; // Exit loop if input is valid
        }
        else
        {
            Utils::clearInputBuffer();
            std::cout << "Error: Please enter a valid number." << std::endl;
        }
    }
    return number;
}

int InputNumber::readPositiveNumber(std::string message)
{
    int number = 0;
    do
    {
        std::cout << message;
        std::cin >> number;
        if (std::cin.fail() || number < 0) // Check if the input is valid, positive, and not too large
        {
            Utils::clearInputBuffer(); // Reset the input stream in case of an error
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
            number = -1; // To prompt the user again
        }
    } while (number < 0); // Continue until a valid positive integer is entered
    return number;
}

float InputNumber::readPositiveFloatNumber(const std::string &message)
{
    float number;
    while (true)
    {
        std::cout << message;
        if (std::cin >> number && number > 0)
        {
            // Valid input, break the loop
            break;
        }
        else
        {
            // Invalid input, clear the input buffer and prompt the user again
            Utils::clearInputBuffer();
            std::cout << "Invalid input. Please enter a positive number." << std::endl;
        }
    }
    return number;
}

int InputNumber::readNumberInRange(const std::string &message, int MIN_NUMBER, int MAX_NUMBER)
{
    int number = 0;
    std::cout << message;
    std::cin >> number;

    while (!InputValidation::isNumberInRange(number, MIN_NUMBER, MAX_NUMBER))
    {
        Utils::clearInputBuffer();
        std::cout << "Invalid input. Please enter a non-negative integer between " << MIN_NUMBER << " and " << MAX_NUMBER << std::endl;
    }
    return number;
}

float InputNumber::readNumberInRange(const std::string &message, float MIN_NUMBER, float MAX_NUMBER)
{
    float number;
    std::cout << message;
    std::cin >> number;

    while (!InputValidation::isNumberInRange(number, MIN_NUMBER, MAX_NUMBER))
    {
        Utils::clearInputBuffer();
        std::cout << "Invalid input. Please enter a non-negative integer between " << MIN_NUMBER << " and " << MAX_NUMBER << std::endl;
    }
    return number;
}

float InputNumber::readNumberCustom(std::string message, bool allowNegative)
{
    int attempts = 0;
    while (attempts < Constant::MAX_RETRIES)
    {
        std::cout << "\n"
                  << message << std::endl;
        float number;

        // Attempt to read the number
        if (!(std::cin >> number))
        {
            Utils::clearInputBuffer();
            std::cerr << Error::formatErrorMessage(Constant::ERROR_INVALID_NUMBER, Constant::MAX_RETRIES - attempts - 1) << std::endl;
            attempts++;
            continue;
        }

        Utils::clearInputBuffer();

        // Validate number range
        if (abs(number) > std::numeric_limits<float>::max() / 2)
        {
            std::cerr << Error::formatErrorMessage(Constant::ERROR_OUT_OF_RANGE, Constant::MAX_RETRIES - attempts - 1) << std::endl;
            attempts++;
            continue;
        }

        // Check for negative numbers when not allowed
        if (!allowNegative && number < 0)
        {
            std::cerr << Error::formatErrorMessage(Constant::ERROR_NEGATIVE_NOT_ALLOWED, Constant::MAX_RETRIES - attempts - 1) << std::endl;
            attempts++;
            continue;
        }

        return number;
    }

    throw std::runtime_error(Constant::ERROR_MAX_ATTEMPTS);
}

int InputNumber::readNumberWithAttempts(const std::string &message, const int MIN_NUMBER, const int MAX_NUMBER, short attempts)
{
    int number;

    while (attempts < 3)
    {
        std::cout << "Enter a number: ";

        if (std::cin >> number && InputValidation::isNumberInRange(number, MIN_NUMBER, MAX_NUMBER))
        {
            return number;
        }
        else
        {
            attempts++;

            std::cout << "Error: Invalid input please enter an integer between "
                      << MIN_NUMBER << " AND " << MAX_NUMBER << ".\n";
            Utils::clearInputBuffer();
        }
    }
    return -1;
}

bool InputNumber::readYesNo(const std::string &message)
{
    std::cout << message;
    bool allowNegative;

    if (!(std::cin >> allowNegative))
    {
        throw std::runtime_error("Invalid input for negative number selection");
    }
    std::cin.ignore();

    std::cout << "\nMode: " << (allowNegative ? "Accepting all numbers" : "Positive numbers only") << std::endl;

    return allowNegative;
}

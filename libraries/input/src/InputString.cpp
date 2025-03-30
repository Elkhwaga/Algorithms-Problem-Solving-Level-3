#include "InputString.hpp"
#include "InputValidation.hpp"
#include "utils.hpp"
#include <iostream>

std::string InputString::readString(const std::string &message)
{
    std::string name;
    std::cout << message;
    std::getline(std::cin >> std::ws, name);
    return name;
}

std::string InputString::readFullName(const std::string &message)
{
    std::string name;
    while (true)
    {
        std::cout << message;
        getline(std::cin >> std::ws, name);

        // Check if the name is valid
        if (!name.empty() && name.length() >= 3 && name.length() <= 50)
        {
            break; // Exit the loop if the name is valid
        }

        // If the name is invalid, prompt the user again
        std::cout << "Invalid name. The name must be between 3 and 50 characters long. Please try again.\n";
    }

    return name;
}

std::string InputString::readName(const std::string &message)
{
    std::string name;
    while (true)
    {
        std::cout << message;
        std::cin >> name;

        // Check if the name is valid
        if (!name.empty() && name.length() >= 3 && name.length() <= 10)
        {
            break; // Exit the loop if the name is valid
        }

        // If the name is invalid, prompt the user again
        std::cout << "Invalid name. The name must be between 3 and 50 characters long. Please try again.\n";
    }

    return name;
}

std::string InputString::readPhoneNumber()
{
    std::string phoneNumber;
    std::cout << "Enter a phone number: ";
    std::cin >> phoneNumber;
    while (!InputValidation::checkDigitOnly(phoneNumber) || !InputValidation::checkLength(phoneNumber, 11))
    {
        Utils::clearInputBuffer();
        std::cout << "Enter a valid phone number: ";
        std::cin >> phoneNumber;
    }
    return phoneNumber;
}

std::string InputString::readAccountNumber()
{
    std::string accountNumber;
    std::cout << "Enter an account number: ";
    std::cin >> accountNumber;
    while (!InputValidation::checkLength(accountNumber, 4))
    {
        Utils::clearInputBuffer();

        std::cout << "Enter a valid account number: ";
        std::cin >> accountNumber;
    }
    return accountNumber;
}

std::string InputString::readPinCode()
{
    std::string input;
    std::cout << "Enter a 4-digit PIN: ";
    std::cin >> input;
    while (!InputValidation::isValidPinCodet(input))
    {
        Utils::clearInputBuffer();
        std::cout << "Invalid input. Please enter a 4-digit PIN: ";
        std::cin >> input;
    }
    return input;
}

char InputString::readDelem(const std::string &message)
{
    char delem;
    std::cout << message;
    while (!(std::cin >> delem))
    {
        Utils::clearInputBuffer();
        std::cout << "Please enter valid delem: ";
    }
    return delem;
}

char InputString::readChoice(const std::string &message)
{
    char choice;
    std::cout << message;
    while (!(std::cin >> choice) || (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n'))
    {
        Utils::clearInputBuffer();
        std::cout << "Enter a valid choice: ";
    }
    return choice;
}

char InputString::readChar()
{
    char character;
    std::cout << "Please enter a character: ";
    std::cin >> character;
    return character;
}
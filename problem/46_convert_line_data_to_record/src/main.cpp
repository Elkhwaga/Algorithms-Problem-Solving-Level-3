#include "client.hpp"
#include "DisplayClient.hpp"
#include "display.hpp"
#include <iostream>
#include <stdexcept>

int main()
{
    Display::displayWelcomeMessage("Welcome to convert line data to record");

    std::string line = "12345678#//#1234#//#John Doe#//#12345678901#//#1000.00";
    std::cout << "Original line: " << line << std::endl;

    try
    {
        Client ClientAccount = Client::convertLineToRecord(line);
        DisplayClient::displayClientAccount(ClientAccount);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Exit with non-zero status code to indicate error
    }

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
#include "client.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <iostream>

int main()
{
    Display::displayWelcomeMessage("Welcome to convert record to line");

    Client Client = Client.readClientAccount();
    std::string line = Client.convertRecordToLine(Client, Constant::FILENAME);
    std::cout << "client record for saving is: " << line << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
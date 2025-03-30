#include "DisplayClient.hpp"
#include "constant.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to find client by account number");

    DisplayClient::findAndDisplayClientByAccountNumber(Constant::FILENAME);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
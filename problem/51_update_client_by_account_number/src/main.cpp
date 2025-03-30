#include "client.hpp"
#include "FileHandler.hpp"
#include "InputString.hpp"
#include "constant.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to update client by account number");

    std::vector<Client> vClients = FileHandler::loadDataFromFile(Constant::FILENAME);
    std::string accountNumber = InputString::readAccountNumber();

    Client client;
    client.UpdateClientByAccountNumber(accountNumber, vClients);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
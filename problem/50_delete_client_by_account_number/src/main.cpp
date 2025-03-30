#include "client.hpp"
#include "FileHandler.hpp"
#include "InputString.hpp"
#include "constant.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to delete client by account number");

    std::vector<Client> vClients = FileHandler::loadDataFromFile(Constant::FILENAME);
    std::string accountNumber = InputString::readAccountNumber();

    Client client;
    client.deleteClientByAccountNumber(accountNumber, vClients);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
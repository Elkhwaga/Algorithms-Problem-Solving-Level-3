#include "client.hpp"
#include "DisplayClient.hpp"
#include "FileHandler.hpp"
#include "display.hpp"
#include <vector>

int main()
{
    Display::displayWelcomeMessage("Welcome to show all clients");

    std::vector<Client> Clients = FileHandler::loadDataFromFile(Constant::FILENAME);
    DisplayClient::displayAllClientsData(Clients);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
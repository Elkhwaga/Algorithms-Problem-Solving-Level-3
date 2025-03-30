#include "client.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to add clients to file");

    Client::addClients();

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
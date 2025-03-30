#ifndef DISPLAYCLIENT_HPP
#define DISPLAYCLIENT_HPP

#include "client.hpp"
#include <vector>

namespace DisplayClient
{
    void displayClientAccount(Client ClientAccount);

    void displayClientRecord(Client ClientAccount);

    void displayAllClientsData(std::vector<Client> ClientAccounts);

    void displayClientByAccountNumber(Client Client);

    void findAndDisplayClientByAccountNumber(std::string fileName);

}

#endif
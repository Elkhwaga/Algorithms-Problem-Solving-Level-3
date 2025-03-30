#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <string>
#include <vector>

struct Client
{
    std::string accountNumber;
    std::string pinCode;
    std::string name;
    std::string phoneNumber;
    float balance;
    bool markedForDeletion = false;

    Client readClientAccount();

    Client changeClientRecord(std::string accountNumber);

    static void addNewClient();

    static void addClients();

    std::string convertRecordToLine(Client, std::string separator = "#//#");

    static Client convertLineToRecord(std::string line, std::string separator = "#//#");

    bool findClientByAccountNumber(std::string accountNumber, std::vector<Client> vClients, Client &sClient);

    bool markClientForDeleteByAccountNumber(std::string accountNumber, std::vector<Client> &vClients);

    bool deleteClientByAccountNumber(std::string accountNumber, std::vector<Client> &vClient);

    bool UpdateClientByAccountNumber(std::string accountNumber, std::vector<Client> &vClients);
};

#endif
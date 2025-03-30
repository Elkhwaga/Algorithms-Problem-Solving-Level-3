#include "DisplayClient.hpp"
#include "InputString.hpp"
#include "FileHandler.hpp"
#include <iostream>
#include <vector>
#include <iomanip>

void DisplayClient::displayClientAccount(Client ClientAccount)
{
    std::cout << "------------------------------------------------------\n";
    std::cout << "                  Information\n";
    std::cout << "------------------------------------------------------\n"
              << std::endl;
    std::cout << "Account number: " << ClientAccount.accountNumber << std::endl;
    std::cout << "Pin code: " << ClientAccount.pinCode << std::endl;
    std::cout << "Name: " << ClientAccount.name << std::endl;
    std::cout << "Phone number: " << ClientAccount.phoneNumber << std::endl;
    std::cout << "Balance: " << ClientAccount.balance << std::endl;
}

void DisplayClient::displayClientRecord(Client Client)
{
    std::cout << "| " << std::left << std::setw(15) << Client.accountNumber;
    std::cout << "| " << std::left << std::setw(10) << Client.pinCode;
    std::cout << "| " << std::left << std::setw(40) << Client.name;
    std::cout << "| " << std::left << std::setw(12) << Client.phoneNumber;
    std::cout << "| " << std::left << std::setw(13) << Client.balance;
    std::cout << "|";
}

void DisplayClient::displayAllClientsData(std::vector<Client> Clients)
{
    int count = Clients.size();
    std::cout << "\n\t\t\t\tClient List (" << count << ") Client(s)\n";
    std::cout << "-----------------------------------------------------------------------------------------------------"
              << std::endl;
    std::cout << "| " << std::left << std::setw(15) << "Account Number";
    std::cout << "| " << std::left << std::setw(10) << "Pin Code";
    std::cout << "| " << std::left << std::setw(40) << "Client Name";
    std::cout << "| " << std::left << std::setw(12) << "Phone";
    std::cout << "| " << std::left << std::setw(13) << "Balance";
    std::cout << "|";
    std::cout << "\n-----------------------------------------------------------------------------------------------------"
              << std::endl;

    if (count == 0)
    {
        std::cout << "\t\t\t\t\tNo Client Found!" << std::endl;
        std::cout << "-----------------------------------------------------------------------------------------------------"
                  << std::endl;
        return;
    }

    for (Client &Client : Clients)
    {
        displayClientRecord(Client);
        std::cout << std::endl;
    }

    std::cout << "-----------------------------------------------------------------------------------------------------"
              << std::endl;
}

void DisplayClient::displayClientByAccountNumber(Client Client)
{
    std::cout << "\nThe following are the client details:\n";
    std::cout << "Account number: " << Client.accountNumber << std::endl;
    std::cout << "Pin code: " << Client.pinCode << std::endl;
    std::cout << "Name: " << Client.name << std::endl;
    std::cout << "Phone number: " << Client.phoneNumber << std::endl;
    std::cout << "Balance: " << Client.balance << std::endl;
}

void DisplayClient::findAndDisplayClientByAccountNumber(std::string fileName)
{
    Client client;
    std::vector<Client> data = FileHandler::loadDataFromFile(Constant::FILENAME);
    std::string accountNumber = InputString::readAccountNumber();
    if (client.findClientByAccountNumber(accountNumber, data, client))
    {
        displayClientByAccountNumber(client);
    }
    else
    {
        std::cout << "Client not found." << std::endl;
    }
}

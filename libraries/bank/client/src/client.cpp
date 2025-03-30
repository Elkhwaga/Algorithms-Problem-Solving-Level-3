#include "client.hpp"
#include "DisplayClient.hpp"
#include "InputString.hpp"
#include "InputNumber.hpp"
#include "StringHandler.hpp"
#include "FileHandler.hpp"
#include "utils.hpp"
#include "enums.hpp"
#include "constant.hpp"
#include <iostream>
#include <vector>
#include <stdexcept>

Client Client::readClientAccount()
{
    Client Client;
    Client.accountNumber = InputString::readAccountNumber();
    Client.pinCode = InputString::readPinCode();
    Client.name = InputString::readFullName("Please enter your name: ");
    Client.phoneNumber = InputString::readPhoneNumber();
    Client.balance = InputNumber::readPositiveFloatNumber("Please enter a balance: ");
    return Client;
}

Client Client::changeClientRecord(std::string accountNumber)
{
    Client Client;
    Client.accountNumber = accountNumber;
    Client.pinCode = InputString::readPinCode();
    Client.name = InputString::readFullName("Please enter your name: ");
    Client.phoneNumber = InputString::readPhoneNumber();
    Client.balance = InputNumber::readPositiveFloatNumber("Please enter a balance: ");
    return Client;
}

void Client::addNewClient()
{
    Client ClientAccount = ClientAccount.readClientAccount();
    std::string line = ClientAccount.convertRecordToLine(ClientAccount, Constant::FILENAME);
    FileHandler::addDataLineToFile(Constant::FILENAME, line);
}

void Client::addClients()
{
    char choice;
    do
    {
        Utils::clearScreen();
        std::cout << "Adding new client: " << std::endl;
        addNewClient();
        std::cout << "user added successfully" << std::endl;
        choice = InputString::readChoice("Do you want to add another client? (Y/N) ");
    } while (Enums::isContinue(choice) == YES);
}

std::string Client::convertRecordToLine(Client Client, std::string separator)
{
    std::string clientRecord = "";

    clientRecord += Client.accountNumber + separator;
    clientRecord += Client.pinCode + separator;
    clientRecord += Client.name + separator;
    clientRecord += Client.phoneNumber + separator;
    clientRecord += std::to_string(Client.balance);

    return clientRecord;
}

Client Client::convertLineToRecord(std::string line, std::string separator)
{
    Client Client;

    std::vector<std::string> data = StringHandler::splitString(line, separator);

    if (data.size() < 5)
    {
        throw std::runtime_error("Invalid input: fewer than 5 fields");
    }

    try
    {
        Client.accountNumber = data[0];
        Client.pinCode = data[1];
        Client.name = data[2];
        Client.phoneNumber = data[3];
        Client.balance = stof(data[4]);
    }
    catch (const std::invalid_argument &e)
    {
        throw std::runtime_error("Invalid balance value");
    }

    return Client;
}

bool Client::findClientByAccountNumber(std::string accountNumber, std::vector<Client> vClients, Client &sClient)
{
    for (Client client : vClients)
    {
        if (client.accountNumber == accountNumber)
        {
            sClient = client;
            return true;
        }
    }

    return false;
}

bool Client::markClientForDeleteByAccountNumber(std::string accountNumber, std::vector<Client> &vClients)
{
    for (Client &client : vClients)
    {
        if (client.accountNumber == accountNumber)
        {
            client.markedForDeletion = true;
            return true;
        }
    }

    return false;
}

bool Client::deleteClientByAccountNumber(std::string accountNumber, std::vector<Client> &vClient)
{
    Client Client;
    if (findClientByAccountNumber(accountNumber, vClient, Client))
    {
        DisplayClient::displayClientByAccountNumber(Client);

        char choice = InputString::readChoice("Are you sure you want to delete this client? (Y/N) ");
        if (Enums::isContinue(choice) == ChoiceStatus::YES)
        {
            if (markClientForDeleteByAccountNumber(accountNumber, vClient))
            {
                FileHandler::saveDataToFile(Constant::FILENAME, vClient);
                vClient = FileHandler::loadDataFromFile(Constant::FILENAME);
                std::cout << "Client deleted successfully." << std::endl;
                return true;
            }
            else
            {
                std::cout << "Client not deleted." << std::endl;
                return false;
            }
        }
    }
    else
    {
        std::cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!" << std::endl;
        return false;
    }

    return false;
}

bool Client::UpdateClientByAccountNumber(std::string accountNumber, std::vector<Client> &vClients)
{

    Client client;
    char Answer = 'n';

    if (findClientByAccountNumber(accountNumber, vClients, client))
    {

        DisplayClient::displayClientAccount(client);
        char choice = InputString::readChoice("Are you sure you want to update this client? (Y/N) ");
        if (Enums::isContinue(choice) == ChoiceStatus::YES)
        {
            for (Client &C : vClients)
            {
                if (C.accountNumber == accountNumber)
                {
                    C = changeClientRecord(accountNumber);
                    break;
                }
            }

            FileHandler::saveDataToFile(Constant::FILENAME, vClients);

            std::cout << "\n\nClient Updated Successfully.";
            return true;
        }
    }
    else
    {
        std::cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!" << std::endl;
        return false;
    }
    return false;
}

#include "FileHandler.hpp"
#include <client.hpp>
#include <fstream>

void FileHandler::addDataLineToFile(std::string fileName, std::string dataLine)
{
    std::fstream myFile(fileName, std::ios::out | std::ios::app);
    if (myFile.is_open())
    {
        myFile << dataLine << std::endl;
        myFile.close();
    }
}

std::vector<Client> FileHandler::loadDataFromFile(std::string fileName)
{
    std::vector<Client> Clients;

    std::fstream myFile;
    myFile.open(fileName, std::ios::in); // read Mode

    if (myFile.is_open())
    {

        std::string Line;
        Client Client;

        while (getline(myFile, Line))
        {

            Client = Client.convertLineToRecord(Line);

            Clients.push_back(Client);
        }

        myFile.close();
    }

    return Clients;
}

std::vector<Client> FileHandler::saveDataToFile(std::string fileName, std::vector<Client> vClient)
{
    std::fstream myFile(fileName, std::ios::out); // overwrite
    std::string dataLine;

    if (myFile.is_open())
    {
        for (Client &client : vClient)
        {
            if (client.markedForDeletion == false)
            {
                // we only write records that are not marked for delete.
                dataLine = client.convertRecordToLine(client);
                myFile << dataLine << std::endl;
            }
        }
        myFile.close();
    }
    return vClient;
}
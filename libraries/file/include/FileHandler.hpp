#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <client.hpp>
#include <constant.hpp>
#include <fstream>
#include <string>
#include <vector>

namespace FileHandler
{
	void addDataLineToFile(std::string fileName, std::string dataLine);

	std::vector<Client> loadDataFromFile(std::string fileName);

	std::vector<Client> saveDataToFile(std::string fileName, std::vector<Client> sClient);
};

#endif
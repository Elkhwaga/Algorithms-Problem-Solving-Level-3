#include "ArrayDisplay.hpp"
#include <iostream>
#include <iomanip>

void ArrayDisplay::displayArray(int arr[Constant::MATRIX_SIZE], int length, std::string const &message)
{
    std::cout << message << std::endl;
    if (length == 0)
    {
        std::cout << "Empty Array" << std::endl;
        return;
    }
    for (int i = 0; i < length; i++)
    {
        std::cout << std::setw(3) << arr[i] << " ";
    }
    std::cout << std::endl;
}
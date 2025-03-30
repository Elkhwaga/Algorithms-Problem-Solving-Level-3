#include "InputMath.hpp"
#include "check.hpp"
#include "utils.hpp"
#include "constant.hpp"

double InputMath::getDimension(const std::string &message)
{
    double dimension;
    bool validInput = false;
    do
    {
        std::cout << message;
        if (std::cin >> dimension)
        {
            if (Check::isValidDimension(dimension))
                validInput = true;
            else
                std::cout << "Error: Dimension must be between " << Constant::MIN_LENGTH << " and " << Constant::MAX_LENGTH << " units.\n";
        }
        else
        {
            Utils::clearInputBuffer();
            std::cout << "Error: Invalid input. Please enter a valid number.\n";
        }
    } while (!validInput);
    return dimension;
}
#include "display.hpp"
#include <iostream>

void Display::displayWelcomeMessage(const std::string &message)
{
    std::cout << message << std::endl;
}

void Display::displayGoodbyeMessage(const std::string &message)
{
    std::cout << message << std::endl;
}

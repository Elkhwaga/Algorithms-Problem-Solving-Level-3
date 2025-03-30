#include "InputNumber.hpp"
#include "DisplayMath.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to fibonacci series");

    int number = InputNumber::readNumberInRange("Please enter a number: ", 2, 100);
    DisplayMath::printFibonacciUsingLoop(number);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
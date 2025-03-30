#include "DisplayMath.hpp"
#include "display.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to fibonacci series with recursion");

    DisplayMath::fibonacci(10, 0, 1);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
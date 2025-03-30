#include "DisplayMath.hpp"
#include <iostream>

void DisplayMath::printFibonacciUsingLoop(short number)
{
    int febNumber = 0, prev1 = 1, prev2 = 1;
    std::cout << prev1 << " " << prev2 << " ";

    for (int i = 3; i <= number; i++)
    {
        febNumber = prev1 + prev2;
        prev1 = prev2;
        prev2 = febNumber;
        std::cout << febNumber << " ";
    }
}

void DisplayMath::fibonacci(int n, int a, int b)
{
    int febNumber = 0;
    if (n > 0)
    {
        febNumber = a + b;
        b = a;
        a = febNumber;
        std::cout << febNumber << " ";
        fibonacci(n - 1, a, b);
    }
}

#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <iostream>
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to random matrix.");

    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
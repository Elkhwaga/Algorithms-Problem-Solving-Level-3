#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "ArrayDisplay.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

void displayResult(int arrIntersected[Constant::MATRIX_SIZE], int size)
{
    if (size > 0)
    {
        ArrayDisplay::displayArray(arrIntersected, size, "Intersected numbers:");
    }
    else
    {
        std::cout << "No, it's not there." << std::endl;
    }
}

int main()
{
    Display::displayWelcomeMessage("Welcome to intersected numbers in matrices");
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        arrIntersected[Constant::MATRIX_SIZE],
        size = 0;

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix 1:");

    Matrix::fillMatrixRandom(matrix2);
    DisplayMatrix::displayMatrix(matrix2, "Matrix 2:");

    Matrix::fillIntersectedNumbers(matrix, matrix2, arrIntersected, size);

    displayResult(arrIntersected, size);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
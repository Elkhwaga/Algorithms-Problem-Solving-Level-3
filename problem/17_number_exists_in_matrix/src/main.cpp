#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include "InputNumber.hpp"
#include <ctime>

void displayResult(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number)
{
    (CheckMatrix::isExistsNumberInMatrix(matrix, number))
        ? std::cout << "Yes, it's there."
        : std::cout << "No, it's not there.";
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], number;

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    number = InputNumber::readPositiveNumber("Please enter a number to check: ");

    displayResult(matrix, number);

    return 0;
}
#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to sum each row in matrix in array");

    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        matrixSum[Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    Matrix::fillMatrixSum(matrix, matrixSum);
    DisplayMatrix::displayRowSumArray(matrix, matrixSum);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
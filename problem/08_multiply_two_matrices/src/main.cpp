#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to multiply two matrices");

    srand((unsigned)time(NULL));

    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        matrix3[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix1);
    Matrix::fillMatrixRandom(matrix2);

    Matrix::multiplyMatrices(matrix1, matrix2, matrix3);

    DisplayMatrix::displayMatrix(matrix1, "Matrix 1:", true);
    DisplayMatrix::displayMatrix(matrix2, "Matrix 2:", true);
    DisplayMatrix::displayMatrix(matrix3, "Results:", true);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
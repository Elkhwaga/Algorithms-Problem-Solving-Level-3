#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to sum each row in matrix");

    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    DisplayMatrix::displayRowSumMatrix(matrix);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
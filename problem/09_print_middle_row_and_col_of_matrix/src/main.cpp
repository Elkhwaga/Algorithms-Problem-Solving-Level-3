#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "ArrayDisplay.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to print middle row and col of matrix");

    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        middleRow[Constant::MATRIX_SIZE],
        middleCol[Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    Matrix::getMiddleRowOfMatrix(matrix, middleRow);
    Matrix::getMiddleColOfMatrix(matrix, middleCol);

    ArrayDisplay::displayArray(middleRow, Constant::MATRIX_SIZE, "Middle Row Of Matrix Is:");
    ArrayDisplay::displayArray(middleCol, Constant::MATRIX_SIZE, "Middle Col Of Matrix Is:");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
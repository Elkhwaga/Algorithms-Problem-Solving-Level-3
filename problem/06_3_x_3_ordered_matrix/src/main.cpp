#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to 3x3 ordered matrix");

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixOrdered(matrix);
    DisplayMatrix::displayMatrix(matrix, "The following is a 3x3 ordered matrix: ");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

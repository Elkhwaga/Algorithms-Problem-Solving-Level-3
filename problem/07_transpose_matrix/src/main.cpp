#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"

int main()
{
    Display::displayWelcomeMessage("Welcome to transpose matrix");

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        transposeMatrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixOrdered(matrix);

    DisplayMatrix::displayMatrix(matrix, "The following is a 3x3 ordered matrix: ");

    Matrix::fillTransposeMatrix(matrix, transposeMatrix);

    DisplayMatrix::displayMatrix(transposeMatrix, "The following is the transposed matrix:");

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

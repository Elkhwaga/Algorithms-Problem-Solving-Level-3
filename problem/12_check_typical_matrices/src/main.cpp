#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to check matrices typicality");

    srand((unsigned)time(NULL));

    // Demo with random matrices
    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];
    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix1);
    DisplayMatrix::displayMatrix(matrix1, "\nGenerating first matrix:");

    Matrix::fillMatrixRandom(matrix2);
    DisplayMatrix::displayMatrix(matrix2, "\nGenerating second matrix:");

    (CheckMatrix::isMatricesTypical(matrix1, matrix2))
        ? std::cout << "\nThe matrices are typical." << std::endl
        : std::cout << "\nThe matrices are not typical." << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
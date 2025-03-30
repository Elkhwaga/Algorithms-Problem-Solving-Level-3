#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to sum of matrix");

    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE];

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    std::cout << "Sum Of Matrix Is: " << Matrix::sumMatrix(matrix);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
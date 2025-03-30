#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

int main()
{
    Display::displayWelcomeMessage("Welcome to min and max number in matrix");

    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], number;

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    std::cout << "Min Number Is: " << Matrix::minNumberInMatrix(matrix) << std::endl;
    std::cout << "Max Number Is: " << Matrix::maxNumberInMatrix(matrix) << std::endl;

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

void displayResult(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    (CheckMatrix::isPalindromeMatrix(matrix))
        ? std::cout << "Yes, Matrix is palindrome" << std::endl
        : std::cout << "No, Matrix is not palindrome" << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to palindrome matrix");
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
            {1, 2, 1},
            {5, 5, 5},
            {7, 3, 7}};

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");
    displayResult(matrix);

    DisplayMatrix::displayMatrix(matrix2, "Matrix 2:");
    displayResult(matrix2);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
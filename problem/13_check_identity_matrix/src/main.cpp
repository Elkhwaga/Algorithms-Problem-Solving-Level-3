#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

void displayResult(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    (CheckMatrix::isIdentityMatrix(matrix))
        ? std::cout << "\nThe matrices are identity." << std::endl
        : std::cout << "\nThe matrices are not identity." << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to check matrices identity");

    srand((unsigned)time(NULL));

    // Demo with random matrices
    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};

    DisplayMatrix::displayMatrix(matrix1, "\nGenerating first matrix:");
    displayResult(matrix1);

    DisplayMatrix::displayMatrix(matrix2, "\nGenerating second matrix:");
    displayResult(matrix2);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
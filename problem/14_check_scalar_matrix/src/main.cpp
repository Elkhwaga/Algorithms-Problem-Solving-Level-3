#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"

void displayResult(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    (CheckMatrix::isScalarMatrix(matrix))
        ? std::cout << "\nYES: It is a scalar matrix." << std::endl
        : std::cout << "\nNO: It is not a scalar matrix." << std::endl;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to check scalar matrix");
    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {5, 0, 0},
        {0, 5, 0},
        {0, 0, 5}};

    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {5, 1, 1},
        {1, 5, 1},
        {1, 1, 5}};

    DisplayMatrix::displayMatrix(matrix, "Matrix 1:");
    displayResult(matrix);

    DisplayMatrix::displayMatrix(matrix2, "Matrix 2:");
    displayResult(matrix2);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}

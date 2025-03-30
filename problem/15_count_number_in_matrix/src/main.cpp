#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "InputNumber.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

void displayResult(
    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number)
{
    int count = CheckMatrix::checkNumberAndCountInMatrix(matrix, number);

    if (count == 0)
    {
        std::cout << "Not found number is " << number << " in matrix." << std::endl;
        return;
    }

    std::cout << "Number " << number << " count in matrix is " << count;
}

int main()
{
    Display::displayWelcomeMessage("Welcome to count number in matrix");

    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], number;

    Matrix::fillMatrixRandom(matrix);
    DisplayMatrix::displayMatrix(matrix, "Matrix:");

    number = InputNumber::readPositiveNumber("Please enter a number to check: ");

    displayResult(matrix, number);

    Display::displayGoodbyeMessage("Goodbye!");

    return 0;
}
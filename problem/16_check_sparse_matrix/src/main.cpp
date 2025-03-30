#include "matrix.hpp"
#include "DisplayMatrix.hpp"
#include "CheckMatrix.hpp"
#include "display.hpp"
#include "constant.hpp"
#include <ctime>

void displayResult(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    (CheckMatrix::isSparseMatrix(matrix))
        ? std::cout << "Yes, is sparse matrix." << std::endl
        : std::cout << "No, is not sparse matrix." << std::endl;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {0, 0, 1},
        {0, 0, 2},
        {0, 0, 3}};

    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE] = {
        {0, 2, 1},
        {0, 3, 2},
        {0, 0, 3}};

    DisplayMatrix::displayMatrix(matrix, "Matrix:");
    displayResult(matrix);

    DisplayMatrix::displayMatrix(matrix2, "Matrix 2:");
    displayResult(matrix2);
    return 0;
}
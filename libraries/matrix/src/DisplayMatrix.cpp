#include "DisplayMatrix.hpp"
#include "matrix.hpp"
#include <iostream>
#include <iomanip>

void DisplayMatrix::displayMatrix(
    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    const std::string &message, bool displayFormat)
{
    std::cout << message << std::endl;
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (displayFormat)
            {
                printf("%0*d  ", 2, matrix[i][j]);
            }
            std::cout << std::setw(3) << matrix[i][j] << " "; // Using tab for better spacing
        }
        std::cout << std::endl;
    }
}

void DisplayMatrix::displayRowSumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    {
        std::cout << "\nThe following are the sum of each row in the matrix:\n";

        for (int i = 0; i < Constant::MATRIX_SIZE; i++)
        {
            std::cout << " Row " << i + 1 << " Sum = " << Matrix::rowSum(matrix, i) << std::endl;
        }
    }
}

void DisplayMatrix::displayColumnSumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    std::cout << "\nThe following are the sum of each column in the matrix:\n";

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        std::cout << " Row " << i + 1 << " Sum = " << Matrix::colSum(matrix, i) << std::endl;
    }
}

void DisplayMatrix::displayColumnSumArray(
    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int matrixSum[Constant::MATRIX_SIZE])
{
    std::cout << "\nThe following are the sum of each column in the matrix:\n";

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {

        std::cout << " Column " << i + 1 << " Sum = " << Matrix::colSum(matrix, i) << std::endl;
    }
}

void DisplayMatrix::displayRowSumArray(
    int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int matrixSum[Constant::MATRIX_SIZE])
{
    std::cout << "\nThe following are the sum of each row in the matrix:\n";

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {

        std::cout << " Row " << i + 1 << " Sum = " << Matrix::rowSum(matrix, i) << std::endl;
    }
}
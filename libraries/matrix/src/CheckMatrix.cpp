#include "CheckMatrix.hpp"
#include "matrix.hpp"

bool CheckMatrix::isMatricesEqual(
    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{

    return Matrix::sumMatrix(matrix1) == Matrix::sumMatrix(matrix2);
}

bool CheckMatrix::isMatricesTypical(
    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

bool CheckMatrix::isIdentityMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (i == j && matrix[i][j] != 1)
                return false;

            if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

bool CheckMatrix::isScalarMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    // Get the value from first diagonal element
    int diagonalValue = matrix[0][0];

    // Check if all diagonal elements are equal
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        if (matrix[i][i] != diagonalValue)
            return false;
    }

    // Check if all non-diagonal elements are 0
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (i != j && matrix[i][j] != 0)
                return false;
        }
    }

    return true;
}

bool CheckMatrix::isSparseMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    return Matrix::countNumberInMatrix(matrix, 0) > (Constant::MATRIX_SIZE * Constant::MATRIX_SIZE) / 2; // (Constant::MATRIX_SIZE * Constant::MATRIX_SIZE) / 2 = 4 (4/9 = 0.444444)
}

bool CheckMatrix::isExistsNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number)
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (matrix[i][j] == number)
                return true;
        }
    }

    return false;
}

bool CheckMatrix::isPalindromeMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE / 2; j++)
        {
            if (matrix[i][j] != matrix[i][Constant::MATRIX_SIZE - 1 - j])
                return false;
        }
    }
    return true;
}

int CheckMatrix::checkNumberAndCountInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number)
{
    int counter = 0;

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (matrix[i][j] == number)
                counter++;
        }
    }

    return counter;
}
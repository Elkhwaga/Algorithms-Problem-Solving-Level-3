#include "matrix.hpp"
#include "CheckMatrix.hpp"
#include "InputNumber.hpp"
#include <iomanip>

void Matrix::fillMatrixRandom(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            matrix[i][j] = InputNumber::randomNumber(Constant::MIN_RANDOM, Constant::MAX_RANDOM);
        }
    }
}

void Matrix::fillMatrixOrdered(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    int counter = 1;
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            matrix[i][j] = counter;
            counter++;
        }
    }
}

void Matrix::fillMatrixSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int matrixSum[Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        matrixSum[i] = Matrix::rowSum(matrix, i);
    }
}

void Matrix::fillTransposeMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int transposeMatrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
            transposeMatrix[j][i] = matrix[i][j];
    }
}

void Matrix::fillIntersectedNumbers(
    int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
    int arrIntersected[Constant::MATRIX_SIZE],
    int &size)
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (CheckMatrix::isExistsNumberInMatrix(matrix1, matrix2[i][j]))
            {
                arrIntersected[i] = matrix2[i][j];
                size++;
            }
        }
    }
}

void Matrix::multiplyMatrices(int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int matrix3[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}

int Matrix::rowSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int row)
{
    int sum = 0;
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        sum += matrix[row][i];
    }
    return sum;
}

int Matrix::colSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int col)
{
    int sum = 0;
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        sum += matrix[i][col];
    }
    return sum;
}

int Matrix::sumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    int sum = 0;

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int Matrix::countNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number)
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

int Matrix::minNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    short minNumber = matrix[0][0];

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (matrix[i][j] < minNumber)
                minNumber = matrix[i][j];
        }
    }

    return minNumber;
}

int Matrix::maxNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE])
{
    short maxNumber = matrix[0][0];

    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        for (int j = 0; j < Constant::MATRIX_SIZE; j++)
        {
            if (matrix[i][j] > maxNumber)
                maxNumber = matrix[i][j];
        }
    }

    return maxNumber;
}

void Matrix::getMiddleRowOfMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int middleRow[Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        middleRow[i] = matrix[Constant::MATRIX_SIZE / 2][i];
    }
}

void Matrix::getMiddleColOfMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int middleCol[Constant::MATRIX_SIZE])
{
    for (int i = 0; i < Constant::MATRIX_SIZE; i++)
    {
        middleCol[i] = matrix[i][Constant::MATRIX_SIZE / 2];
    }
}

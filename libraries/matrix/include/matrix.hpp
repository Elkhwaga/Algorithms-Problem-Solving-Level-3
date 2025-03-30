#ifndef MATRIX_HPP
#define MATRIX_HPP
#include "constant.hpp"

namespace Matrix
{
    void fillMatrixRandom(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void fillMatrixOrdered(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void fillMatrixSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int matrixSum[Constant::MATRIX_SIZE]);

    void fillTransposeMatrix(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int transposeMatrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void fillIntersectedNumbers(
        int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int arrIntersected[Constant::MATRIX_SIZE],
        int &size);

    void multiplyMatrices(
        int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrix3[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    int rowSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int row);

    int colSum(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int col);

    int sumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    int countNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number);

    int minNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    int maxNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void getMiddleRowOfMatrix(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int middleRow[Constant::MATRIX_SIZE]);

    void getMiddleColOfMatrix(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int middleCol[Constant::MATRIX_SIZE]);

}

#endif
#ifndef CHECKMATRIX_HPP
#define CHECKMATRIX_HPP
#include "constant.hpp"

namespace CheckMatrix
{
    bool isMatricesEqual(
        int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    bool isMatricesTypical(
        int matrix1[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrix2[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    bool isIdentityMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    bool isScalarMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    bool isSparseMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    bool isExistsNumberInMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], int number);

    bool isPalindromeMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    int checkNumberAndCountInMatrix(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int number);
}

#endif
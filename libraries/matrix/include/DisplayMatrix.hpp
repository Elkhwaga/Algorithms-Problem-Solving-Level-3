#ifndef DISPLAYMATRIX_HPP
#define DISPLAYMATRIX_HPP
#include "constant.hpp"

namespace DisplayMatrix
{
    void displayMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE], const std::string &message, bool displayFormat = false);

    void displayRowSumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void displayColumnSumMatrix(int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE]);

    void displayColumnSumArray(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrixSum[Constant::MATRIX_SIZE]);

    void displayRowSumArray(
        int matrix[Constant::MATRIX_SIZE][Constant::MATRIX_SIZE],
        int matrixSum[Constant::MATRIX_SIZE]);
}

#endif
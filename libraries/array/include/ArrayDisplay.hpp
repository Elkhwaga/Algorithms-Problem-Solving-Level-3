#ifndef ARRAY_DISPLAY_HPP
#define ARRAY_DISPLAY_HPP

#include "constant.hpp"
#include <string>

namespace ArrayDisplay
{
    void displayArray(
        int arr[Constant::MATRIX_SIZE], int length, std::string const &message);
}

#endif
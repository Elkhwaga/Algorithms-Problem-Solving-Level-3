#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>

namespace Array
{
    static void createArrayRandom(int arr[], int size, bool allowNegative = false);

    static void copyArrayReverse(int arr[], int arr2[], int size);

    static void addArrayElement(int arr[], int &length, int element);
}

#endif
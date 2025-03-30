#include "array.hpp"
#include "constant.hpp"
#include "InputNumber.hpp"
#include <iostream>
#include <iomanip>

void Array::createArrayRandom(int arr[], int size, bool allowNegative)
{
    if (allowNegative)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = InputNumber::randomNumber(-100, 100);
        }
        return;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = InputNumber::randomNumber(1, 100);
    }
}

void Array::copyArrayReverse(int arr[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[size - i - 1];
    }
}

void Array::addArrayElement(int arr[], int &length, int element)
{
    arr[length] = element;
    length++;
}

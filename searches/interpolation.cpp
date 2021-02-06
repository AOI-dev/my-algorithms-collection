//
// Created by Олег Игоревич on 05.02.2021.
//
#include "..\prototypes.h"
#include "..\libs.h"

int interpolation(array_t* a, int n, array_t key)
{
    int left = 0;  // левая граница поиска (будем считать, что элементы массива нумеруются с нуля)
    int right = n - 1;  // правая граница поиска

    while (a[left] < key && key < a[right]) {
        int mid = left + (key - a[left]) * (right - left) / (a[right] - a[left]);
        // индекс элемента, с которым будем проводить сравнение
        if (a[mid] < key)
            left = mid + 1;
        else if (a[mid] > key)
            right = mid - 1;
        else
        return mid;
    }

    if (a[left] == key)
        return left;
    else if (a[right] == key)
        return right;
    else
        return -1; // если такого элемента в массиве нет
}
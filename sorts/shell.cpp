//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\libs.h"

template<typename T> void shellSort(T* array, int n)
{
    int gap, i, j;

    for (gap = n/2; gap>0; gap /= 2) {
        for (i = gap; i<n; i++)
            for (j = i-gap; j>=0 && array[j]>array[j+gap]; j -= gap) {
                std::swap(array[j], array[j+gap]);
            }
    }
}

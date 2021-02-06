//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\prototypes.h"
#include "..\libs.h"

void insertionSort(array_t* array, int n)
{
    for (int i = 1; i<n; i++) {
        for (int j = i; j>0 && array[j-1]>array[j]; j--) {
            std::swap(array[j], array[j-1]);
        }
    }
}
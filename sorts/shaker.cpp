//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\prototypes.h"
#include "..\libs.h"

void shakerSort(array_t* array, int n)
{
    int left = 0;
    int right = n-1;
    do {
        for (int i = left; i<right; i++) {
            if (array[i]>array[i+1]) {
                std::swap(array[i], array[i+1]);
            }
        }
        right--;
        for (int i = right; i>left; i--) {
            if (array[i]<array[i-1]) {
                std::swap(array[i], array[i-1]);
            }

        }
        left++;
    }
    while (left<right);
}
//
// Created by Олег Игоревич on 25.11.2020.
//
#include "..\prototypes.h"
#include "..\libs.h"

void selectionSort_1(array_t* array, int n)
{
    for (size_t i = 0; i<=n-2; i++) {
        for (size_t j = i+1; j<=n-1; j++) {
            if (array[i]>array[j])
                std::swap(array[i], array[j]);
        }
    }
}

void selectionSort_2(array_t* array, int n)
{
    int min;
    for (int i = 0; i<=n-2; i++) {
        min = i;
        for (int j = i+1; j<=n-1; j++) {
            if (array[j]<array[min]) {
                std::swap(array[i], array[min]);
            }
        }
    }
}

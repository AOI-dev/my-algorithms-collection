//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\libs.h"

template<typename T>void selectionSort_1(T* array, int n)
{
    for (size_t i = 0; i<=n-2; i++) {
        for (size_t j = i+1; j<=n-1; j++) {
            if (array[i]>array[j])
                std::swap(array[i], array[j]);
        }
    }
}

template<typename T> void selectionSort_2(T* array, int n)
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

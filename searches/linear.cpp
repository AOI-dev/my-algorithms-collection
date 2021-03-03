//
// Created by Олег Игоревич on 05.02.2021.
//

#include "..\libs.h"

template<typename T> int linear(T* array, int n, T key)
{
    for (int i = 0; i<n; ++i) {
        if (array[i]==key)
            return i;
    }
}
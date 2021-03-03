//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\libs.h"

template <typename T> void quickSort(T* array, int l, int r)
{
    if (l<r) {
        T q = partition(array, l, r);
        quickSort(array, l, q);
        quickSort(array, q+1, r);
    }
}

template <typename T> int partition(T* array, int l, int r)
{
    T v = array[(l+r)/2];
    int i = l;
    int j = r;
    while (i<=j) {
        while (array[i]<v)
            i++;
        while (array[j]>v)
            j--;
        if (i>=j)
            break;
        std::swap(array[i++], array[j--]);
    }
    return j;
}
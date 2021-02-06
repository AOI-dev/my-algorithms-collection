//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\prototypes.h"
#include "..\libs.h"

void quickSort(array_t* array, int l, int r)
{
    if (l<r) {
        int q = partition(array, l, r);
        quickSort(array, l, q);
        quickSort(array, q+1, r);
    }
}

int partition(array_t* array, int l, int r)
{
    int v = array[(l+r)/2];
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
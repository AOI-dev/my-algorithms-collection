//
// Created by Îëåã Èãîğåâè÷ on 25.11.2020.
//

#include "..\prototypes.h"
#include "..\libs.h"

void shellSort(array_t* array, int n)
{
    int gap, i, j;

    for (gap = n/2; gap>0; gap /= 2) {
        for (i = gap; i<n; i++)
            for (j = i-gap; j>=0 && array[j]>array[j+gap]; j -= gap) {
                std::swap(array[j], array[j+gap]);
            }
    }
}

//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\prototypes.h"

void merge(array_t* array, int l, int m, int r)
{
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m-l+1;
    nr = r-m;
    array_t larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for (i = 0; i<nl; i++)
        larr[i] = array[l+i];
    for (j = 0; j<nr; j++)
        rarr[j] = array[m+1+j];
    i = 0;
    j = 0;
    k = l;
    //marge temp arrays to real array
    while (i<nl && j<nr) {
        if (larr[i]<=rarr[j]) {
            array[k] = larr[i];
            i++;
        }
        else {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i<nl) {       //extra element in left array
        array[k] = larr[i];
        i++;
        k++;
    }
    while (j<nr) {     //extra element in right array
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(array_t* array, int l, int r)
{

    int m;
    if (l<r) {
        m = l+(r-l)/2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }

}


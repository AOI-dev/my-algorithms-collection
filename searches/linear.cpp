//
// Created by Олег Игоревич on 05.02.2021.
//

#include "..\prototypes.h"
#include "..\libs.h"

int linear(array_t* array, int n, array_t requested_elem)
{
    for (int i = 0; i<n; ++i) {
        if (array[i]==requested_elem)
            return i;
    }
}
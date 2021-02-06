//
// Created by Олег Игоревич on 25.11.2020.
//

#include "prototypes.h"

void swap(array_t * a, array_t * b)
{
    array_t t = *b;
    *b = *a;
    *a = t;
};
//
// Created by Олег Игоревич on 25.11.2020.
//

#ifndef ALGORITHMS_PROTOTYPES_H
#define ALGORITHMS_PROTOTYPES_H
#include "libs.h"
#include "sorts/selection.cpp"
#include "sorts/insertion.cpp"
#include "sorts/merge.cpp"
#include "sorts/quick.cpp"
#include "sorts/shell.cpp"
#include "sorts/heap.cpp"
//void swap(array_t * a, array_t * b);
#include "searches/linear.cpp"
#include "searches/binary.cpp"
#include "searches/interpolation.cpp"
#include "searches/fibonacci.cpp"

std::vector<int> kmp(std::string, std::string);
void euclidean_algorithm();
void eratosthenes_sieve();

#endif //ALGORITHMS_PROTOTYPES_H

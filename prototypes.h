//
// Created by Олег Игоревич on 25.11.2020.
//

#ifndef ALGORITHMS_PROTOTYPES_H
#define ALGORITHMS_PROTOTYPES_H
#include "libs.h"
typedef int array_t;
//void swap(array_t * a, array_t * b);
void selectionSort_1(array_t* array, int n);
void selectionSort_2(array_t* array, int n);
void insertionSort(array_t* array, int n);
void mergeSort(array_t *array, int l, int r);
void quickSort(array_t *array, int l, int r);
int partition(array_t *array, int l, int r);
void shellSort(array_t* array, int n);
void shakerSort(array_t* array, int n);
void heapify(array_t* array, int n, int i);
void heapSort(array_t* array, int n);

int linear(array_t* array, int n, array_t requested_elem);
int binary(array_t* array, int n, array_t requested_elem);
int interpolation(array_t* a, int n, array_t requested_elem);
int trie(array_t* array, int n, array_t requested_elem);
int fibonacci(array_t* array, int n, array_t requested_elem);
std::vector<int> kmp(std::string, std::string);
void euclidean_algorithm();
void eratosthenes_sieve();

#endif //ALGORITHMS_PROTOTYPES_H

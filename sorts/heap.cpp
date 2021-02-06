//
// Created by Олег Игоревич on 25.11.2020.
//

#include "..\prototypes.h"
#include "..\libs.h"

void heapify(array_t* array, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i+1; // left = 2*i + 1
    int r = 2*i+2; // right = 2*i + 2
    // If left child is larger than root
    if (l<n && array[l]>array[largest])
        largest = l;
    // If right child is larger than largest so far
    if (r<n && array[r]>array[largest])
        largest = r;
    // If largest is not root
    if (largest!=i) {
        std::swap(array[i], array[largest]);
        // Recursively heapify the affected sub-tree
        heapify(array, n, largest);
    }
}

void heapSort(array_t* array, int n)
{
    // Build heap (rearrange array)
    for (int i = n/2-1; i>=0; i--)
        heapify(array, n, i);
    // One by one extract an element from heap
    for (int i = n-1; i>0; i--) {
        // Move current root to end
        std::swap(array[0], array[i]);
        // call max heapify on the reduced heap
        heapify(array, i, 0);
    }
}
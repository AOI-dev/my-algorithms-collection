//
// Created by Олег Игоревич on 05.02.2021.
//

#include "..\libs.h"
//моя версия

//int binary(array_t* sorted_array, int n, array_t requested_elem)
//{
//    for (int i = n/2, k = n/4; k>0; k /= 2) {
//        array_t m = sorted_array[i];
//        if (requested_elem==m)
//            return i;
//        if (requested_elem>m) {
//            i += k;
//        } else {
//            i -= k;
//        }
//    }
//    return -1;
//}

//версия циклом while
template<typename T> T binary(T* a, int n, T key) {
    int l = -1;
    int r = n;
    while (l < r - 1) {
        int m = (l+r)/2;
        if (a[m]<key)
            l = m;
        else
            r = m;
    }
    return r;
 }

//
// Created by Олег Игоревич on 25.11.2020.
//

#ifndef ALGORITHMS_ERATOSTHENES_SIEVE_CPP
#define ALGORITHMS_ERATOSTHENES_SIEVE_CPP

#include "libs.h"
#include "prototypes.h"

void eratosthenes_sieve()
{
    int n;
    bool sieve[n+1];
    int x;
    while (x*x<=n) {
        if (sieve[x])
            for (int y = 0; y<=n; y += x)
                sieve[y] = false;
        x++;
    }

}

#endif //ALGORITHMS_ERATOSTHENES_SIEVE_CPP

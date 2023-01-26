#include "propriedadesnumericas.h"

int ehPar(long long n) {
    printf("\n ehPar", n);
    return 1 - n % 2;
}

int ehPrimo(long long n) {
    printf("\n ehPrimo", n);
    long long i;
    for(i = 2; i < (n / 2); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int ehQuadradoPerfeito(long long n) {
    printf("\n ehQuadradoPerfeito", n);
    long long i;
    for(i = 0; (i * i) < n; i++);
    if((i * i) == n)
        return 1;
    return 0;
}

int ehCuboPerfeito(long long n) {
    printf("\n ehCuboPerfeito", n);
    long long i;
    for(i = 0; (i * i * i) < n; i++);
    if((i * i * i) == n)
        return 1;
    return 0;
}

int ehFibonacci(long long n) {
    printf("\n ehFibonacci", n);
    long long a0 = 0;
    long long a1 = 1;
    long long res = 1;
    while(res < n){
        res = a0 + a1;
        a0 = a1;
        a1 = res;
    }
    
    if(res == n)
        return 1;
    return 0;
}

int ehFatorial(long long n) {
    printf("\n ehFatorial", n);
    long long i, f;
    for(i = 1, f = 1; f < n; i++, f *= i);
    if(f == n)
        return 1;
    return 0;
}
#include "vetoraleatorio.h"

long long * criaVetorAleatorio(int semente, int tamanho) {
    printf("\ncriaVetorAleatorio\n");
    long long * res;

    res = malloc(tamanho * sizeof(long long));
    int i, r;
    srand(semente);
    for(i = 0; i < tamanho; i++){
        r = rand();
        res[i] = (long long) r * r;
    }
    return res;
}
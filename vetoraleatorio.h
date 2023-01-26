#ifndef _VETORALEATORIO_H_
#define _VETORALEATORIO_H_

#include <stdio.h>
#include <stdlib.h>

/*!
 * \brief Função: criaVetorAleatorio
 * Cria um vetor de números do tipo long long aleatórios, utiliza as funções
 * rand() e srand() de stdlib.h. Recebe a semente que servirá de parâmetro para
 * srand() e o tamanho do vetor a ser alocado.
 *
 * \param semente 1: (int) número que servirá como parâmetro para a função srand()
 * \param tamanho 2: (int) tamanho do vetor a ser alocado, assim como a quantidade de números aleatórios criados
 * \return retorno: (long long *) retorna um vetor contendo números aleatórios do tipo long long.
*/
long long * criaVetorAleatorio(int semente, int tamanho);


#endif
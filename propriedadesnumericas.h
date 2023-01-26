#ifndef _PROPRIEDADESNUMERICAS_H_
#define _PROPRIEDADESNUMERICAS_H_

#include <stdio.h>
#include <stdlib.h>

/*!
 * \brief Função: ehPar
 * Verifica se um número é par ou não. Faz isso com base no resto da
 * divisão do número por 2. Se esse resto for zero, é porque é par. Se
 * for 1, é porque não é par.
 *
 * \param n 1: (long long) número que vai ter a paridade testada
 * \return retorno: (int) 1 se for par. 0 se não for par.
*/
int ehPar(long long n);

/*!
 * \brief Função: ehPrimo
 * Verifica se um número n é primo ou não. Faz isso testando todos os 
 * divisores inteiros  de 0 até n/2. Se não houver nenhum número que divide n
 * sem resto, então o número n é primo, caso contrário não é primo
 *
 * \param n 1: (long long) número que vai ser testado se é primo
 * \return retorno: (int) 1 se for primo. 0 se não for primo.
 */
int ehPrimo(long long n);

/*!
 * \brief Função: ehQuadradoPerfeito
 * Verifica se um número n é Quadrado Perfeito ou não. Faz isso testando
 * todos os números inteiros até que o quadrado de um número seja maior ou igual 
 * ao número n, se o quadrado for igual a n, significa que n é um quadrado perfeito,
 * caso contrário, se o quadrado for maior que n, significa que n não é um quadrado perfeito.
 *
 * \param n 1: (long long) número que vai ser testado se é um quadrado perfeito
 * \return retorno: (int) 1 se for um quadrado perfeito. 0 se não for um quadrado perfeito.
 */
int ehQuadradoPerfeito(long long n);

/*!
 * \brief Função: ehCuboPerfeito
 * Verifica se um número n é Cubo Perfeito ou não. Faz isso testando
 * todos os números inteiros até que o Cubo de um número seja maior ou igual 
 * ao número n, se o Cubo for igual a n, significa que n é um Cubo perfeito,
 * caso contrário, se o Cubo for maior que n, significa que n não é um Cubo perfeito.
 *
 * \param n 1: (long long) número que vai ser testado se é um Cubo perfeito
 * \return retorno: (int) 1 se for um Cubo perfeito. 0 se não for um Cubo perfeito.
 */
int ehCuboPerfeito(long long n);

/*!
 * \brief Função: ehFibonacci
 * Verifica se um número n é Fibonacci ou não. Faz isso testando todos os números de Fibonacci
 * até encontrar um número maior ou igual a n. Se o número encontrado for igual a n, então n é 
 * um número de Fibonacci, caso contrário, n não é um número de Fibonacci
 *
 * \param numero 1: (long long) número que vai ser testado se é um número de Fibonacci
 * \return retorno: (int) 1 se for um número de Fibonacci. 0 se não for um número de Fibonacci.
 */
int ehFibonacci(long long n);

/*!
 * \brief Função: ehFatorial
 * Verifica se um número n é Fatorial ou não. Faz isso testando todos os números Fatoriais
 * até encontrar um número maior ou igual a n. Se o número encontrado for igual a n, então n é 
 * um número Fatorial, caso contrário, n não é um número Fatorial
 *
 * \param numero 1: (long long) número que vai ser testado se é um número Fatorial
 * \return retorno: (int) 1 se for um número Fatorial. 0 se não for um número Fatorial.
 */
int ehFatorial(long long n);

#endif
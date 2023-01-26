#include "propriedadesnumericas.h"
#include "vetoraleatorio.h"
#include <sys/time.h>

/*!
 * \brief Função auxiliar: t_diff
 * Recebe os struct timeval start e end e calcula a diferença em microsegundos
 * entre os dois tempos
 * 
 * \param start 1: (struct timeval) Armazena os valores de início da contagem de tempo
 * \param end 2: (struct timeval) Armazena os valores de final da contagem de tempo
 * \return retorno: (double) Retorna o valor calculado em microsegundos
 */
double t_diff(struct timeval start, struct timeval end) {
    return (double) (end.tv_sec * 1000000 + end.tv_usec) -
    (start.tv_sec * 1000000 + start.tv_usec);
}

/*!
 * \brief Programa principal: main
 * Testa as funções ehPar(), ehPrimo(), ehQuadradoPerfeito(), ehCuboPerfeito(),
 * ehFibonacci() e ehFatorial() de propriedadesnumericas.h com os valores retornados pela função 
 * criaVetorAleatorio() de vetoraleatorio.h e pra cada valor calcula a frequência que cada função retornou 1 e 
 * o tempo médio, mínimo e máximo que cada função testada gastou utilizando a função gettimeofday() de sys/time.h, 
 * armazena os tempos nos vetores tempos[6], min[6] e max[6]. Por fim, imprime os tempos de cada função testada.
 * 
 * \return retorno: (int) Não há verificações cuidadosas de erro nesse
 * programa. No geral vai sempre devolver zero. Claro que há situações
 * em que pode retornar outro valor para o SO, em casos em que ocorram
 * erros irrecuperáveis que façam o programa abortar a execução
 * (segfault por exemplo)
 */
int main() {
    int i, tam = 100, semente = 777;
    double tempos[6];
    long int max[6];
    long int min[6];
    int freq[6], res;

    for(i = 0; i < 6; i++){
        freq[i] = 0;
        tempos[i] = 0;
        max[i] = 0;
        min[i] = RAND_MAX;
    }
    
    struct timeval start, end;

    long long *vetor = criaVetorAleatorio(semente, tam);
    
    for(i = 0; i < tam; i++){
        printf("\n\n%lld: \n", vetor[i]);

        gettimeofday(&start, NULL);
        res = ehPar(vetor[i]);
        if(res) freq[0]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        double a = t_diff(start, end);
        tempos[0] += a;
        if(a > max[0]) max[0] = a;
        if(a < min[0]) min[0] = a;

        gettimeofday(&start, NULL);
        res = ehPrimo(vetor[i]);
        if(res) freq[1]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        a = t_diff(start, end);
        tempos[1] += a;
        if(a > max[1]) max[1] = a;
        if(a < min[1]) min[1] = a;

        gettimeofday(&start, NULL);
        res = ehQuadradoPerfeito(vetor[i]);
        if(res) freq[2]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        a = t_diff(start, end);
        tempos[2] += a;
        if(a > max[2]) max[2] = a;
        if(a < min[2]) min[2] = a;

        gettimeofday(&start, NULL);
        res = ehCuboPerfeito(vetor[i]);
        if(res) freq[3]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        a = t_diff(start, end);
        tempos[3] += a;
        if(a > max[3]) max[3] = a;
        if(a < min[3]) min[3] = a;

        gettimeofday(&start, NULL);
        res = ehFibonacci(vetor[i]);
        if(res) freq[4]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        a = t_diff(start, end);
        tempos[4] += a;
        if(a > max[4]) max[4] = a;
        if(a < min[4]) min[4] = a;

        gettimeofday(&start, NULL);
        res = ehFatorial(vetor[i]);
        if(res) freq[5]++;
        printf(" %d\n", res);
        gettimeofday(&end, NULL);
        a = t_diff(start, end);
        tempos[5] += a;
        if(a > max[5]) max[5] = a;
        if(a < min[5]) min[5] = a;

    }
    
    printf("\nehPar Média: %lf Min: %ld Max: %ld Freq: %d", tempos[0] / (double) tam, 
    min[0], max[0], freq[0]);
    printf("\nehPrimo Média: %lf Min: %ld Max: %ld Freq: %d", tempos[1] / (double) tam, 
    min[1], max[1], freq[1]);
    printf("\nehQuadradoPerfeito Média: %lf Min: %ld Max: %ld Freq: %d", tempos[2] / (double) tam, 
    min[2], max[2], freq[2]);
    printf("\nehCuboPerfeito Média: %lf Min: %ld Max: %ld Freq: %d", tempos[3] / (double) tam, 
    min[3], max[3], freq[3]);
    printf("\nehFibonacci Média: %lf Min: %ld Max: %ld Freq: %d", tempos[4] / (double) tam, 
    min[4], max[4], freq[4]);
    printf("\nehFatorial Média: %lf Min: %ld Max: %ld Freq: %d", tempos[5] / (double) tam, 
    min[5], max[5], freq[5]);

    free(vetor);
    return 0;
}
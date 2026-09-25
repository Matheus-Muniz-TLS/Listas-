/* 
-1
Questão 5: Extrair Estatistiscas
Crie uma função que varra um vetor de inteiros uma única vez e retorne três
informações simultaneamente (Devem ser apresentadas na Main).
    Assinatura: void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max,
    float *media);
    O main deve passar um vetor e os endereços das variáveis onde os resultados
    serão armazenados. Toda a varredura do vetor deve ser feita via aritmética de
    ponteiros (*(vetor + i) ou avançando um ponteiro auxiliar).
*/

#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media)
{
    int *p = vetor;
    int soma = 0;

    *min = *p;
    *max = *p;

    for (int i = 0; i < tamanho; i++)
    {
        if (*(p + i) < *min)
        {
            *min = *(p + i);
        }

        if (*(p + i) > *max)
        {
            *max = *(p + i);
        }

        soma += *(p + i);
    }

    *media = (float)soma / tamanho;
}

int main()
{
    int vetor[5] = {10, 5, 20, 8, 7};

    int min;
    int max;
    float media;

    extrair_estatisticas(vetor, 5, &min, &max, &media);

    printf("Menor: %d\n", min);
    printf("Maior: %d\n", max);
    printf("Media: %.2f\n", media);

    return 0;
}
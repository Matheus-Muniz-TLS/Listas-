/* 
Questão 7: Ordenação Simples
Implemente um algoritmo de ordenação simples (como Bubble Sort) para um vetor
de inteiros usando ponteiros.
    A lógica que inverte dois elementos de lugar não pode estar dentro da função de
    ordenação. Crie uma função auxiliar void swap(int *a, int *b).
    O algoritmo principal deve percorrer o vetor usando ponteiros, e sempre que
    dois valores precisarem ser invertidos, seus endereços devem ser enviados para a
    função swap
*/

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *vetor, int tamanho)
{
    int *fim = vetor + tamanho - 1;

    for (int *i = vetor; i < fim; i++)
    {
        for (int *j = vetor; j < fim - (i - vetor); j++)
        {
            if (*j > *(j + 1))
            {
                swap(j, j + 1);
            }
        }
    }
}

int main()
{
    int vetor[5] = {5, 2, 8, 1, 4};

    bubble_sort(vetor, 5);

    printf("Vetor ordenado: ");

    for (int *p = vetor; p < vetor + 5; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
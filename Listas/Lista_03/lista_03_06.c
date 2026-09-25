/* 
Questão 6: Buscar Subvetor
Escreva uma função que procure a ocorrência de um vetor menor dentro de um vetor
maior.
    Assinatura: int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s);
    A função deve procurar se a sequência exata de números do vetor sub existe
    dentro de vetor. Se encontrar, retorne um ponteiro apontando para o início dessa
    ocorrência no vetor original. Se não encontrar, retorne NULL.
*/

#include <stdio.h>
int* busca_subvetor(int *vetor, int tam_v, int *sub, int tam_s)
{
    int *p = vetor;
    int *fim = vetor + tam_v - tam_s;

    while (p <= fim)
    {
        int *pv = p;
        int *ps = sub;

        while (ps < sub + tam_s && *pv == *ps)
        {
            pv++;
            ps++;
        }

        if (ps == sub + tam_s)
        {
            return p;
        }

        p++;
    }

    return NULL;
}

int main()
{
    int vetor[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int sub[3] = {40, 50, 60};

    int *resultado = busca_subvetor(vetor, 8, sub, 3);

    if (resultado != NULL)
    {
        printf("Subvetor encontrado!\n");
        printf("Primeiro elemento: %d\n", *resultado);
        printf("Endereco: %p\n", (void *)resultado);
    }
    else
    {
        printf("Subvetor nao encontrado.\n");
    }

    return 0;
}
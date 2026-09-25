/* 
Questão 2: Busca em Vetor
Escreva uma função que receba um vetor de inteiros, seu tamanho e um número X
(informado pelo usuário). A função deve buscar X no vetor e retornar 
um ponteiro para
a primeira posição de memória onde X foi encontrado.
    Se X não estiver no vetor, a função deve retornar NULL.
    Apresente o resultado na main.
*/

#include <stdio.h>

int *percorrer_vetor(int vetor[], int tamanho, int x)
{   
    int *p = vetor;
    int *fim = vetor + tamanho;
    for (p = vetor; p  < fim; p++)
        {          
            if (*(p) == x)
            {
                return p;
            }
        }

    return NULL;
        
}


int main() 
    {
    int tamanho;
    printf("\nTamanho do vetor:\n");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i;
    }
    int x;
    printf("\nDigite um numero inteiro:\n");
    scanf("%d", &x);
   

    
    int *resultado = percorrer_vetor(vetor, tamanho, x);
    if (resultado != NULL)
    {
    printf("Encontrado no endereco: %p\n", (void *)resultado);
    }
    else
    {
    printf("Nao encontrado.\n");
    }

    return 0;
    }
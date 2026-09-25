/* 
Questão 8: Preenchimento do Vetor
Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do
vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.
*/

#include <stdio.h>

void aritmetica_vetor(int vetor[], int num)
{   
    int *p = vetor;

    for (int j = 0; j < 5; j++)
        {          
            *(p + j) = num;
            //printf("\nvalor: %d\n", *(p + j));
        }
}


int main() 
    {
    
    int vetor[5];
    int num = 1;
    
    aritmetica_vetor(vetor,num);

    return 0;
    }
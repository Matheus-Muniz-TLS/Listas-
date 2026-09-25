/* 
Questão 9: Impressão do Vetor
Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.
*/

#include <stdio.h>

void percorrer_vetor(int vetor[])
{   
    int *p = vetor;
    int *fim = vetor + 10;
    for (p = vetor; *p  < *fim; p++)
        {          
            printf("\nvalor: %d\n", *(p));
        }
}


int main() 
    {
    
    int vetor[10] = {10,9,8,7,6,5,4,3,2,1};

    
    percorrer_vetor(vetor);

    return 0;
    }
/* 
Questão 5: Aritmética de Ponteiros
Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro
de cada valor lido.
*/

#include <stdio.h>

int main() 
    {
    
    int num[5]; 
    int *pnum = num;
    for (int j = 0; j < 5; j++)
        {          
            printf("\nDigite um numero\n");;
            scanf("%d", pnum + j)  ;  
        
            printf("\nDobro do valor lido: %d\n", *(pnum + j)*2);
        }

    return 0;
    }
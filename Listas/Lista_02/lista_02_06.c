/* 
Questão 6: Endereços das Posições Pares
Crie um programa que contenha um array com cinco elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares.
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
        
            if (*(pnum + j) % 2 == 0)
            {
                printf("\nPosicao do valor lido: %p\n", pnum + j);
            }
            
            
        }

    return 0;
    }
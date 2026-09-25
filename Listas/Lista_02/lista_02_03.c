/* 
Questão 3: Endereços do Array
Crie um programa que contenha um array de float com 10 elementos. Imprima o
endereço de cada posição desse array.
*/

#include <stdio.h>

int main() 
    {
    
    float num[10] = {10,9,8,7,6,5,4,3,2,1};
    float *pnum = num;

    
    for (int i = 0; i < 10; i++)
    {
        
        printf("\n%p\n", (pnum + i));
        printf("\n%.2f\n", *(pnum + i));
    }
    
        


    return 0;
    }
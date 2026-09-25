/* 
Questão 1: Endereços de Memória
Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços
e exiba o maior endereço.
*/

#include <stdio.h>

int main() 
    {
    
    int num_01 = 10, num_02 = 100;
    int *pnum_01 = &num_01, *pnum_02 = &num_02;

    if (pnum_01 > pnum_02)
    {
        printf("%p", pnum_01);
    }else
    {
        printf("%p", pnum_02);
    }

    return 0;
    }
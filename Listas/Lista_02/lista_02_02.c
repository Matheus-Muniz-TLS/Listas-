/* 
Questão 2: Conteúdo do Maior Endereço
Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include <stdio.h>

int main() 
    {
    
    int num_01 = 10, num_02 = 100;
    printf("\nEntre com dois numeros: (1 2)\n");
    scanf("%d", &num_01, &num_02);

    int *pnum_01 , *pnum_02 ;
    pnum_01 = &num_01;
    pnum_02 = &num_02;

    if (pnum_01 > pnum_02)
    {
        printf("%d", *pnum_01);
    }else
    {
        printf("%d", *pnum_02);
    }

    return 0;
    }
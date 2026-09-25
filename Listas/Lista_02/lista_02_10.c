/* 
Questão 10: Aritmética de Ponteiros
Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo.
*/

#include <stdio.h>

int main() 
    {
    int a = 2, *b = &a, **c = &b, ***d = &c;

    printf("\nEntre com um numero:\n");
    scanf("%d", &a);
    printf("\nNumero: %d\n", a);
    printf("\nDobro: %d\n", *b * 2);
    printf("\nTriplo: %d\n", **c * 3);
    printf("\nQuádruplo: %d\n", ***d * 4);

    return 0;
    }
/* 
Questão 3: Tabuada 
Faça um programa em C em que o usuário informe 
um número para calcular a sua tabuada.
Em seguida crie uma função que receba esse número
por parâmetro, calcule e mostre a sua tabuada conforme 
o exemplo abaixo:
2x1 = 2
*/

#include <stdio.h>

int tabuada(int num)
{
    int resultado;
    for (int i = 0; i <= 10; i++)
    {
        resultado = num * i;
        printf("\n%dx%d = %d\n", num, i, resultado);
    }
    return 0;
}
int main() 
    {
    
    int num;
    printf("\nEscolha um numero para calcular a tabuada:\n");
    scanf("%d", &num);
    tabuada(num);
    
    return 0;
    }
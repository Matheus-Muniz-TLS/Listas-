/* 
Questão 12: Tabuada
Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a
taboada de 1 até N. Mostre a tabuada na forma:
    1 x N = N
    2 x N = 2N
    ...
    N x N = N2
*/

#include <stdio.h>

int tabuada(int num)
{
    int resultado;
    for (int i = 0; i <= num; i++)
    {
        resultado =  i* num;
        printf("\n%dx%d = %d\n", i, num, resultado);
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
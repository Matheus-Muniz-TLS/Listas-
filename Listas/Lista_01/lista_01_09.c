/* 
Questão 9: Soma dos Inversos dos Fatoriais
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna
o valor de S.
S = 1 + 1/1! + 1/2! + 1/3! + 1/N!
*/

#include <stdio.h>
int fatorial_inverso(int n)
{
    int soma = 0;
    
    for (int i = 1; i <= n; i++)
    {      
       soma = soma + i;      
    }
    
    return soma;
}
int main() 
    {
    int n = 2;
    printf("\nDigite um n: (9)\n ");
    scanf("%d", &n);
    printf("O somatorio de 1 ate %d e: %d", n , somatorio(n));

    return 0;
    }
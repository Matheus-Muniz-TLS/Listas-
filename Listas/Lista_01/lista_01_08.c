/* 
Questão 8: Somatório
Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
somatório de 1 até n: 1 + 2 + 3 + ... + n.
*/

#include <stdio.h>
int somatorio(int n)
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
/* 
Questão 5: Número Perfeito
Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito
quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito,
6 = 1 + 2 + 3, que são seus divisores). A função deve retornar o valor inteiro 1 para
verdadeiro e 0 caso contrário.
*/

#include <stdio.h>

int numero_perfeito(int num)
{
    int resultado = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            resultado = resultado + i;
        }
    }
    
    if(resultado == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int main() 
    {
    int num = 1;
    printf("\nDigite um numero: (12)\n ");
    scanf("%d", &num);

    printf("\nResultado: %d\n", numero_perfeito(num)) ;

    return 0;
    }
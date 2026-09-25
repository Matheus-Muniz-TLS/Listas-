/* 
Questão 7: Média Aritmética
Faça uma função que leia um número não determinado de valores positivos e retorna
a média aritmética dos mesmos.
*/

#include <stdio.h>
void media_aritmetica()
{
    int i;
    float media = 1, soma = 0; 
    for (i = -1; media != 0; i++)
    {
        printf("\nDigite um numero positivo: (0 para calcular)\n");
        scanf("%f", &media);

        if (media >= 0)
        {
            soma = soma + media;
        }
        
        
    }
    
    media = soma / i;
    printf("\nA media e: %.2f\n", media);
}
int main() 
    {
    media_aritmetica();

    return 0;
    }
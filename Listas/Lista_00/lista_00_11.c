/* 
Questão 11: Controle de Qualidade de Produção
Um inspetor de fábrica analisa 10 peçãs de um lote. Para cada peça, o usuário deve digitar o peso (em gramas).
 - Se o peso estiver entre 145g e 155g, a peça é "Aprovada".
 - Se o peso for menor que 145g, a peça é "Refugada por falta de material".
 - Se o peso for maior que 155g, a peça é "Refugada por excesso de material".
*/

#include <stdio.h>

int main() 
    {
    int peso;
    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite o peso da %d peca em gramas: ex(100)\n", i);
        scanf("%d", &peso);
        
        if (peso <= 145)
        {
            printf("\nRefugada por falta de material\n");
        }else if (peso < 155)
        {
            printf("\nAprovada\n");
        }else
        {
            printf("\nRefugada por excesso de material\n");
        }
    }
    

    return 0;
    }
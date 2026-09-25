/* 
Questão 4: Idade Nadador
Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna, 
também por parâmetro, a categoria desse nadador de acordo
com a tabela abaixo:

    idade           Categoria
    5 a 7           Infantil A
    8 a 10          Infantil B
    11 a 13         Juvenil A
    14 a 17         Juvenil B
    Maiores de 18     Adulto
    (inclusive)
*/

#include <stdio.h>

int main() 
    {
    int idade;
    printf("\nDigite a idade de um nadaddor:\n");
    scanf("%d", &idade);       

    if (idade >= 5 && idade <= 7)
    {
        printf("Infatil A");
    }else if (idade <= 10)
    {
        printf("Infatil B");
    }else if (idade <= 13)
    {
        printf("Juvenil A");
    }else if (idade <= 17)
    {
        printf("Juvenil B");
    }else
    {
        printf("Adulto");
    }
    
    return 0;
    }
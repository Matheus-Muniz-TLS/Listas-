/* 
Questão 1: Média Salárial
Foi feita uma pesquisa com n trabalhadores na 
cidade de Três Lagoas para saber 
a média salarial de uma determinada região da cidade. 
Faça um programa em C que receba o salário desses n 
trabalhadores. Calcule a média salarial e apresente-a na tela.
*/

#include <stdio.h>

int main() 
    {
        int i;
        int salario = 0 ;float media = 1;
        for (i = -1; media != 0; i++)
        {
            printf("Digite o salario de um trabalhador: (Digite 0 para calcular)\n");
            scanf("%f", &media); 

            salario = salario + media;
        }
        media =  salario / i ;
        printf("\nA media salaria e: %.2f\n", media);

    return 0;
    }
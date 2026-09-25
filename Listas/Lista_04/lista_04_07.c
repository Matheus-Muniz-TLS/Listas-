/* 
-1
Questão 7: Atleta Plus 
Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
*/

#include <stdio.h>

struct Atleta
{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main()
{
    struct Atleta atletas[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n--- Atleta %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);

        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Idade: ");
        scanf("%d", &atletas[i].idade);

        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }

    // Ordenando do mais velho para o mais novo
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (atletas[j].idade < atletas[j + 1].idade)
            {
                struct Atleta temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }

    printf("\n--- Atletas por idade ---\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: %s\n", atletas[i].nome);
        printf("Esporte: %s\n", atletas[i].esporte);
        printf("Idade: %d\n", atletas[i].idade);
        printf("Altura: %.2f\n", atletas[i].altura);
    }

    return 0;
}
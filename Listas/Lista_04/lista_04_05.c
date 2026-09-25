/* 
-1
Questão 5: Dados Pessoa II 
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba
os nomes da pessoa mais nova e da mais velha.
*/

#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    char nome[50];
    struct Data nascimento;
};

int main()
{
    struct Pessoa pessoas[6];

    int mais_nova = 0;
    int mais_velha = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Dia de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.dia);

        printf("Mes de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.mes);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].nascimento.ano);

        if (pessoas[i].nascimento.ano < pessoas[mais_velha].nascimento.ano ||
            (pessoas[i].nascimento.ano == pessoas[mais_velha].nascimento.ano &&
             pessoas[i].nascimento.mes < pessoas[mais_velha].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[mais_velha].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[mais_velha].nascimento.mes &&
             pessoas[i].nascimento.dia < pessoas[mais_velha].nascimento.dia))
        {
            mais_velha = i;
        }

        if (pessoas[i].nascimento.ano > pessoas[mais_nova].nascimento.ano ||
            (pessoas[i].nascimento.ano == pessoas[mais_nova].nascimento.ano &&
             pessoas[i].nascimento.mes > pessoas[mais_nova].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[mais_nova].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[mais_nova].nascimento.mes &&
             pessoas[i].nascimento.dia > pessoas[mais_nova].nascimento.dia))
        {
            mais_nova = i;
        }
    }

    printf("\n--- Resultado ---\n");

    printf("Pessoa mais velha: %s\n", pessoas[mais_velha].nome);
    printf("Pessoa mais nova: %s\n", pessoas[mais_nova].nome);

    return 0;
}
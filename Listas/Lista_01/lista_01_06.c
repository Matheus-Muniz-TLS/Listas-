/* 
Questão 6: Conceito do Aluno
Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu
conceito, conforme a tabela abaixo:
    nota           conceito
    de 0.0 a 4.9     D
    de 5.0 a 6.9     C
    de 7.0 a 8.9     B
    de 9.0 a 10.0    A
*/

#include <stdio.h>

char conceito_aluno(float nota)
{
    if (nota < 5.0 )
    {
        return 'D';
    }else if (nota < 7)
    {
        return 'C';
    }else if (nota < 9)
    {
        return 'B';
    }else
    {
        return 'A';
    }
    
    
    
}
int main() 
    {
    float nota = 8;   
    printf("\nDigite a nota: (9)\n ");
    scanf("%d", &nota);

    printf("Conceito: %c", conceito_aluno(nota));

    return 0;
    }
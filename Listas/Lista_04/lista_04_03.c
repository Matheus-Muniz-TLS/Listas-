/* 
Questão 3:  Disciplina
Crie uma estrutura representando um aluno de uma disciplina. Essa 
estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três 
provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene 
nessa estrutura.
Em seguida, exiba o nome e as notas do aluno que possui a maior média 
geral dentre os cinco.
*/

#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main()
{
    struct Aluno alunos[5];

    float maior_media = 0;
    int aluno_maior_media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        float media = (alunos[i].nota1 +
                       alunos[i].nota2 +
                       alunos[i].nota3) / 3.0;

        if (i == 0 || media > maior_media)
        {
            maior_media = media;
            aluno_maior_media = i;
        }
    }

    printf("\n--- Aluno com maior media ---\n");

    printf("Nome: %s\n", alunos[aluno_maior_media].nome);

    printf("Nota 1: %.2f\n", alunos[aluno_maior_media].nota1);
    printf("Nota 2: %.2f\n", alunos[aluno_maior_media].nota2);
    printf("Nota 3: %.2f\n", alunos[aluno_maior_media].nota3);

    printf("Media: %.2f\n", maior_media);

    return 0;
}
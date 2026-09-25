/* 
-1
Questão 4:  Inverte Vetor 
Crie uma função void inverte_vetor(int *vetor, int tamanho) que inverta a ordem dos
elementos de um vetor original.
    Você deve criar dois ponteiros locais dentro da função: um inicio apontando
    para o primeiro elemento e um fim apontando para o último.
    Faça um laço onde o inicio avança (++) e o fim recua (--) trocando os valores de
    lugar até que os ponteiros se cruzem no meio do vetor. Não utilize variáveis
    inteiras como índice.
*/

#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho)
{
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;

    while (inicio < fim)
    {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};

    inverte_vetor(vetor, 5);

    for (int *p = vetor; p < vetor + 5; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}
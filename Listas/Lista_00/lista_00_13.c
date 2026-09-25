/* 
Questão 13: Competição de Saltos
Em uma competição, um atleta realiza uma série de saltos. O programa deve perguntar
quantos saltos o atleta realizou. Em seguida, use um laço para ler a distância de cada salto. 
Ao final, o programa deve informar:
1 - Qual foi a maior distância saltada.
2 - Qual foi a menor distância saltada.
3 - A diferença entre a maior e a menor distância.
*/

#include <stdio.h>

int main() 
    {
    
    int qunt_saltos;
    float distacia, maior = -1 , menor = __INT_MAX__;
    printf("\nQuantos saltos o atleta realizou:\n");
    scanf("%d", &qunt_saltos);

    for (int i = 1; i <= qunt_saltos; i++)
    {
        printf("\nDistancia do salto:\n");
        scanf("%f", &distacia);

        if (distacia > maior)
        {
            maior = distacia;
        }
        if (distacia < menor)
        {
            menor = distacia;
        }
    }
    distacia = maior - menor;
    printf("\nDistancia do maior salto: %.3f\n", maior);
    printf("\nDistancia do menor salto: %.3f\n", menor);
    printf("\nDiferenca entre o maior salto e o menor salto: %.3f\n", distacia);
    

    return 0;
    }
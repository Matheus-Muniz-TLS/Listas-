/* 
Questão 4: Horas
Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.
*/

#include <stdio.h>

struct Hora
{
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    struct Hora horarios[5];
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nHorario %d\n", i + 1);

        printf("Hora: ");
        scanf("%d", &horarios[i].hora);

        printf("Minuto: ");
        scanf("%d", &horarios[i].minuto);

        printf("Segundo: ");
        scanf("%d", &horarios[i].segundo);

        if (horarios[i].hora > horarios[maior].hora)
        {
            maior = i;
        }
        else if (horarios[i].hora == horarios[maior].hora &&
                 horarios[i].minuto > horarios[maior].minuto)
        {
            maior = i;
        }
        else if (horarios[i].hora == horarios[maior].hora &&
                 horarios[i].minuto == horarios[maior].minuto &&
                 horarios[i].segundo > horarios[maior].segundo)
        {
            maior = i;
        }
    }

    printf("\nMaior horario: %02d:%02d:%02d\n",
           horarios[maior].hora,
           horarios[maior].minuto,
           horarios[maior].segundo);

    return 0;
}
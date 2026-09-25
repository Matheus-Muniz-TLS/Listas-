/* 
Questão 3: Conversão de Tempo
Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica
expressa em segundos e imprima esse tempo em horas, minutos e segundos.
*/

#include <stdio.h>

void convesao_hora(int seg)
{
    int min = 0, hora = 0;
    float decimal;

    decimal = seg / 3600.0;
    printf("\n horas: %.4f\n", decimal);
    decimal = seg / 60.0;
    printf ("\n minutos: %.4f\n", decimal);
    printf ("\n segundos: %d\n", seg);

    while (seg != 0)
    {
   
    if (( seg / 3600 >= 1 || seg % 3600 == 0))
    {
        seg = seg - 3600;
        hora++;
    }else if ( seg / 60 >= 1 || seg % 60 == 0)
    {
        seg = seg - 60;
        min++; 
    }else
    {
        break;
    }
    }
    printf("\n%dh : %dm : %ds \n", hora, min, seg);
    
}
int main() 
    {
    int seg = 3650;
    
    printf("\nDigite os segundos: (3600)\n ");
    scanf("%d", &seg);
    convesao_hora(seg);

    return 0;
    }
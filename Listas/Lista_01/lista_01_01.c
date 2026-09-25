/* 
Questão 1: Volume da Esfera
Faça uma função que recebe por parâmetro o raio de uma esfera e 
calcule o seu
volume (v = 4/3.P .R³).
*/

#include <stdio.h>

void calcular_volume(float raio)
{
    float volume = 1.33 * 3.14 * ((raio * raio)* raio) ; 
    printf("\nVolume = %.2f\n ", volume);
}
int main() 
    {
    float raio = 1;
    printf("\nDigite o raio:\n ");
    scanf("%f", &raio);
    calcular_volume(raio);

    return 0;
    }
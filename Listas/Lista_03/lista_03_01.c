/* 
Questão 1: Retorno de Múltiplos Valores
Em C, funções retornam apenas um valor. Crie um programa que contorne isso
usando ponteiros.
   Implemente uma função chamada calcular_esfera que receba o raio de uma
    esfera e devolva sua área e seu volume.
    Assinatura sugerida: void calcular_esfera(float raio, float *area, float *volume);
    Na main, peça ao usuário o raio, chame a função e imprima os resultados.
    (Fórmulas: Área = 4 * PI * R² | Volume = (4/3) * PI * R³).
*/

#include <stdio.h>
void calcular_area_volume(float raio, float *volume, float *area)
{
   
    *volume =  1.33 * 3.14 * ((raio * raio)* raio) ; 
    *area = 4 * 3.14 * (raio * raio); 
   

}
int main() 
    {
    float raio = 1, volume, area;

    printf("\nDigite o raio:\n ");
    scanf("%f", &raio);


    calcular_area_volume(raio, &volume, &area);

    printf("\nvalor: %.2f\n", volume);
    printf("\nvalor: %.2f\n", area);

    
    return 0;
    }
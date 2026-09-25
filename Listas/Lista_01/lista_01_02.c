/* 
Questão 2: Fórmula de Bhaskara
Faça um procedimento que recebe por parâmetro os valores necessário para o cálculo
da fórmula de báskara e imprima as suas raízes, caso seja possível calcular.
*/

#include <stdio.h>
#include <math.h>

void calcular_bhaskara(int a, int b, int c)
{
    float delta = b * b  - 4 * a * c;
    float calculo_positivo = ((b * -1)  + sqrt(delta)) / (2 * a); 
    float calculo_negativo = ((b * -1)  - sqrt(delta)) / (2 * a); 

    printf("\nB = (-b + raiz(delta)) / 2 * a = %.2f\n ", calculo_positivo);
    printf("\nB = (-b - raiz(delta)) / 2 * a = %.2f\n ", calculo_negativo);
}
int main() 
    {
    int a, b, c;
    printf("\nDigite o valor a: (1)\n ");
    scanf("%d", &a);
    printf("\nDigite o valor b : (-5)\n ");
    scanf("%d", &b);
    printf("\nDigite o valor c: (6)\n ");
    scanf("%d", &c);
    calcular_bhaskara(a, b ,c);

    return 0;
    }
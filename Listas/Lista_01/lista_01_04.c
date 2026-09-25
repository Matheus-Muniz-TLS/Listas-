/* 
Questão 4: Conversão de Idade
Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna
essa idade expressa em dias.
*/

#include <stdio.h>

float idade_calcular(int anos, int meses, int dias)
{
    float resultado = (anos * 365) + (meses * 30) + dias;
    return resultado;
}
int main() 
    {

    int anos = 12, meses = 6 , dias = 10 ;
    printf("\nDigite a idade de uma pessoa: (12(anos) 6(meses) 10(dias))\n ");
    scanf("%d%d%d", &anos, &meses, &dias);

    printf("\nIdade em dias: %.2f\n", idade_calcular(anos, meses, dias));
        

    return 0;
    }
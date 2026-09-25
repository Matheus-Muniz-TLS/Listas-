/* 
Questão 6: Simulador de Tanque de Combustível
Crie uma função chamada calcular_autonomia que recebe
a capacidade do tanque (em litros) e o consumo médio do 
veículo (em km/l). A função deve calcular quantos quilômetros o carro percorre.
No programa principal, use um laço de repetição para permitir que o usuário faça
varíos cálculos seguidos. Dentro do laço, use uma estrutura condicional
para verificar se a autonomia é "Alta" (maior que 500 km) ou 
"Baixa" (menor ou igual a 500 km). O laço deve
parar se o usuário digitar 0 para a capacidade do tanque.
*/

#include <stdio.h>

float calcular_autonomia(float capacidade, float consumo)
{      
    float resultado;
    return resultado = capacidade * consumo;
}
int main() 
    {
        for (int i = 1; i != 0;)
        {
            float capacidade, consumo_medio;
            printf("\nDigite a capacidade do tanque:\n");
            scanf("%f", &capacidade);
            i = capacidade;
            printf("\nDigite o consumo medio:\n");
            scanf("%f", &consumo_medio);

            float resultado = calcular_autonomia(capacidade, consumo_medio);
            if ( resultado > 500 )
            {
                printf("\nAlta\n");
            } else
            {
                printf("\nBaixa\n");

            }
        }  

    return 0;
    }
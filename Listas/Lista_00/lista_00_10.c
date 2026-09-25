/* 
Questão 10: O caixa Eletrônico Inteligente
Crie um programa que simule um saque. O usuário informa o valor que deseja sacar (inteiro).
O programa deve calcular quantas notas de 50, 20 e 10 serão entregues, priorizando sempre as notas maiores.
- Desafio: Se sobrar um valor que não pode ser pago com essas notas (ex: R$ 7,00), o programa deve avisar que o valor é inválido para as cédulas disponíveis.
- Regra: Use apenas operadores de divisão inteira (//) e resto (%).
*/

#include <stdio.h>

int main() 
    {
    
    int valor, cont_50 = 0, cont_20 = 0, cont_10 = 0; 
   
    printf("\nDigite um valor para sacar:\n");
    scanf("%d", &valor);    

    while (valor != 0)
    {   
    if (valor % 50 == 0 || valor / 50 >= 1)
    {
        valor = valor - 50;
        cont_50++;
    }else if(valor % 20 == 0 || valor / 20 >= 1)
    {
        valor = valor - 20;
        cont_20++;
    }else if(valor % 10 == 0 || valor / 10 >= 1)
    {
        valor = valor - 10;
        cont_10++;
    }else{
        printf("\nValor de %d e invalido para as cedulas disponiveis.\n", valor);
        break;
    }
    }
    
    printf("\nQuantiadade de notas de 50: %d\n", cont_50);
    printf("\nQuantiadade de notas de 20: %d\n", cont_20);
    printf("\nQuantiadade de notas de 10: %d\n", cont_10);

    return 0;
    }
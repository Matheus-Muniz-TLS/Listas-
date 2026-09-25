/* 
Questão 10: Calculadora Simples
Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
representará a operação que se deseja efetuar com os números. Assim, se o símbolo
for “ + ” , deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma
divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da
operação para o programa principal.
*/

#include <stdio.h>
#include <string.h>

float calcular(float num_01, float num_02, char sibolo[])
{   
    float resultado = 0.0;
    if (strcmp(sibolo, "+") == 0)
    {
        return resultado = num_01 + num_02;
    }else if (strcmp(sibolo, "-") == 0)
    {
        return resultado = num_01 - num_02;;
    }else if (strcmp(sibolo, "/") == 0)
    {
        return resultado = num_01 / num_02;;
    }else if (strcmp(sibolo, "*") == 0)
    {
        return resultado = num_01 * num_02;;
    }
}
int main() 
    {
        int escolha = 2;
        float num_01 = 1, num_02 = 2;
        char sibolo[10];
        printf("\nDigite um numero: 1(+) 2(-) 3(/) 4(x))\n ");
        scanf("%d", &escolha);
        printf("\nDigite dois numeros: (1 2)\n");
        scanf("%f%f", &num_01, &num_02);

        switch (escolha)
            {
                case 1:
                    strcpy(sibolo, "+");
                    break;
                case 2:
                    strcpy(sibolo, "-");
                    break;
                case 3:
                    strcpy(sibolo, "/");
                    break;
                case 4:
                    strcpy(sibolo, "*");
                    break;
                default:
                    break;
            }

    printf("\nResultado: %.2f\n", calcular(num_01, num_02, sibolo));

    return 0;
    }
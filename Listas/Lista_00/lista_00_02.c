/* 
Questão 2: Eleição
Supondo que em uma eleição presidencial tenha-se 3 
candidatos, e que os votos são informados por meio de 
codigo de cada candidato, como o informado a seguir:
- 1, representa ao candidato cujo nome começa com a letra B;
_ 2, representa ao candidato cujo nome começa com a letra K;
- 3, representa ao candidato cujo nome começa com a letra Z;
- 123, representa voto nulo;
- 0, representa voto em branco;
- No teste que será realiazado haverá 20 pessoas que atuarão como eleitores.

Dessa forma, se faz necessário que seja feito um programa em C 
para contabilizar os votos de cada candidato, bem como 
a quantidade de votos nulos e em branco. 
Faça um algoritmo que calcule e escreva o total de votos 
de cada candidato, o total de votos nulos e o total de 
votos em brancos.
*/

#include <stdio.h>

int main() 
    {
        int escolha, B = 0, K = 0, Z = 0, nulo = 0, branco = 0;
        for ( int i = 1; i <= 20; i++)
        {
            printf("\nEscolha uma opcao de voto:\n 1 (B)\n 2 (K)\n 3 (Z)\n 123 (Nulo)\n 0 (Em branco)\n");
            scanf("%d", &escolha);
            switch (escolha)
            {
                case 1:
                    B++;
                    continue;
                case 2:
                    K++;
                    continue;
                case 3:
                    Z++;
                    continue;
                case 123:
                    nulo++;
                    continue;
                case 0:
                    branco++;
                    continue;   
                default:
                    continue;
            }
        }
        printf("\nA quantidade de votos em cada opcao e:\n B: %d\n K: %d\n Z: %d\n Nulo: %d\n Em branco: %d\n", B, K, Z, nulo, branco);

    return 0;
    }
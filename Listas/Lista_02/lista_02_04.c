/* 
Questão 4: Endereços da Matriz
Crie um programa que contenha uma matriz de float com três linhas e três colunas.
Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>

int main() 
    {
    
    float num[3][3];
    float *pnum;

    num[0][0] = 0;
    num[0][1] = 0;
    num[0][2] = 0;

    num[1][0] = 1;
    num[1][1] = 1;
    num[1][2] = 1;

    num[2][0] = 2;
    num[2][1] = 2;
    num[2][2] = 2;

    

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            pnum = &num[i][j];
            printf("\n%p\n", pnum);
            printf("\n%.2f\n", *pnum);
        }
    }
    
        


    return 0;
    }
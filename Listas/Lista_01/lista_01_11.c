/* 
Questão 11: Tipo de Triângulo
Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar
qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário
que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um
triângulo é menor do que a soma do comprimento dos outros dois lados. O
procedimento deve identificar o tipo de triângulo formado observando as seguintes
definições: 
    a. Triângulo Equilátero: os comprimentos dos 3 lados são iguais. 
    b. Triângulo Isósceles: os comprimentos de 2 lados são iguais.
    c. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>
#include <stdlib.h> 
void verificar_triangulo(float x, float y, float z)
{
    if((((x < y + z ) && (x > abs(y - z))) && ((y < x + z) && (y > abs(x - z)))) && (((z < x + y ) && (z > abs(x - y)))))
    {
        
    if((((x != y) && (x != z)) && (y != z))) 
      {
        printf("triangulo escaleno");
      }

    if(((((x == y) && (x != z)) || ((x != y) && (x == z)) )|| ((y == z) && (y != x))))
      {
        printf("triangulo isosceles"); 
      }

    if( (x == y) && (x == z)) 
      {
        printf("triangulo equilatero"); 
      }

    }
  else
    {
      printf("nao e triangulo"); 
    }
}

int main() 
    {
    float x,y,z;
    
    printf("Digite tres lados de um triangulo: ex(1 1 2)\n"); 
    scanf("%f %f %f", &x , &y, &z);

    verificar_triangulo(x, y, z);

   

    return 0;
    }
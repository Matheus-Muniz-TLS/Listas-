/* 
-1
Questão 2: Retângulo 
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma
estrutura Ponto, a qual contém as posições X e Y. Faça um programa 
que declare e leia
uma estrutura Retângulo e exiba a área e o comprimento da diagonal e 
o perímetro
desse retângulo.
*/

#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

struct Retangulo
{
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};

int main()
{
    struct Retangulo retangulo;

    printf("Digite X do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superior_esquerdo.x);

    printf("Digite Y do ponto superior esquerdo: ");
    scanf("%f", &retangulo.superior_esquerdo.y);

    printf("Digite X do ponto inferior direito: ");
    scanf("%f", &retangulo.inferior_direito.x);

    printf("Digite Y do ponto inferior direito: ");
    scanf("%f", &retangulo.inferior_direito.y);

    float largura = retangulo.inferior_direito.x -
                    retangulo.superior_esquerdo.x;

    float altura = retangulo.superior_esquerdo.y -
                   retangulo.inferior_direito.y;

    float area = largura * altura;

    float perimetro = 2 * (largura + altura);

    float diagonal = sqrt(
        largura * largura +
        altura * altura
    );

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
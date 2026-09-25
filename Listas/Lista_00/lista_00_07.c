/* 
Questão 7: Analisador de Cloro para Piscinas
Crie uma função chamda verificar_cloro que recebe 
a medição atua de cloro (em ppm). A função 
deve retornar uma mensagem recomendando a ação necessária.
No programa principal, peça ao usuário para informar a quantidade de mediçôes 
que ele deseja realizar. Use um laço de repetição para ler cada medição e, classifique:
- Abaixo de 1 ppm: "Aumentar a quantidade de cloro"
- Entre 1 e 3 ppm: "Quantidade de cloro adequada"
- Acima de 3 ppm: "Reduzir a quantidade de cloro" 
*/

#include <stdio.h>

float verificar_cloro(float medicao)
{
    if (medicao < 1)
    {
        printf("\nAumentar a quantidade de cloro\n");
    }else if(medicao <= 3)
    {
        printf("\nQuantidade de cloro adequada\n");
    }else
    {
        printf("\nReduzir a quantidade de cloro\n");
    }
    return 0;
}
int main() 
    {
    int quantidade_medicao;
    printf("\nDigite a quantidade de medicoes\n");
    scanf("%d", &quantidade_medicao) ;
    for (int i = 1; i <= quantidade_medicao; i++)
    {
        float medicao_atual;
        printf("\nDigite medicao atual de cloro\n");
        scanf("%f", &medicao_atual) ;
        verificar_cloro(medicao_atual);
    }
    
        

    return 0;
    }
/* 
Questão 8: Números Primos
Crie uma função chamda eh_primo(n) que retorna true ou 1 se um número for primo e false ou 0 caso contrário.
No programa principal, peça ao usuário um intervalo 
(um número inicial e um final). Use um laço de repetição para percorrer esse intervalo
e, para cada número, chame a função. Ao final, o programa deve exibir apenas: 
1 - A soma de todos os números primos encontrados no intervalo.
2 - Qual foi o maior número primo encontrado.
*/

#include <stdio.h>

int eh_primo(int primo)
{
    int resultado = 1;
    for (int i = 2; i < primo; i++)
    {
       if (primo % i == 0)
       {
       resultado = 0;
       }
        
    }
    return resultado;
}

int main() 
    {
    int num_01, num_02, soma = 0, maior_primo = 0;

    printf("\nEntre com um intervalo: (1 10)\n");
    scanf("%d %d", &num_01, &num_02);

    while (num_01 <= num_02)
    {

    if (eh_primo(num_01) == 1)
    {
        soma = soma + num_01;
        if (maior_primo < num_01)
        {
            maior_primo =  num_01;
        }
         
    }
    num_01++;
    }
    printf("\nSoma dos Primos: %d\nMaior primo: %d \n", soma -1, maior_primo);
        
    return 0;
    }
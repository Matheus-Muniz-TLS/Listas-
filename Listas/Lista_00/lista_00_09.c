/* 
Questão 9: Sistema de Risco de Investimento
1 - Crie uma função avaliar_setor(setor) que recebe uma string (ex: "Tecnologia", "Energia", "Varejo")
e retorna um fator de risco (um numero de 1 a 3).
2 - Crie uma função analisar_investimento(valor, setor) que:
    - Chama a função avaliar_setor(setor) para obter o fator de risco do setor.
    - e clasifique:
        - Se o risco for 1 e o valor for maior que 10.000, retorne "Investimento Seguro e Estratégico".
        - Se o risco for 3 e o valor maior que 50.000, retorne "Alto Risco: Requer Aprovação da diretoria". 
        - Para os demais casos, retorne "Análise Padrão".
3 - Obs: O valor e o setor devem ser informados na função principal.
*/
#include <stdio.h>
#include <string.h>

int avaliar_setor(char setor[])
{
    int resultado;
    if (strcmp(setor, "Tecnologia") == 0)
    {
        resultado = 1;
    }else if (strcmp(setor, "Energia") == 0)
    {
        resultado = 2;
    }else if (strcmp(setor, "Varejo") == 0)
    {
        resultado = 3;
    }
    
    return resultado;
}

int avaliar_investimento(float valor, char setor[])
{
    int setor_risco = avaliar_setor(setor);
    if (setor_risco == 1 && valor > 10000)
    {
        printf("Investimento Seguro e Estrategico");
    } else if (setor_risco == 3 && valor > 50000)
    {
        printf("Alto Risco: Requer Aprovacao da diretoria");
    }else
    {
        printf("Analise Padrao");
    }
    
    return 0;
}

int main() 
    {
    char setor[20];
    float valor;
    int escolha;

    printf("\nEscolha o setor de investimento:\n1 (Tecnologia)\n2 (Energia)\n3 (Varejo)\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case  1:
        strcpy(setor,"Tecnologia");
        break;
    case  2:
        strcpy(setor,"Energia");
        break;
    case  3:
        strcpy(setor,"Varejo");
        break;
    
    default:
        break;
    }

    printf("\ndigite o valor do investimento:\n");
    scanf("%f", &valor);

    avaliar_investimento(valor, setor);

    return 0;
    }
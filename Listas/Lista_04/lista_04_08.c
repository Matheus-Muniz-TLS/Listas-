/* 
-1
Questão 8: Data 
Escreva um programa que contenha uma estrutura representando uma 
data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, 
leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que 
decorreram entre as
duas datas.
*/

#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

int bissexto(int ano)
{
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        return 1;
    }

    return 0;
}

int dias_no_mes(int mes, int ano)
{
    int dias[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano))
    {
        return 29;
    }

    return dias[mes - 1];
}

int data_valida(struct Data data)
{
    if (data.ano < 1)
    {
        return 0;
    }

    if (data.mes < 1 || data.mes > 12)
    {
        return 0;
    }

    if (data.dia < 1 || data.dia > dias_no_mes(data.mes, data.ano))
    {
        return 0;
    }

    return 1;
}

int dias_ate_data(struct Data data)
{
    int total = 0;

    for (int ano = 1; ano < data.ano; ano++)
    {
        if (bissexto(ano))
        {
            total += 366;
        }
        else
        {
            total += 365;
        }
    }

    for (int mes = 1; mes < data.mes; mes++)
    {
        total += dias_no_mes(mes, data.ano);
    }

    total += data.dia;

    return total;
}

int main()
{
    struct Data data1;
    struct Data data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d",
          &data1.dia,
          &data1.mes,
          &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d",
          &data2.dia,
          &data2.mes,
          &data2.ano);

    if (!data_valida(data1) || !data_valida(data2))
    {
        printf("Uma das datas e invalida.\n");
        return 1;
    }

    int dias1 = dias_ate_data(data1);
    int dias2 = dias_ate_data(data2);

    int diferenca = dias1 - dias2;

    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("Dias decorridos: %d\n", diferenca);

    return 0;
}
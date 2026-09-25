/* 
Questão 7: Verificação de Substring
Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os
caracteres das strings.
*/

#include <stdio.h>

int procurar_texto(char *palavra_01, char *palavra_02) {
    
    for (int i = 0; *palavra_01 != '\0'; palavra_01++) {
        char *p1 = palavra_01;
        char *p2 = palavra_02;
      
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return 1;
        }
    }

    return 0;
}

int main() {
    char palavra_01[30];
    char palavra_02[30];

    printf("Digite a primeira palavra:");
    scanf("%s", palavra_01); 

    printf("Digite a segunda palavra:");
    scanf("%s", palavra_02); 

    if (procurar_texto(palavra_01, palavra_02) == 1) {
        printf("A Primeira String:  '%s' contém a Segunda String '%s'.\n", palavra_01, palavra_02);
    } else {
        printf("A Primeira String:  '%s' não contém a Segunda String '%s'.\n", palavra_01, palavra_02);
    }

    return 0;
}
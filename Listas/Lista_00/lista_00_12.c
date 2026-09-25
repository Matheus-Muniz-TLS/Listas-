/* 
Questão 12: Simulador de Login com Bloqueio
Crie um sistema que peça um nome de usuário e uma senha.
- O Usuário tem exatamente 3 tentativas para acertar a senha.
- Se ele acertar antes das 3 tentativas, o programa exibe "Acesso Concedido" e encerra.
- Se ele errar as 3 vezes, o programa deve exibir "Conta Bloqueada: Procure o Suporte".
*/

#include <stdio.h>
#include <string.h>
void lijmparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() 
    {
    char usuario[30];
    char login_usuario[30];
    int senha, login_senha, erro = 0;

    printf("\nCriar usuario:\n");
    scanf("%9[^\n]", usuario);

    printf("\nCriar senha:\n");
    scanf("%d", &senha);

    printf("\nLogin:\n");
    
    for (int i = 1; i <= 3; i++)
    {
        lijmparBuffer();
        printf("\nUsuario:\n");
        scanf("%9[^\n]", login_usuario);

        printf("\nSenha:\n");
        scanf("%d", &login_senha);

        if (strcmp(usuario, login_usuario) == 0 && login_senha == senha)
        {
            printf("\nAcesso Concedido\n");
            break;
        }else
        {
            printf("\nUsuario ou Senha errados\n");
            erro++;
        }
    }
    if (erro == 3)
    {
        printf("\nConta Bloqueada: Procure o Suporte\n");
    }
    


    return 0;
    }
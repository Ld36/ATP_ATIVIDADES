// 3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 
// um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de 
// permissão ou negação de acesso. 

#include <stdio.h>
#include <string.h>

int main() {
    char senha_digitada[6]; // Espaço para 5 caracteres + terminador nulo
    char senha_correta[] = "ASDFG"; // Senha correta

    printf("Digite a senha: ");
    scanf("%s", senha_digitada);

    if (strcmp(senha_digitada, senha_correta) == 0) { // Compara as senhas
        printf("Permissao de acesso concedida.\n");
    } else {
        printf("Negacao de acesso.\n");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    // Declarar Variavel
    int idade;
    // Pedir dados do usuario
    printf("DIgite sua idade: ");
    scanf("%d", &idade);
    
    // laço de repetição if
    if (idade >= 18) {
        printf("Já pode obter habilitação");
    } else {
        printf("Não pode obter habilitação");
    }

    return 0;
}
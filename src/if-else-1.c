#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    // Declarar Variavel
    int idade;
    int diferenca_tempo;
    
    // Pedir dados do usuario
    printf("DIgite sua idade: ");
    scanf("%d", &idade);
    
    // laço de repetição if
    if (idade >= 18) {
        diferenca_tempo = idade - 18;
        printf("Você já pode tirar habilitação!\n");
        printf("Você tem direito a habilitação ha %d ano", diferenca_tempo);
    } else {
        diferenca_tempo = 18 - idade;
        printf("Você precisa esperar mais %d ano(s)!", diferenca_tempo);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int soma = 0;
    int numero;
    int quantidade;
    printf("Digite a quantidade de numero a ser calculado: \n");
    scanf("%d", &quantidade);
    
    for (int i = 1 ; i <= quantidade ; i++) {
        printf("Digite um numero para soma: \n");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("O valor da soma foi de %d\n", soma);
    printf("A média de todos os numeros é %d", soma/quantidade);
    return 0;
    
}
#include <stdio.h>
#include <math.h>  

int main() {
    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 20 && numero <= 80) {
        printf("O numero %d está entre 20 e 80",numero);
    } else {
        printf("O número %d está fora do intervalo de 20 e 80",numero);
    }

    return 0;
}

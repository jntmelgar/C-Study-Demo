#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um número entre 12 e 20: ");
        scanf("%d", &num);

        if (num < 12 || num > 20) {
            printf("Entrada inválida!\n");
        }
    } while (num < 12 || num > 20);

    printf("Número digitado: %d\n", num);

    return 0;
}

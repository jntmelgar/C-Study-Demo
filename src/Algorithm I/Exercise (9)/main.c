#include <stdio.h>

int main() {
    int num;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
    } while (num > 1);

    printf("Número menor ou igual a 1 encontrado: %d\n", num);

    return 0;
}

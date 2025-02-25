#include <stdio.h>

int main() {
    int n, num;
    float soma = 0;

    printf("Quantos números você quer ler? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("A média é: %.2f\n", soma / n);

    return 0;
}

#include <stdio.h>

int main() {
    float altura, maior = 0, menor = 10000;

    for (int i = 0; i < 15; i++) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura > maior) {
            maior = altura;
        }

        if (altura < menor) {
            menor = altura;
        }
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);

    return 0;
}

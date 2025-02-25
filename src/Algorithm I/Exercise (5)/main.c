#include <stdio.h>

int main() {
    float salario;
    int acima1500 = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o salário: ");
        scanf("%f", &salario);

        if (salario > 1500) {
            acima1500++;
        }
    }

    printf("Porcentagem de salários acima de 1500: %.2f%%\n", (acima1500 / 15.0) * 100);

    return 0;
}

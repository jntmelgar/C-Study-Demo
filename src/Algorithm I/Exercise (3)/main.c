#include <stdio.h>

int main() {
    int num, dentro = 0, fora = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num >= 10 && num <= 15) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("Números no intervalo [10, 15]: %d\n", dentro);
    printf("Números fora do intervalo: %d\n", fora);

    return 0;
}

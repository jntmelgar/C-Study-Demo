#include <stdio.h>

int main() {
    int num, i, eh_primo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 2) {
        eh_primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }

    if (eh_primo) {
        printf("%d é primo\n", num);
    } else {
        printf("%d não é primo\n", num);
    }

    return 0;
}

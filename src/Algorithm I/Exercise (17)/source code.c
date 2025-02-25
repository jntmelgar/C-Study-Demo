#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor, posMaior = 0, posMenor = 0;
    float soma = 0;

    // Exercício 00 e 01 - Receber números e identificar maior e menor elemento
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
            posMenor = i;
        }
    }

    printf("Maior elemento: Posição %d, Valor %d\n", posMaior, maior);
    printf("Menor elemento: Posição %d, Valor %d\n", posMenor, menor);

    // Exercício 02 - Média aritmética
    printf("Média aritmética: %.2f\n", soma / 10);

    return 0;
}

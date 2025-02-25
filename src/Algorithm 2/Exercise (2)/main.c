#include <stdio.h>

int main() {
    char *meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int numero;
    printf("Digite o número do mês (1-12): ");
    scanf("%d", &numero);
    if (numero >= 1 && numero <= 12) {
        printf("O mês correspondente é: %s\n", meses[numero - 1]);
    } else {
        printf("Valor inválido. Digite um número entre 1 e 12.\n");
    }
    return 0;
}

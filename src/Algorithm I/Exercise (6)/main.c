#include <stdio.h>

int main() {
    char codigo;
    float valor, total_vista = 0, total_prazo = 0, total_geral = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o código da compra (V para à vista, P para a prazo): ");
        scanf(" %c", &codigo);
        printf("Digite o valor da compra: ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v') {
            total_vista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            total_prazo += valor;
        }
        
        total_geral += valor;
    }

    printf("Total à vista: %.2f\n", total_vista);
    printf("Total a prazo: %.2f\n", total_prazo);
    printf("Total geral: %.2f\n", total_geral);

    return 0;
}

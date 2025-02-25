#include <stdio.h>

int main()
{
    float anos,dias; // declarar variáveis
    printf("Digite sua idade em anos: "); 
    scanf("%f",&anos); //captura de dados e atribuição a variável anos
    dias = anos*365; // multiplicação da idade em 365 dias
    printf("Sua idade em dias é %.0f.\n",dias); // imprimi resultado
    return 0;
}

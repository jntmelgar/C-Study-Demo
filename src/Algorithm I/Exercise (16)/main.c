#include <stdio.h>

int main()
{
    int numero, resultado;
    printf("Digite um numero inteiro: "); 
    scanf("%d",&numero); 
    resultado = numero % 2;
    if (resultado == 0) {
        printf("Numero é par");
    } else {
        printf("Numero é impar");
    } 
    return 0;
}

#include <stdio.h>

int main()
{
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero > 10){
        printf("Numero maior que 10");
    }else if(numero<=9 && numero > 5){
        printf("numero menor que 10 e maior que 5");
    }else{
        printf("numero menor que 5");
    }
    

    return 0;
}

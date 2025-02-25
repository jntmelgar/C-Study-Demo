#include <stdio.h>

int main()
{   
    int num1, num2, soma;
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segunto numero número: ");
    scanf("%d",&num2);
    soma = num1 + num2;
    
    if (soma >= 10 ){ 
        printf("Soma maior que 10 - %d + %d = %d",num1,num2,soma);
    } else {
        printf("Soma menor que 10 - %d + %d = %d",num1,num2,soma);
    }
    return 0;
}
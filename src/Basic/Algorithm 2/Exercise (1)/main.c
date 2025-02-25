#include <stdio.h>

int main()
{
 int idade[10];
 int soma;
 int quantidade = sizeof(idade)/sizeof(int);
 
 for (int i = 0 ; i < 10 ; i++ ){
    printf("Digite a idade da %dº pessoas: ", i + 1);
    scanf("%d",&idade[i]);
    soma += idade[i];
}

printf("A média das idades é : %d", soma / quantidade);

return 0;
    
}
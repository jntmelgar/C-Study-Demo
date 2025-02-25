#include <stdio.h>

int main()
{
 int idade[10];
 int soma, maior,menor;
 int quantidade = sizeof(idade)/sizeof(int);
 
 for (int i = 0 ; i < quantidade ; i++ ){
    printf("Digite a idade da %dº pessoas: ", i + 1);
    scanf("%d",&idade[i]);
    soma += idade[i];
    menor = idade[0];
    if (idade[i] > maior) {
        maior = idade[i];
    } else if (idade[i] < maior && idade[i] < menor) {
        menor = idade[i];
    }
}

printf("A média das idades é : %d\n", soma / quantidade);
printf("A idade maior é : %d\n", maior);
printf("A idade menor é : %d\n", menor);


return 0;
    
}
#include <stdio.h>

/*int main()
{
    //definição e atribuição das variáveis
    int a = 150;
    int b = 200;
    //int c;
    // Processamento 
    //c = a + b;
    // Impressão do resultado
    printf("Valor de %d + %d = %d",a, b, a+b);
    return 0;
}

int main() {
    // Definição e atribuição de variáveis
    float a = 2;
    float b = 56;
    float c = 45;
    //Impressão e processamento
    printf("Valor de (%g * %g * %g + %g) / %g = %g", a, a, a, b, c, (a*a*a+b)/c);
    }
    return 0;
*/

int main() {
    //Definição e atribuição de variáveis
    float a,b,c;
    //Impressão e captura de dados
    printf("Digite o primeiro valor da adição:");
    scanf("%g",&a);
    printf("Digite o segundo valor da adição:");
    scanf("%g",&b);
    printf("Digite o terceiro valor da adição:");
    scanf("%g",&c);
    //impressão e processamento de dados
    printf("O resultado de %g + %g + %g = %g",a,b,c,a+b+c);
    printf("O resultado de %g + %g + %g = %g",a,b,c,(a+b)+c);
    printf("O resultado de %g + %g + %g = %g",a,b,c,a+b+c);
    return 0;
}
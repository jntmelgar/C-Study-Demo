#include <stdio.h>

int main()
{
    //declaração da Variável
    float n1, n2, media;
    //Impressão e coleta de dados
    printf("Digite nota 1:");
    scanf("%g",&n1);
    printf("Digite nota 2:");
    scanf("%g",&n2);
    //impressão e processamento
    printf("A media do aluno foi de: %g",(n1+n2)/2);
    return 0;
}

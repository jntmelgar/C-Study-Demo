/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int reajuste = 66;
    float reajuste2 = 45.78;
    printf("O reajuste foi de %d%%.\n", reajuste);
    printf("O reajuste foi de %d.\n", reajuste);
    printf("O reajuste foi de %g%%.\n", reajuste2);
    printf("O reajuste foi de %g.\n", reajuste2);
    printf("O reajuste foi de %d%% e o desconto foi de %g%%.\n", reajuste, reajuste2);
    printf("O reajuste foi de %d%% e o desconto foi de %.2f%%.", reajuste, reajuste2);
    return 0;
}
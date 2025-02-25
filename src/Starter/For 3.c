#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int i;
    printf("Digite um valor para fazer a contagem contraria: ");
    scanf("%d", &i);
    for (; i >= 0 ; i--) {
        printf("%d\n", i);
    }
    return 0;
    
}
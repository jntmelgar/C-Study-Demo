/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25;
    /* 
    %c String
    %d Numero Inteiro
    %f %d %e %.2f Flutuante 
    */
    printf("O Tempo vitorioso na eliminatoria %c", corrida);
    printf("\nda competição %d foi %f.",evento,tempo);

    return 0;
}
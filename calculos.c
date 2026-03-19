#include <stdio.h>

int main(){
    int A, B, soma, subtr, mult, div, resto; /*O resto será um número inteiro, portanto ele está contido em int, com %d*/

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    div = A / B;
    resto = A % B;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtr);
    printf("Multiplicação: %d\n", mult);
    printf("Divisão: %d\n", div);
    printf("Resto da Divisão: %.d\n", resto);

}
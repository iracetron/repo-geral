#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que imprima a soma de todos os números de 1 até 100.

int main(){

    int num;
    int n = 0;

    printf("Digite um número: ");
    scanf(" %d", &num);

    for(n = 1; n <= 10; n++){
        int mult = num * n;
        printf("%d * %d = %d\n", num, n, mult);
    }

    return 0;

}
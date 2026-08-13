#include <stdio.h>

int main(){

    int A;

    printf("Digite um número inteiro: ");
    scanf("%d", &A);

    if(A % 2 == 0){
        printf("%d é par.\n", A);

    } else {
        printf("%d é ímpar.\n", A);

    }

}
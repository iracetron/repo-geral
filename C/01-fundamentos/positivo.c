#include <stdio.h>

int main(){

    int A;

    printf("Digite um número inteiro: ");
    scanf("%d", &A);

    if(A > 0){
        printf("%d é positivo.\n", A);

    } else if (A < 0){
        printf("%d é negativo.\n", A);

    } else {
        printf("%d é zero.\n", A);

    }
    
}
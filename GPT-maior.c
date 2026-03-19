#include <stdio.h>
#include <stdlib.h>

//Peça dois número e diga qual o maior ou se são iguais

int main(){

    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    int maior, menor;
    maior = a > b;
    menor = a < b;

    if (maior){
        printf("O número %d é maior.\n", a);

    } else if (menor){
        printf("O número %d é maior.\n", b);

    } else {
        printf("Os dois são iguais.\n");

    }

    return 0;
    
}
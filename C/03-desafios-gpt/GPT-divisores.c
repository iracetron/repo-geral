#include <stdio.h>
#include <stdlib.h>

//Peça um número e diga quantos divisores ele tem

int main(){

    int num;
    int i = 1;
    int contador = 0;

    printf("Digite um número: ");
    scanf(" %d", &num);

    while (i <= num){
        if(num % i == 0){
            printf("%d ", i);
            i++;
            contador++;

        } else {
            i++;

        }

    }

    printf("\nNúmero de divisores: %d \n", contador);

    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>

//Diga se o número é par ou ímpar e se é positivo ou negativo.


int main (){

    int numero, menu;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Verificar se o número é: \n");
    printf("1. Par ou Ímpar\n");
    printf("2. Positivo ou Negativo\n");
    scanf("%d", &menu);

    int par, positivo;
    par = numero % 2 == 0;
    positivo = numero >= 0;

    switch(menu){
        case 1:
            if(par){
            printf("O número %d é par.\n", numero);

            } else {
            printf("O número %d é ímpar.\n", numero);

            }
        break;

        case 2:
            if(positivo){
            printf("O número %d é positivo.\n", numero);

            } else {
            printf("O número %d é negativo.\n", numero);

            }
        break;

        default:
            printf("Inválido, tente novamente.\n");
        break;

    }
    

    return 0;

}
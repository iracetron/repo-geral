#include <stdio.h>

int ParouImpar(int numero);

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = ParouImpar(num);

    if (resultado == 1){
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }

    return 0;
}

int ParouImpar(int numero){

    if (numero % 2 == 0){
        return 1;
    }

    return 0;
}
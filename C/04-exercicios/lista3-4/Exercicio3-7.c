#include <stdio.h>

int fatorial(int numero);

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = fatorial(num);

    printf("Resultado: %d\n", resultado);


    return 0;
}

int fatorial(int numero){

    int mult = 1;

    for(int i = 1; i <= numero; i++){
        mult *= i;
    }

    return mult;
}
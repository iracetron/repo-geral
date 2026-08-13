#include <stdio.h>

int somaateN(int numero);

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = somaateN(num);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int somaateN(int numero){

    int soma = 0;

    for(int i = 1; i <= numero; i++){
        soma += i;
    }

    return soma;
    
}
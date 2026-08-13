#include <stdio.h>

int paresIntervalo(int numero1, int numero2);

int main(){

    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    int pares = paresIntervalo(num1, num2);

    printf("O número de pares contido no intervalo entre %d e %d é: %d\n", num1, num2, pares);

    return 0;
}

int paresIntervalo(int numero1, int numero2){

    int i;
    int limite = numero2;
    int contador = 0;

    for(i = numero1; i <= limite; i++){
        if(i % 2 == 0){
            contador++;
        }
    }

    return contador;
}
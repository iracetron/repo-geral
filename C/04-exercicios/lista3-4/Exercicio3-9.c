#include <stdio.h>

int potenciacao(int numero1, int numero2);

int main(){

    int num1, num2;

    printf("Digite a base: ");
    scanf("%d", &num1);
    printf("Digite o expoente: ");
    scanf("%d", &num2);

    int resultado = potenciacao(num1, num2);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int potenciacao(int numero1, int numero2){

    int base = numero1;
    int expoente = numero2;
    int i;
    int potencia = 1;

    for(i = 1; i <= expoente; i++){
        potencia *= base;
    }

    return potencia;

}
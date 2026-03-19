#include <stdio.h>

void troca(int *a, int *b);

int main(){

    int num1, num2;
    int *x = &num1, *y = &num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);

    troca(x, y);

    printf("Primeiro valor: %d\n", num1);
    printf("Segundo valor: %d\n", num2);

    return 0;
}

void troca(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}
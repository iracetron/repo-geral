#include <stdio.h> /*Não esquecer da #*/

int main(){
    int A, B, soma, subtr, multi, div, resto, quadradoA, quadradoB;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    /*Quando atribuir um valor a uma variável, utilizar o = (igual)*/

    soma = A + B;
    subtr = A - B;
    multi = A * B;
    div = A / B;
    resto = A % B;
    quadradoA = A * A;
    quadradoB = B * B;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtr.: %d\n", subtr);
    printf("Mult.: %d\n", multi);
    printf("Div.: %d\n", div);
    printf("Resto da Div.: %d\n", resto);
    printf("Quadrado de A: %d\n", quadradoA);
    printf("Quadrado de B: %d\n", quadradoB);
    
}
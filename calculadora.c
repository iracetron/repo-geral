#include <stdio.h>

int main(){

    float A, B, result;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%f", &A);
    printf("Digite o segundo valor: ");
    scanf("%f", &B);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operador); //trocar %c por %s
    // O espaço antes de %c em scanf(" %c", &operador) serve para ignorar espaços e ENTERs pendentes.

    switch(operador){
        case '+':
            result = A + B;
            printf("Resultado: %.2f\n", result);
            break;
        case '-':
            result = A - B;
            printf("Resultado: %.2f\n", result);
            break;
        case '*':
            result = A * B;
            printf("Resultado: %.2f\n", result);
            break;
        case '/':
            if(B != 0){
                result = A / B;
                printf("Resultado: %.2f\n", result);
            } else {
                printf("Erro! Divisão por zero.\n");

            }
            break;
        default:
            printf("Operação inválida.\n");
            
    }

}
#include <stdio.h>

#define texto "Informe seu produto, quantidade e valor unitário."

int main(){

    int A;
    float B, mult;
    char produto[50] = "";

    printf("%s\n", texto);

    printf("Nome do produto: ");
    scanf("%s", produto);
    printf("Quantidade: ");
    scanf("%d", &A);
    printf("Valor unitário (em R$): ");
    scanf("%f", &B);

    mult = A * B;

    printf("Total: R$%.2f\n", mult);

    return 0;
    
}
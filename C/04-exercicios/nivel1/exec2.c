#include <stdio.h>

int main(){
    
    int A, B, soma;

    printf("Digite o primeiro número: "); /*Adicione um espaço após os dois pontos para ter um espaço entre o texto e a digitação*/
    scanf("%d", &A);
    printf("Digite o segundo número: ");
    scanf("%d", &B);

    soma = A + B;

    printf("Resultado: %d\n", soma);

    return 0;
}
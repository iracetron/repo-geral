#include <stdio.h>

int main(){

    int A, B, subtr;

    printf("Digite o ano atual: ");
    scanf("%d", &A);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &B);

    subtr = A - B;

    printf("Idade: %d\n", subtr);

    return 0;
    
}
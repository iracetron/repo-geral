#include <stdio.h>

int main(){

    int A, B;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    if(A > B){
        printf("%d é maior que %d.\n", A, B);

    } else if (B > A){
        printf("%d é maior que %d.\n", B, A);

    } else {
        printf("%d é igual a %d.\n", A, B);

    }
    
}
#include <stdio.h>

int ehMaior(int n1, int n2);

int main(){

    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    int maior = ehMaior(num1, num2);
    
    if(num1 == num2){
        printf("Os números são iguais.\n");
    } else {
        printf("O maior é: %d.\n", maior);
    }

    return 0;
}

int ehMaior(int n1, int n2){
    
    if(n1 > n2){
        return n1;
    } else {
        return n2;
    }

}
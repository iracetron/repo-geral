#include <stdio.h>

float mediaAritmetica(float n1, float n2, float n3);

int main(){

    float num1, num2, num3;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite um número: ");
    scanf("%f", &num2);

    printf("Digite um número: ");
    scanf("%f", &num3);

    float mediatotal = mediaAritmetica(num1, num2, num3);

    printf("A média é: %.2f.\n", mediatotal);

    return 0;
}

float mediaAritmetica(float n1, float n2, float n3){

    float soma = n1+n2+n3;
    float media = soma/3;

    return media;

}
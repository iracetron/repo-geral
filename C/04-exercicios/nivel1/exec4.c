#include <stdio.h>

int main (){
 
    int C;
    float F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &C); /*Não esquecer do e comercial (&)*/

    F = C * 1.8 + 32;

    printf("Sua temperatura em Fahrenheit: %.2f\n", F);

    return 0;
}
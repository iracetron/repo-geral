#include <stdio.h>

#define texto "Informe sua idade e peso."

int main(){

    int idade = 0;
    float peso = 0.0;

    printf("%s\n", texto);

    printf("Idade:\n");
    scanf("%d", &idade);

    printf("Peso:\n");
    scanf("%f", &peso); /*No scanf não funciona o .<num>f, somente no printf*/

    printf("Sua idade é %d anos e seu peso é %.2f kg!\n", idade, peso); /*No printf não precisa colocar o &*/

    return 0;
}


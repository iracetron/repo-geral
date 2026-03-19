#include <stdio.h>

int main(){

    int num, menu;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Qual sua pergunta?\n");
    printf("1. Par ou ímpar?\n");
    printf("2. Positivo ou negativo?\n");
    scanf("%d", &menu);

        switch(menu){
            case 1:
                if(num % 2 == 0){
                 printf("O número %d é par.\n", num);

             } else {
                    printf("O número %d é ímpar.\n", num);
             }
        
            break;

            case 2:
                if(num > 0){
                    printf("O número %d é positivo.\n", num);

                } else if(num < 0) {
                    printf("O número %d é negativo.\n", num);
                } else {
                    printf("O número é zero.\n");
                }
            break;

                default:
                    printf("Menu inválido.");
            
        }

    return 0;

}
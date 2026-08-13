#include <stdio.h>

/*Criar MENU
Soma de múltiplos
Produto de intervalo
Valor absoluto
Maior de três
sair

Regras:
Funções não podem usar scanf nem printf
Entrada e saída somente no main
Cada função deve executar apenas um cálculo*/

int somaMultiplosde5(int numero);
int produtoIntervalo(int numero1, int numero2);
float valorAbsoluto(float numero);
int maiorde3(int numero1, int numero2, int numero3);

int main(){

    int menu;
    int num1, num2, num3;
    float num4;

    do{
        printf("\n ======== Menu ========\n");
        printf("1. Soma de Múltiplos\n");
        printf("2. Produto de Intervalo\n");
        printf("3. Valor Absoluto\n");
        printf("4. Maior de três números\n");
        printf("0. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            printf("Digite um número: ");
            scanf("%d", &num1);
            
            if(num1 >= 0){
                int somamult = somaMultiplosde5(num1);
                printf("Resultado: %d\n\n", somamult);
            } else {
                printf("Somente números positivos!\n\n");
            }

            break;

            case 2:
            printf("Digite o primeiro valor: ");
            scanf("%d", &num1);
            printf("Digite o segundo valor: ");
            scanf("%d", &num2);

            int produto = produtoIntervalo(num1, num2);
            printf("Resultado: %d\n\n", produto);

            break;

            case 3:
            printf("Digite um valor: ");
            scanf("%f", &num4);

            float valorabs = valorAbsoluto(num4);
            printf("Valor absoluto: |%f|\n\n", valorabs);

            break;
            
            case 4:
            printf("Digite o primeiro valor: ");
            scanf("%d", &num1);
            printf("Digite o segundo valor: ");
            scanf("%d", &num2);
            printf("Digite o terceiro valor: ");
            scanf("%d", &num3);

            int maior = maiorde3(num1, num2, num3);
            printf("O maior é: %d\n\n", maior);
            break;
            
            case 0:
            printf("Encerrando menu.\n\n");
            break;

            default:
            printf("Menu inválido!\n\n");
            break;

        }

    }while(menu != 0);

    return 0;
}

int somaMultiplosde5(int numero){

    int soma = 0;

    for(int i = 1; i <= numero; i++){
        if(i % 5 == 0){
            soma += i;
        }
    }

    return soma;
}

int produtoIntervalo(int numero1, int numero2){

    int produtoI = 1;
    int minintervalo, maxintervalo;

    if(numero1 < numero2){
        minintervalo = numero1;
        maxintervalo = numero2;
    } else {
        minintervalo = numero2;
        maxintervalo = numero1;
    }


    for(int i = minintervalo; i <= maxintervalo; i++){
        produtoI *= i;
    }

    return produtoI;
    
}

float valorAbsoluto(float numero){

    if(numero < 0){
        return numero * -1;
    }

    return numero;
}

int maiorde3(int numero1, int numero2, int numero3){

    if(numero1 > numero2 && numero1 > numero3){
        return numero1;
    } else if (numero2 > numero1 && numero2 > numero3){
        return numero2;
    } else {
        return numero3;
    }
}
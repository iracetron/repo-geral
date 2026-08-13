#include <stdio.h>

void divisoresdeN();
void tabuadadeN();
int fatorialdeN();
int ehPrimo();
int maxdivcomum();
void fibonacciateN();

int main(){

    int menu;
    int resultado, resultado2, resultado3;

    do{
        printf("\n=== Menu ===\n");
        printf("1. Divisores\n");
        printf("2. Tabuada\n");
        printf("3. Fatorial\n");
        printf("4. Primo\n");
        printf("5. Máximo Divisor Comum (MDC)\n");
        printf("6. Fibonacci\n");
        printf("0. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            divisoresdeN();
            printf("\n\n");
            break;

            case 2:
            tabuadadeN();
            printf("\n\n");
            break;

            case 3:
            resultado = fatorialdeN();
            printf("Fatorial: %d\n\n", resultado);
            break;

            case 4:
            resultado2 = ehPrimo();
            if(resultado2){
                printf("É primo.\n\n");
            } else {
                printf("Não é primo.\n\n");
            }
            break;

            case 5:
            resultado3 = maxdivcomum();
            printf("O MDC é: %d\n\n", resultado3);
            break;

            case 6:
            fibonacciateN();
            printf("\n\n");
            break;

            case 0:
            printf("Encerrando programa.\n\n");
            break;

            default:
            printf("Menu inválido.\n\n");
            break;

        }

    }while(menu != 0);

    return 0;
}

void divisoresdeN(){

    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
}

void tabuadadeN(){

    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

}

int fatorialdeN(){

    int num;
    int fatorial = 1;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }

    return fatorial;

}

int ehPrimo(){

    int num;
    int divisores = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0) divisores++;

    }

    if(divisores != 2){
            return 0;
    } 

    return 1;
}

int maxdivcomum(){

    int num1, num2;
    int div = 1;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);


    while(num2 != 0){
        div = num1 % num2;
        num1 = num2;
        num2 = div;
    }

    return num1;

}

void fibonacciateN(){

    int num;
    int fibo = 0, a = 0, b = 1;


    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d ", a);

    for(int i = 1; i < num; i++){
        fibo = a + b;
        a = b;
        b = fibo;

        printf("%d ", a);

    }

}
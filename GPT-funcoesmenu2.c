#include <stdio.h>

/*Criar um programa que trabalhe com um INTEIRO POSITIVO usando funções bem separadas:
Verificar se é primo
Mostrar todos os divisores do número
Soma de 1 até N
Mostrar a tabuada
Sair*/

int ehPrimo (int num){

    int contador = 0;
    int i = 1;

    while (i <= num){
        if(num % i == 0){
            contador++;
        }
        i++;
    }

    return contador == 2;

}

void divisores (int num){

    int i = 1;

    while(i <= num){
        if(num % i == 0){
            printf("%d ", i);
        }
        i++;
    }

}

int somaateN (int num){

    int i;
    int soma = 0;

    for (i = 1; i<= num; i++){
        soma += i;
    }

    return soma;
}

void tabuada(int num){
    
    int i = 1;

    while(i <= 10){
        int mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
        i++;

    }
    

}

int main(){

    int menu, num;

    do{
    printf("\n~x~x~x~ Menu ~x~x~x~\n");
    printf("1. Seu número é primo?\n");
    printf("2. Todos os Divisores\n");
    printf("3. Soma de 1 até N\n");
    printf("4. Tabuada\n");
    printf("0. Sair\n");
    scanf("%d", &menu);

        switch(menu){
            case 1:
            printf("Digite um número: ");
            scanf("%d", &num);
            if(num <= 0){
                printf("Digite um número positivo.\n");
                break;
            }

            if(ehPrimo(num)){
                printf("%d é primo.\n", num);
            } else {
                printf("%d não é primo.\n",num);
            }
            break;

            case 2:
            printf("Digite um número: ");
            scanf("%d", &num);
            if(num <= 0){
                printf("Digite um número positivo.\n");
                break;
            }    
            divisores(num);
            printf("\n");
            break;

            case 3:
            printf("Digite um número: ");
            scanf("%d", &num);
            if(num <= 0){
                printf("Digite um número positivo.\n");
                break;
            } 
            printf("Soma de 1 até %d = %d\n", num, somaateN(num));            
            break;

            case 4:
            printf("Digite um número: ");
            scanf("%d", &num);
            if(num <= 0){
                printf("Digite um número positivo.\n");
                break;
            } 
            tabuada(num);            
            break;

            case 0:
                printf("Obrigado pela preferência!\n");
            break;

            default:
                printf("Menu inválido.\n");
            break;

            }


    } while (menu != 0);

    return 0;
}
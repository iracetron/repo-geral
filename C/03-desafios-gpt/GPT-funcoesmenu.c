#include <stdio.h>
/*Utilizar funções
Criar um menu com várias opções para o usuário
O menu deve retornar para o início após qualquer escolha que não seja sair da aplicação*/

void sequencia (int num){

    int i;

    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}

void par(int num){

    int i;

    for (i = 1; i <= num; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}

void impar(int num){

    int i;

    for(i = 1; i <= num; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
}

void trios(int num){

    int i;

    for(i = 1; i <= num; i++){
        if(i % 3 == 0){
            printf("%d ", i);

        }
    }
}

int main(){

    int menu, num;

    do{

        printf("\n\n=== Menu ===\n");
        printf("1. Sequência de números\n");
        printf("2. Sequência de números pares\n");
        printf("3. Sequência de números ímpares\n");
        printf("4. Sequência de números múltiplos de 3\n");
        printf("0. Sair\n");
        scanf("%d", &menu);


        switch(menu){
            case 1:
            printf("Digite um número: ");
            scanf("%d", &num);
            sequencia(num);
            break;

            case 2:
            printf("Digite um número: ");
            scanf("%d", &num);        
            par(num);
            break;

            case 3:
            printf("Digite um número: ");
            scanf("%d", &num);            
            impar(num);
            break;

            case 4:
            printf("Digite um número: ");
            scanf("%d", &num);    
            trios(num);
            break;

            case 0:
                printf("Volte sempre!");
            break;

            default:
                printf("Menu inválido.");
            break;
        }
    }while(menu != 0);

    return 0;
}

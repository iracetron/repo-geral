#include <stdio.h>
#include <stdlib.h>

//Peça um número N e imprima:
//todos os números de 1 até N;
//apenas os pares.

int main(){

    int num, menu;
    int i = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Escolha: \n");
    printf("1. Sequência até %d \n", num);
    printf("2. Números pares até %d \n", num);
    printf("3. Números ímpares até %d \n", num);
    scanf(" %d", &menu);

    switch(menu){
        case 1:
        while (i <= num){
            printf("%d ", i);
            i++;
                
        }
        break;
        
        case 2:
        while(i <= num){
            if(i % 2 == 0){
                printf("%d ", i);
                i = i + 2;
            } else {
                i++;
            }

        }
        break;

        case 3:
        while(i <= num){
            if(i % 2 == 1){
                printf("%d ", i);
                i = i + 2;
            } else {
                i++;
            }
        }
        break;
        
        default:
        printf("Menu inválido.\n");
        break; 
    }

    return 0;

}